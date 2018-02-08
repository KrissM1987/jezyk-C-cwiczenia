//
// Stos w postaci listy LIFO
//

#ifndef STOS_H
#define STOS_H

#include <stdio.h>
#include <stdlib.h>

struct Dane{
    int indeks;
    int wartosc;
};

struct Wezel{
    struct Dane dane;
    struct Wezel *popr;
};

void push(struct Wezel **pTop, struct Dane dane);

struct Dane pop(struct Wezel **pTop);

struct Dane peek(struct Wezel *pTop);

int isEmpty(struct Wezel *top);

#endif //STOS_H
