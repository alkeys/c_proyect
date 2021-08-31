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
    p = (tipo_dato *) malloc(cant*sizeof (tipo_dato));
    for (i = 0; i < cant; i++)
        p[i] = v[i];

    v = (tipo_dato *) malloc(nueva_dimencion*sizeof (tipo_dato));
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

//V_1 datos del primer vector
//V_2 datos del segundo vector
//Vector salida datos de salida de la multiplicacion
//para multipicar matrix de la misma dimencion
void multliplicacion_matriz(tipo_dato **V_1,tipo_dato **V_2,tipo_dato **Vector_salida,int filas_aux, int colu_aux){

    int i,j,numero_salida=0,k,cont_aux=0;
    
    //variable para almacenar todos los datos
    tipo_dato **matrix_c;
       matrix_c = (tipo_dato **) malloc(filas_aux * sizeof (tipo_dato*));
    for (i = 0; i < filas_aux; i++) {
        matrix_c[i] = (tipo_dato *) malloc(colu_aux * sizeof (tipo_dato));
    }
       //bucle para la multiplicacion
        for (i = 0; i < filas_aux; i++) {
        for (j = 0; j < colu_aux; j++) {
            for (k = 0; k < colu_aux; k++) {                
                 numero_salida+=(V_1[i][k])*(V_2[k][j]);
            }
            matrix_c[i][j]=numero_salida;
            cont_aux++;
            numero_salida=0;
        }
        
        }
    
       
       
    for (i = 0; i < filas_aux; i++) {
        for (j = 0; j < colu_aux; j++) {
            Vector_salida[i][j]=matrix_c[i][j];
        }
    }
    free(matrix_c);
    return;
}




/*
 V=matriz 
 filas=cantidad de filas 
 
 */
void matrix_traspuesta(tipo_dato **V, int filas, int colunas) {
    tipo_dato **vector_aux;
    int i, j, aux = 0; 
  //copia de datos a un vactor aux
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




