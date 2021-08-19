#include <stdio.h>
#include <string.h>
#include "funcion.h"

//sprintf(c, "%d", n);
//convierte los valores enteros del vector a una cadena de char y de vuelve el dato mediante un puntero
//V puntero de vector 
//C puntero de cadena
//cant = cantidad de datos
void recorrer(int *V, char *C, int cant) {
    char aux[5000];
    char convertir_2[5];
    char convertir[3];
    int j = 0, l = 1;
    int i;
    for (i = 0; i < cant; i++) {
        int dato = V[i];
        if(dato<100){
        sprintf(convertir, "%d", dato);    
        }else{
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
            if (dato+1 > 9 && dato+1 < 100) {
                j += 2;
                l += 2;
            }else{
                j+=2;
                l+=2;
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
            if(dato >0 && dato<9){   
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

//modifica un espacio de memoria concreto
void modificar(int *V, int N_casilla, int dato_sustitullente) {
    V[N_casilla]=dato_sustitullente;   
    return;
}

//inserta un dato en un espacio de memoria concreto
void insertar(int *V, int N_casilla, int dato_a_insertar){  
    int aux[N_casilla];
    
}

//borra un espacio de memoria concreto
void borra(int *V, int N_casilla) {
    V[N_casilla]=0;   
    return;
}