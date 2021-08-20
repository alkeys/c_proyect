#ifndef FUNCIONES_H
#define FUNCIONES_H

#include <stdio.h>

#define anchura(vector) (sizeof(vector)/sizeof(vector[0]))

void recorrer(int *V,char *C,int cant);

void modificar(int *V,int N_casilla,int dato_sustitullente);

void insertar(int *V, int N_casilla, int dato_a_insertar,int N);

void borra(int *V, int N_casilla);

void ordenamiento(int *V,int N);

void remplazar(int *V,int dato_a_remplazar,int Nuevo_dato );

void invertir(int *V,int N);

void redimencionar(int *v,int nueva_dimencion);

void p_cero(int *V,int N);

void buscar_remplazar(int *V,int numero,int remplazo,int N);
#endif /* FUNCIONES_H */