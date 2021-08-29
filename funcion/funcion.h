#ifndef FUNCIONES_H
#define FUNCIONES_H

#include <stdio.h>

#define anchura(vector) (sizeof(vector)/sizeof(vector[0]))

#define filas(vector) (sizeof(vector)/sizeof(vector[0]))

#define colunas(vector) ((sizeof(vector)/sizeof(vector[0][0]))/filas(vector))

typedef int tipo_dato;


struct mi_vector_carcteristicas{

    int filas;
    int colunas;
};

void matrix_traspuesta(tipo_dato **V);

void recorrer(tipo_dato *V,char *C,int cant);

void modificar(tipo_dato *V,int N_casilla,tipo_dato dato_sustitullente);

void insertar(tipo_dato *V, int N_casilla, tipo_dato dato_a_insertar);

void borra(tipo_dato *V, int N_casilla);

void ordenamiento(tipo_dato *V,int N);

void remplazar(tipo_dato *V,tipo_dato dato_a_remplazar,tipo_dato Nuevo_dato );

void invertir(tipo_dato *V,int N);

void redimencionar(tipo_dato *v,tipo_dato nueva_dimencion);

void poner_cero_todo(tipo_dato *V);

void buscar_remplazar(tipo_dato *V,tipo_dato numero,tipo_dato remplazo,int N);

#endif /* FUNCIONES_H */