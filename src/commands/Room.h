//
// Created by raz on 12/23/17.
//

#ifndef EX4_ROOM_H
#define EX4_ROOM_H
#include <string>

using namespace std;

class Room {
public:
    Room(int playerSocket, const string &name);
    const string &getRoomName() const;

    int getOtherSocket(int playerSocket);

    void connectPlayer2(int playerSocket);

    bool isRunning();

    void setRoomName(const string &roomName);

    void setSocket1(int socket1);

    void startGame();

private:
    string nameOfRoom;
    int playerSocket1;
    int playerSocket2;
    bool started;
};


#endif //EX4_ROOM_H