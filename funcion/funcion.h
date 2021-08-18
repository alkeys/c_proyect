#ifndef FUNCIONES_H
#define FUNCIONES_H

#include <stdio.h>


#define anchura(vector) (sizeof(vector)/sizeof(vector[0]))


void recorrer(int *V,char *C,int cant);

void modificar(int *V,int N_casilla,int dato_sustitullente);


#endif /* FUNCIONES_H */