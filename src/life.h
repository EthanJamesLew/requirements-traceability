#ifndef LIFE_H
#define LIFE_H

/**
 * This is the basic executive that schedules processes.
 * @satisfy{@req{1114}}
 */
void show(void *u, int w, int h);

void evolve(void *u, int w, int h);

void game(int w, int h);
#endif