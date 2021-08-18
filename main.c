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

    char c[2000];
   int v[]={998,254,40,8,999,4};
    int i;
    int n=anchura(v);
    recorrer(&v,&c,n);
    printf("%s",c);
  
    
    return (EXIT_SUCCESS);
}

