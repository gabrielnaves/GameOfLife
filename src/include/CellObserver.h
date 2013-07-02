/*
 * CellObserver.h
 *
 *  Created on: Jun 30, 2013
 *      Authors: Icaro Mota
 *      		 Gabriel Naves
 */

#ifndef CELLOBSERVER_H_
#define CELLOBSERVER_H_

/*! CellObserver class definition
 *
 *  Base class for any observer of cell
 *  events (survive of kill).
 */

class CellObserver {
public:
	enum { CELL_SURVIVE = 1, CELL_KILL = 0 };
	virtual ~CellObserver() {}
	virtual void Update(int event) = 0;
};

#endif /* CELLOBSERVER_H_ */
