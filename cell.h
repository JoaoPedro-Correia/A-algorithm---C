#ifndef CELL
#define CELL
#include "cell.c"

typedef struct cell Cell;

// INICIALIZA A ESTRUTURA
void init_cell(struct cell *noh, int x, int y, int val);

int get_val(struct cell *c);

// ATUALIZA SEU F
void setF(struct cell *c, int f);

int getF(struct cell *c);

int *getPoint(struct cell *c);

// INDICA A O CAMINHO PAI
void set_previous(struct cell *c, Cell *n);

int getX(struct cell *c);

int getY(struct cell *c);
#endif
