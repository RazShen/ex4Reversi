/*
 * Tomer Grady 205660863
 * Raz Shenkman 311130777
 */
#ifndef EX3WITHTESTS_DISPLAY_H
#define EX3WITHTESTS_DISPLAY_H

#include "Board.h"

/**
 * This is an abstract class for the display.
 */
class Display {
public:
    /**
     * this method prints the board
     * @param board a given board
     */
    virtual void printBoard(Board* board) = 0;
    /**
     * this method prints possible Moves
     * @param given positions
     * @param moves number of moves
     */
    virtual void possibleMoves(Pair positions[], int moves) = 0;
    /**
     * this method prints no valid move option
     */
    virtual void noValidMove() = 0;
    /**
     * this method prints no valid option
     */
    virtual void noValidOption() = 0;
    /**
     * this method prints a current board.
     */
    virtual void currentBoard() = 0;
    /**
     * this method prints it's Your Move for a player.
     */
    virtual void itsYourMove(Board::Status) = 0;
    /**
     * this method prints x played.
     */
    virtual void xPlayed() = 0;
    /**
     * this method prints o played.
     */
    virtual void oPlayed() = 0;
    /**
     * this method prints the welcome menu.
     */
    virtual void welcome() = 0;
    /**
     * this method prints and ask an input from the player.
     */
    virtual void getInput() = 0;
    /**
     * this method prints no possible moves for player.
     */
    virtual void noPossibleMoves() = 0;
    /**
     * this method prints new line.
     */
    virtual void newLine() = 0;
    /**
     * this method prints a pair.
     * @param p a given pair
     */
    virtual void printPair(Pair p) = 0;
    /**
     * this method prints game options.
     */
    virtual void chooseGameOptions() = 0;
    /**
     * this method prints any Key To Exit Massage.
     */
    virtual void anyKeyToExitMassage() = 0;
    /**
     * this method prints black win.
     */
    virtual void declareBlackWin() = 0;
    /**
     * this method prints white win.
     */
    virtual void declareWhiteWIn() = 0;
    /**
     * this method prints it's a draw.
     */
    virtual void declareDraw() = 0;
    /**
     * this method prints that the board it full.
     */
    virtual void fullBoard() = 0;
    /**
     * this method prints that there is no more moves for both player.
     */
    virtual void noMoreMovesForAll() = 0;

};
#endif //EX3WITHTESTS_DISPLAY_H