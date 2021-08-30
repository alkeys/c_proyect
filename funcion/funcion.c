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



#define filas(vector) (sizeof(vector)/sizeof(vector[0]))

#define colunas(vector) ((sizeof(vector)/sizeof(vector[0][0]))/filas(vector))

void p_cero(tipo_dato *V, int N) {
    int i;
    for (i = 0; i < N; i++) {
        V[i] = 0;
    }
}

void recorrer(tipo_dato *V, char *C, int cant) {
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

void invertir(tipo_dato *V, int N) {
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

void redimencionar(tipo_dato *v, int nueva_dimencion) {
    int *p, i;
    size_t cant = anchura(v);
    p = (tipo_dato *) calloc(cant, sizeof (tipo_dato));
    for (i = 0; i < cant; i++)
        p[i] = v[i];

    v = (tipo_dato *) calloc(nueva_dimencion, sizeof (tipo_dato));
    for (i = 0; i < cant; i++)
        v[i] = p[i];
}






//remplaza todos lo valores que sean iguales al dato de remplazo
// V = vector

void remplazar(tipo_dato *V, tipo_dato dato_a_remplazar, tipo_dato Nuevo_dato) {

    int i;
    for (i = 0; i < 5; i++) {
        if (V[i] == dato_a_remplazar) {
            V[i] = Nuevo_dato;
        }
    }
    return;
}






//modifica un espacio de memoria concreto

void modificar(tipo_dato *V, int N_casilla, tipo_dato dato_sustitullente) {
    V[N_casilla] = dato_sustitullente;
    return;
}

//inserta un dato en un espacio de memoria concreto
// V =vector
// N_casilla seleciona el espaci d memoria
//dato_a_insertar
//este metodo solo funciona cuando esta ordenado el vector 

void insertar(tipo_dato *V, int N_casilla, tipo_dato dato_a_insertar) {
    size_t cant = anchura(V);
    bool verdad = false;

    if (verdad) {
        // 0 1 2 3 4
        // 1 5 6 7  ingresar dato en 2
        // 1 5   6 7
        int aux, aux2, k;
        aux = V[N_casilla];
        for (int i = N_casilla; i < cant; i++) {

        }

    } else {
        return;
    }
    return;
}

//borra un espacio de memoria concreto

void borra(tipo_dato *V, int N_casilla) {
    V[N_casilla] = 0;
    return;
}


//ordenamiento por incerccion
//V vector
//N tamaño del vector

void ordenamiento(tipo_dato *V, int N) {
    tipo_dato aux, i, j;
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

void buscar_remplazar(tipo_dato *V, tipo_dato numero, tipo_dato remplazo, int N) {
    int i;
    for (i = 0; i < N; i++) {
        if (V[i] == numero) {
            V[i] = remplazo;
        }
    }

}

void matrix_traspuesta(tipo_dato **V, int filas, int colunas) {
    tipo_dato **vector_aux;
    int i, j, aux = 0; 
  
    vector_aux = (tipo_dato **) malloc(colunas * sizeof (tipo_dato*));
    for (i = 0; i < colunas; i++) {
        vector_aux[i] = (tipo_dato *) malloc(filas * sizeof (tipo_dato));
    }
    for (i = 0; i < colunas; i++) {
    for (j = 0; j < filas ; j++) {
        vector_aux[i][j]=V[j][i];
    }   
    }
    free(V);
 //redimencion de matriz
    V = (tipo_dato **) malloc(colunas * sizeof (tipo_dato*));
    for (i = 0; i < colunas; i++) {
        V[i] = (tipo_dato *) malloc(filas * sizeof (tipo_dato));
    }
    //se copian lo nuevos valores
    for (i = 0; i < colunas; i++) {
    for (j = 0; j < filas ; j++) {
        V[i][j]=vector_aux[i][j];
    }   
    }
    free(vector_aux);
    return;
}




