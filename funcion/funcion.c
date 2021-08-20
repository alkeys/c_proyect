#include <stdio.h>
#include <string.h>
#include "funcion.h"
#include <stdlib.h>//memoria dinamica
#include <stdbool.h>
//sprintf(c, "%d", n);
//convierte los valores enteros del vector a una cadena de char y de vuelve el dato mediante un puntero
//V puntero de vector 
//C puntero de cadena
//cant = cantidad de datos

void p_cero(int *V, int N) {
    int i;
    for (i = 0; i < N; i++) {
        V[i] = 0;
    }

}

void recorrer(int *V, char *C, int cant) {
    char aux[5000];
    char convertir_2[5];
    char convertir[3];
    int j = 0, l = 1;
    int i;
    for (i = 0; i < cant; i++) {
        int dato = V[i];
        if (dato < 100) {
            sprintf(convertir, "%d", dato);
        } else {
            sprintf(convertir_2, "%d", dato);
        }
        //1-20-3
        //j=2 j=3
        //l=3 == 4
        if (dato >= 100 && dato <= 999) {
            //0 1 2 3 4 5 6 7 8 9
            //1 - 4 5 6 - 7 - 4 -
            aux[j] = convertir_2[0];
            j++;
            aux[j] = convertir_2[1];
            j++;
            aux[j] = convertir_2[2]; //4byte
            l += 2;
            aux[l] = '-';
            //prueva el siguiente dato para ajustar los incrementadores
            if (dato + 1 > 9 && dato + 1 < 100) {
                j += 2;
                l += 2;
            } else {
                j += 2;
                l += 2;
            }
        }
        if (dato > 9 && dato < 100) {

            //0 1 2 3 4 5 6 7
            //1 - 2 0 - 3 0 -
            aux[j] = convertir[0];
            j++;
            aux[j] = convertir[1];
            l++;
            aux[l] = '-';
            //incrementadores
            j += 2;
            l += 2;
        } else {
            if (dato > 0 && dato < 9) {
                //ejemplo 1-2-3-4-5-6-7-8-9
                aux[j] = convertir[0];
                aux[l] = '-';
                j += 2;
                l += 2;
            }
        }
    }
    strcpy(C, aux);
    return;
}




//invierte el vector
// V vector
//N tamaño de vector

void invertir(int *V, int N) {
    int j = 0, aux_2[N];
    for (int i = 1; i <= N; i++) {
        aux_2[j] = V[N - i];
        j++;
    }
    for (int i = 0; i < N; i++) {
        V[i] = aux_2[i];
    }
    return;
}



//redimenciona el vecto con memoria dinamica
// v vector
// nueva dimencion 

void redimencionar(int *v, int nueva_dimencion) {
    int *p, i;
    size_t cant = anchura(v);
    p = (int *) calloc(cant, sizeof (int));
    for (i = 0; i < cant; i++)
        p[i] = v[i];

    v = (int *) calloc(nueva_dimencion, sizeof (int));
    for (i = 0; i < cant; i++)
        v[i] = p[i];
}






//remplaza todos lo valores que sean iguales al dato de remplazo
// V = vector

void remplazar(int *V, int dato_a_remplazar, int Nuevo_dato) {
    int i;
    for (i = 0; i < 5; i++) {
        if (V[i] == dato_a_remplazar) {
            V[i] = Nuevo_dato;
        }
    }
    return;
}







//modifica un espacio de memoria concreto

void modificar(int *V, int N_casilla, int dato_sustitullente) {
    V[N_casilla] = dato_sustitullente;
    return;
}






//inserta un dato en un espacio de memoria concreto
// V =vector
// N_casilla seleciona el espaci d memoria
//dato_a_insertar
//este metodo solo funciona cuando esta ordenado el vector 

void insertar(int *V, int N_casilla, int dato_a_insertar, int N) {
    size_t cant = anchura(V);
    bool verdad = true;
    int j,pos;
    for (j = 0; j < N; j++) {
        if(V[j]==0){
            pos=j;
        }
    }
    int aux = V[N_casilla];
    int aux2;
    V[N_casilla] = dato_a_insertar;
    int i = N_casilla+1;
    for (i ; i < pos; i++) {
        aux2=V[i];
        V[i]=aux;
        aux=aux2;
    }
    return;
}



//borra un espacio de memoria concreto
void borra(int *V, int N_casilla) {
    V[N_casilla] = 0;
    return;
}



//ordenamiento por incerccion
//V vector
//N tamaño del vector

void ordenamiento(int *V, int N) {
    int aux, i, j;
    for (j = 1; j < N; j++) {
        aux = V[j];
        i = j - 1;
        while (i>-1 && V[i] < aux) {
            V[i + 1] = V[i];
            i--;
        }
        V[i + 1] = aux;
    }

    return;
}


void buscar_remplazar(int *V,int numero,int remplazo,int N){
    int i;
    for (i = 0; i < N; i++) {
        if(V[i]==numero){
            V[i]=remplazo;
        }
    }

}