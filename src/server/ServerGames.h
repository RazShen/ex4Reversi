//
// Created by tomer on 12/25/17.
//

#ifndef EX4_SERVERGAMES_H
#define EX4_SERVERGAMES_H

#include <vector>
#include "../commands/Room.h"

class ServerGames {
private:
    static ServerGames *instance;
    ServerGames();
    ServerGames(const ServerGames &other);
    ~ServerGames();

    vector<Room> gamesList;
    void handleClients(int player1, int player2);
    bool transferMessage(int sender, int receiver);
public:

    static ServerGames *getInstance();
 //   static void deleteInstance();
    vector<Room>::iterator getGame(string gameName);
    void deleteGame(string gameName);
    void addGame(string gameName, int clientSocket);
    bool isGameInList(string gameName);
    void joinToGame(string gameName, int clientSocket);
    string sendListGames();
    int size();
    void initializingPlayer(int playerSocket, int playerNum);
    bool isGameRunning(string gameName);
};


#endif //EX4_SERVERGAMES_H
