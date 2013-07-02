/*
 * Cell.cpp
 *
 *  Created on: Jun 29, 2013
 *      Author: icaro
 */

#include "../include/Cell.h"

Cell::Cell(){
  state = ALIVE;
}

void Cell::kill() {
  state = DEAD;
}

void Cell::revive() {
  state = ALIVE;
}

bool Cell::isAlive() {
  return state == ALIVE;
}
