#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//

struct l
{
  struct l *siguiente;
  int dato;
}

typedef struct l listaEnteros;

listaEnteros *iniciarLista(int dato);
void eliminarLista(listaEnteros **);
void agregarInicio(listaEnteros **);
void agregarFinal(listaEnteros *);
int cantidadElementos(listaEnteros *);
void imprimirLista(listaEnteros *);

int main()
{
  listaEnteros *lista = iniciarLista();

  return 0;
}

listaEnteros *iniciarLista()
{
  listaEnteros *primero = NULL;
  return primero;
}

void agregarInicio(listaEnteros **lista, int dato)
{
  listaEnteros nuevo =
}

void eliminarLista(listaEnteros **lista)
{
  if (*lista.siguiente != NULL)
    eliminarLista(*lista.siguiente);
  free(*lista);
}