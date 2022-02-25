#include <arpa/inet.h>

#include <pthread.h>
#include <semaphore.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/socket.h>
#include <unistd.h>
#include <iostream>
using namespace std;

struct game{
    int p1, p2;
    //64 pola, 3(1 znak to znak konńca stringu) znaki na opisanie figury stojącej na polu, pierwsze 8 pól to pierwszy rząd następne 8 to kolejny itd.
    char chessboard[64][4] =
    {"wR1", "wN1", "wB1", "wKI", "wQU", "wB2", "wN2", "wR2",
     "wp1", "wp2", "wp3", "wp4", "wp5", "wp6", "wp7", "wp8",
     "xxx", "xxx", "xxx", "xxx", "xxx", "xxx", "xxx", "xxx",
     "xxx", "xxx", "xxx", "xxx", "xxx", "xxx", "xxx", "xxx",
     "xxx", "xxx", "xxx", "xxx", "xxx", "xxx", "xxx", "xxx",
     "xxx", "xxx", "xxx", "xxx", "xxx", "xxx", "xxx", "xxx",
     "bp1", "bp2", "bp3", "bp4", "bp5", "bp6", "bp7", "bp8",
     "bR1", "bN1", "bB1", "bKI", "bQU", "bB2", "bN2", "bR2",
    };
    int status =0; //0 - oczekiwanie na drugiego gracza, 1 ruch gracza białego, 2 ruch gracza czarnego
};

struct toThread{
    int socket;
    int chessboardId;
};

game GAMES[25];

void* white_player(void* param){
    toThread* dane;
    dane = (toThread *)param;
    int socket = dane->socket;
    int gameId = dane->chessboardId;
    char figura[4];
    string pole = "";
    int poleInt;
    int startPole;
    cout << "Dolaczyl gracz bialy" << endl;
    write(socket, "Grasz jako bialy", sizeof("Grasz jako bialy"));
    cout << "<bialy> id gry: " << gameId <<endl;
    while(true){
        char buf[100];
        memset(buf, 0 , sizeof(buf));
        read(socket, buf, sizeof(buf));
        if(GAMES[gameId].status ==0){
            write(socket, "Trwa oczekiwanie na drugiego gracza", sizeof("Trwa oczekiwanie na drugiego gracza"));
        }
        else if(GAMES[gameId].status ==1){
            for (int i = 0; i < 4; i++)
            {
                figura[i] = buf[i];
            }
            figura[3] = '\0';
            pole[0] = buf[4];
            pole[1] = buf[5];
            bool found = false;
            for(int i = 0; i < 64; i++){
                string current = GAMES[gameId].chessboard[i];
                string szukany = figura;
                cout<<"current: " + current<< " szukany: " +szukany <<endl;
                if(current == szukany)
                {
                    found = true;
                    startPole = i; 
                } 
            }
            if(found == false){
                write(socket, "Ta figura zostala juz zbita!", sizeof("Ta figura zostala juz zbita!"));
            }
            else if(figura[0] == 'b'){
                write(socket, "To nie jest twoja figura!", sizeof("To nie jest twoja figura!"));
            }
            else{
                write(socket, "Grasz jako bialy", sizeof("Grasz jako bialy"));
                poleInt = stoi(pole);
                poleInt--;
                strcpy(GAMES[gameId].chessboard[poleInt], figura);
                strcpy(GAMES[gameId].chessboard[startPole], "xxx");
                cout << buf<<endl;
                GAMES[gameId].status =2;
            }           
        }
        else if(GAMES[gameId].status ==2){
             write(socket, "Teraz jest kolej gracza czarnego", sizeof("Teraz jest kolej gracza czarnego"));
        }
        for(int i =0; i < 64 ; i++){
            if(i%8 == 0){
                cout<<endl;
            }
            cout << "|" << GAMES[gameId].chessboard[i] << "|";            
        }
        cout <<endl;
    }
}

void* black_player(void* param){
    //char[] startmsg = "Grasz jako czarny";
    toThread* dane;
    dane = (toThread *)param;
    int socket = dane->socket;
    int gameId = dane->chessboardId;
    char figura[4];
    string pole = "";
    int poleInt;
    int startPole;
    write(socket, "Grasz jako czarny", sizeof("Grasz jako czarny"));
    cout << "Dolaczyl gracz czarny" << endl;
    GAMES[gameId].status =1;
    cout << "<czarny> id gry: " << gameId <<endl;
    while(true){
        char buf[100];
        memset(buf, 0 , sizeof(buf));
        read(socket, buf, sizeof(buf));
        if(GAMES[gameId].status ==0){
            write(socket, "Trwa oczekiwanie na drugiego gracza", sizeof("Trwa oczekiwanie na drugiego gracza"));
        }
        else if(GAMES[gameId].status ==2){
            for (int i = 0; i < 4; i++)
            {
                figura[i] = buf[i];
            }
            figura[3] = '\0';
            pole[0] = buf[4];
            pole[1] = buf[5];
            bool found = false;
            for(int i = 0; i < 64; i++){
                string current = GAMES[gameId].chessboard[i];
                string szukany = figura;
                cout<<"current: " + current<< " szukany: " +szukany <<endl;
                if(current == szukany)
                {
                    found = true;
                    startPole = i; 
                } 
            }
            if(found == false){
                write(socket, "Ta figura zostala juz zbita!", sizeof("Ta figura zostala juz zbita!"));
            }
            else if(figura[0] == 'w'){
                write(socket, "To nie jest twoja figura!", sizeof("To nie jest twoja figura!"));
            }
            else{
                write(socket, "Grasz jako czarny", sizeof("Grasz jako czarny"));
                poleInt = stoi(pole);
                poleInt--;
                strcpy(GAMES[gameId].chessboard[poleInt], figura);
                strcpy(GAMES[gameId].chessboard[startPole], "xxx");
                cout << buf<<endl;
                GAMES[gameId].status =1;
            }
        }
        else if(GAMES[gameId].status ==1){
             write(socket, "Teraz jest kolej gracza bialego", sizeof("Teraz jest kolej gracza bialego"));
        }
        for(int i =0; i < 64 ; i++){
            if(i%8 == 0){
                cout<<endl;
            }
            cout << "|" << GAMES[gameId].chessboard[i] << "|";            
        }
        cout <<endl;
    }
    
}
int main()
{
    int serverSocket, newSocket;
    struct sockaddr_in serverAddr;
    struct sockaddr_storage serverStorage;

    serverSocket = socket(AF_INET, SOCK_STREAM, 0);
    serverAddr.sin_addr.s_addr = INADDR_ANY;
    serverAddr.sin_family = AF_INET;
    serverAddr.sin_port =htons(1234);
    bind(serverSocket, (struct sockaddr*)&serverAddr, sizeof(serverAddr));
    listen(serverSocket,50); //max 50 graczy, czyli 25 gier

    pthread_t tid[50];
    int color = 0; //0 - gracz bialy, 1, gracz czarny
    int threadsNumber = 0;
    while(true){
        newSocket = accept(serverSocket, NULL, NULL);
        //łączymy na zmianę graczy białego i czarnego
        toThread dane;
        dane.socket = newSocket;
        dane.chessboardId = threadsNumber/2;
        if(color == 0){
            pthread_create(&tid[threadsNumber++], NULL, white_player, &dane);
            GAMES[threadsNumber].p1 = threadsNumber;
            color = 1;
        } else {
            pthread_create(&tid[threadsNumber++], NULL, black_player, &dane);
            GAMES[threadsNumber].p2 = threadsNumber;
            color = 0;
        }

    }   
}