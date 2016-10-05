#include "PilaLista.h"

void initPila(PilaLista &p)
{
  initLista(p.datos);
}

void push(PilaLista &p, int value)
{
  addFirst(p.datos, value);
}

int pop(PilaLista &p)
{
  int stackValue = NO_HAY_VALOR;
  
  stackValue = deleteFirst(p.datos);
  
  return stackValue;
}

int peek(PilaLista p)
{
  int stackValue = NO_HAY_VALOR;
  
  stackValue = getFirstValue(p.datos);
  
  return 



}
