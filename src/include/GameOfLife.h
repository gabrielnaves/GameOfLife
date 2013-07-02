/*
 * GameOfLife.h
 *
 *  Created on: Jun 29, 2013
 *      Authors: Icaro Mota
 *      		 Gabriel Naves
 */

#ifndef GAMEOFLIFE_H_
#define GAMEOFLIFE_H_

#include "Statistics.h"
#include "../include/CellObserver.h"
#include "Cell.h"
#include <vector>

/*! GameOfLife class definition
 *
 *  Modularizes the behavior of a game
 *  of life. In this version, just one algorithm
 *  for evolving the environment for a next generation is allowed.
 *  To solve this provlem, we could evolve this design using either
 *  the Strategy or Template Method design patterns
 *  (both).
 *
 *	In this implementation, this class is the subject
 *	participant of the Observer pattern, and the Statistics
 *	class is one of its subscribers.
 */

class GameOfLife {
 private:
  int width, height;
  std::vector<CellObserver*> list;
  Cell** cells;
  void killEnvironment();
  bool shouldRevive(int w, int h);
  bool shouldKill(int w, int h);
 public:
  /*! Constructor, taking the number of columns and rows,
   * and the list of observers */
  GameOfLife(int w, int h, std::vector<CellObserver*> list);

  /*! Returns the number of cells in the ALIVE state */
  int aliveCells();

  /*! Given the position of a cell, returns the number of alive neighbors */
  int aliveNeighborCells(int w, int h);

  /*! Checks whether a cell is alive */
  bool isCellAlive(int w, int h);

  /*! Makes a given cell alive */
  void makeCellAlive(int w, int h);

  /*! Kills a given cell */
  void makeCellDead(int w, int h);

  /*! Leads the game state to a next generation */
  void nextGeneration();

  /*! Access method to the number of columns */
  int getWidth() const { return width; }

  /*! Access method to the number of rows */
  int getHeight() const { return height; }

  /*! Notifies the observers*/
  void notify(int event);
};

#endif /* GAMEOFLIFE_H_ */
