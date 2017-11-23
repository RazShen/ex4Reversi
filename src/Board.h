//ID: 311130777
//Name: Raz Shenkman
/*
 * Board.h
 *  This class features a game board.
 *  Created on: Nov 02, 2017
 *      Author: Raz Shenkman
 */

#ifndef BOARD_H_
#define BOARD_H_

#include "Pair.h"
/**
 * This class features a game board.
 */
class Board {
public:
    //Enum for the status of the cell
    enum Status {Empty, White, Black};
    /**
    * This constructor creates a board from an inputted size.
    * @param size- wanted size for the board.
    */
    Board(int& size);
    Board(const Board& b);

    /**
    * This method returns status of desired cell.
    * @param p inputted pair for getting the cell.
    * @return cell's status.
    */
    Status getCellStatus (const Pair& p) const;
    /**
    * This method changes status of desired cell.
    * @param p inputted pair for getting the cell.
    * @param s desired input status.
    */
    void changeStatus(const Pair& p, Status s);
    /**
     * This method checks if all the board cells have values in them.
     * @return true/false.
     */
    bool isBoardFull() const;
    int getSize() const;
    /**
    * Destructor for the board.
    */
    ~Board();
private:
    // The cells of the board.
    Status** cellArray;
    int size;
};

#endif /* BOARD_H_ */