#include <stdio.h>
#include <string.h>
#include "funcion.h"
#include <stdbool.h>
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

void remplazar(int *V,int dato_a_remplazar,int Nuevo_dato ){
    
}




//modifica un espacio de memoria concreto
void modificar(int *V, int N_casilla, int dato_sustitullente) {
    V[N_casilla]=dato_sustitullente;   
    return;
}

//inserta un dato en un espacio de memoria concreto
void insertar(int *V, int N_casilla, int dato_a_insertar){  
    size_t cant= anchura(V);
    bool verdad=false;
    for(int i=0;i<cant;i++){
        if(V[i]==NULL){
            verdad=true;
        }else{
            verdad=false;
        }
    }
    if(verdad){
     // 0 1 2 3 4
     // 1 5 6 7  ingresar dato en 2
     // 1 5   6 7
     int aux,aux2,k;   
     aux=V[N_casilla];   
     for(int i=N_casilla;i<cant;i++){
         
     }   
        
    }else{
        return;
    }
}

//borra un espacio de memoria concreto
void borra(int *V, int N_casilla) {
    V[N_casilla]=0;   
    return;
}


//ordenamiento por incerccion
void ordenamiento(int *V,int N){
     int aux,i,j;
    for (j = 1; j < N ;j++) {
        aux=V[j];
        i=j-1;
        while(i>-1 && V[i] > aux){
            V[i+1]=V[i];
            i--;
        }
        V[i+1]=aux;
    }

     
}

