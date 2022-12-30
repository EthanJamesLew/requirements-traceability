#ifndef LIFE_H
#define LIFE_H

/**
 * render the game of life universe grid
 * 
 * @satisfy{@req{FMT01}} print and flushes stdout
 * @satisfy{@req{FMT03}} prints whitespace if empty
*/
void show(void *u, int w, int h);

/**
 * apply game of life update rules
 * 
 * @satisfy{@req{CELL01}} underpopulation 
 * @satisfy{@req{CELL02}} stays the same
 * @satisfy{@req{CELL03}} overpopulation
 * @satisfy{@req{CELL04}} reprdocution
*/
void evolve(void *u, int w, int h);

/**
 * create intial game state and update automatically
 * 
 * @satisfy{@req{FMT02}} update automatically
*/
void game(int w, int h);
#endif