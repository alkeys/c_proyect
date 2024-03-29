#ifndef FUNCIONES_H
#define FUNCIONES_H

#include <stdio.h>

#define anchura(vector) (sizeof(vector)/sizeof(vector[0]))



typedef int tipo_dato;


struct mi_vector_carcteristicas{
    int filas;
    int colunas;
};

void multliplicacion_matriz(tipo_dato **V_1,tipo_dato **V_2,tipo_dato **Vector_salida, int filas_aux,int colu_aux);

void matrix_traspuesta(tipo_dato **V,int filas,int colunas);


void insertar(tipo_dato *V, tipo_dato dato_a_insertar,int N,char Vandera_);

void borra(tipo_dato *V, int N_casilla);

void ordenamiento(tipo_dato *V,int N);

void remplazar(tipo_dato *V,tipo_dato dato_a_remplazar,tipo_dato Nuevo_dato );

void invertir(tipo_dato *V,int N);

void redimencionar(tipo_dato *v,tipo_dato nueva_dimencion);

void poner_cero_todo(tipo_dato *V,int N);

void buscar_remplazar(tipo_dato *V,tipo_dato numero,tipo_dato remplazo,int N);

#endif /* FUNCIONES_H */