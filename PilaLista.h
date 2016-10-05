#ifndef PILA_H_INCLUDED
#define PILA_H_INCLUDED

#include "LinkedListC.h"

typedef struct
{
  Lista datos;
} PilaLista;

void initPila(PilaLista &p);
void push(PilaLista &p, int value);
int pop(PilaLista &p);
int peek(PilaLista p);
bool isEmpty(PilaLista p);
