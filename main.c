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
//cantidad maxima de datos = 0 a 999
    int *v,l,k;
    size_t j,t;
    v=(int *) calloc(5,sizeof(int));
    v[0]=1;
    v[1]=2;
    v[2]=66;
    v[3]=4;
    v[4]=5;
    j=anchura(v);
    redimencionar(v,8);
    t=anchura(v);
    v[5]=6;
    v[6]=7;
    v[7]=8;
    ordenamiento(v,8);
    l=(int)j;
    k=(int)t;
   
    
    int i;
    for (i = 0; i <8; i++) {
        printf("%d",v[i]);

    }


    
    return (EXIT_SUCCESS);
}

