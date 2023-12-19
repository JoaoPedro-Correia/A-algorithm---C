#include <stdio.h>

struct cell {
  int f;
  int point[2];
  int val;
  struct cell *previous;
};

void init_cell(struct cell *noh, int x, int y, int val) {
  noh->f = 999;
  noh->point[0] = x;
  noh->point[1] = y;
  noh->val = val;
  noh->previous = NULL;
}

int getX(struct cell *c) { return c->point[0]; }

int getY(struct cell *c) { return c->point[1]; }

int *getPoint(struct cell *c) { return c->point; }

int get_val(struct cell *c) { return c->val; }

void setF(struct cell *c, int f) { c->f = f; }

int getF(struct cell *c) { return c->f; }

void set_previous(struct cell *c, struct cell *n) { c->previous = n; }
