/* 
 * File:   main.c
 * Author: avi
 *
 * Created on 17 de agosto de 2021, 4:54
 */
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>
#include <stdbool.h>
#include "funcion/funcion.h"

int main(int argc, char** argv) {
    tipo_dato **V;
    V = (tipo_dato **) malloc(3 *sizeof (tipo_dato*));
    int i,j;
    for (i = 0; i < 3; i++) {
        V[i]=(tipo_dato *) malloc(2 *sizeof (tipo_dato));
    }
    V[0][0]=1;
    V[0][1]=2;
    V[1][0]=3;
    V[1][1]=4;
    V[2][0]=5;
    V[2][1]=6;
    matrix_traspuesta(V,3,2);
   
   for (i = 0; i < 2; i++) {
    for (j = 0; j < 3 ; j++) {
        printf("%d",V[i][j]);
    }   
    printf("\n");
    }

    
    
    return (EXIT_SUCCESS);
}

