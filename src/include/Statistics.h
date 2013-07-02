/*
 * Statistics.h
 *
 *  Created on: Jun 29, 2013
 *      Authors: Icaro Mota
 *      		 Gabriel Naves
 */

#ifndef STATISTICS_H
#define STATISTICS_H

#include "CellObserver.h"

/*! Statistics class definition
 *
 * This class keeps a history of the number
 * of killed and revived cells.
 *
 * In order to be an observer of the
 * GameOfLife class, it inherits the base
 * abstract class CellObserver.
 */
class Statistics : public CellObserver {
private:
	int survivors;
	int killed;
public:
	/*! Basic constructor, initializing the number of survivors and killed cells to zero */
	Statistics() : survivors(0), killed(0) {}

	/*! Notifies that a cell was revived */
	void survive();

	/*! Notifies that a cell was killed */
	void kill();

	/*! Updates the instance of the class */
	void Update(int event);
};

#endif
