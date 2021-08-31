/*
 * File:   newcunittest11.c
 * Author: avi
 *
 * Created on 30 ago. 2021, 10:38:07
 */

#include <stdio.h>
#include <stdlib.h>
#include <CUnit/Basic.h>
#include "../funcion/funcion.h"

/*
 * CUnit Test Suite
 */

int init_suite(void) {
    return 0;
}

int clean_suite(void) {
    return 0;
}

void multliplicacion_matriz(tipo_dato **V_1,tipo_dato **V_2,tipo_dato **Vector_salida, int filas_aux,int colu_aux);

void testMultliplicacion_matriz() {
    tipo_dato** V_1;
    int i,j;
      V_1 = (tipo_dato **) malloc(3 * sizeof (tipo_dato*));
    for (i = 0; i < 3; i++) {
        V_1[i] = (tipo_dato *) malloc(3 * sizeof (tipo_dato));
    }
    V_1[0][0]=3;
    V_1[0][1]=4;
    V_1[0][2]=5;
    ///
    V_1[1][0]=6;
    V_1[1][1]=7;
    V_1[1][2]=8;
    ///////
    V_1[2][0]=1;
    V_1[2][1]=2;
    V_1[2][2]=3;
    ////////////
      
    tipo_dato** V_2;
    V_2 = (tipo_dato **) malloc(3 * sizeof (tipo_dato*));
    for (i = 0; i < 3; i++) {
        V_2[i] = (tipo_dato *) malloc(3 * sizeof (tipo_dato));
    }
    //////////
    V_2[0][0]=6;
    V_2[0][1]=7;
    V_2[0][2]=3;
    ///////////
    //////////
    V_2[1][0]=5;
    V_2[1][1]=4;
    V_2[1][2]=3;
    ////////////
    //////////
    V_2[2][0]=0;
    V_2[2][1]=1;
    V_2[2][2]=3;
    //////////// 
    tipo_dato** Vector_salida;
          Vector_salida = (tipo_dato **) malloc(3 * sizeof (tipo_dato*));
    for (i = 0; i < 3; i++) {
        Vector_salida[i] = (tipo_dato *) malloc(3 * sizeof (tipo_dato));
    }
          
    multliplicacion_matriz(V_1, V_2, Vector_salida,3,3);
    
    CU_ASSERT_EQUAL(Vector_salida[0][0],38);
    CU_ASSERT_EQUAL(Vector_salida[0][1],42);
    CU_ASSERT_EQUAL(Vector_salida[0][2],36);
    ////////////////////////////////////////////
     CU_ASSERT_EQUAL(Vector_salida[1][0],71);
    CU_ASSERT_EQUAL(Vector_salida[1][1],78);
    CU_ASSERT_EQUAL(Vector_salida[1][2],63);
    ////////////////////////////////////////////
     CU_ASSERT_EQUAL(Vector_salida[2][0],16);
    CU_ASSERT_EQUAL(Vector_salida[2][1],18);
    CU_ASSERT_EQUAL(Vector_salida[2][2],18);
    ////////////////////////////////////////////
    
    
}

int main() {
    CU_pSuite pSuite = NULL;

    /* Initialize the CUnit test registry */
    if (CUE_SUCCESS != CU_initialize_registry())
        return CU_get_error();

    /* Add a suite to the registry */
    pSuite = CU_add_suite("newcunittest11", init_suite, clean_suite);
    if (NULL == pSuite) {
        CU_cleanup_registry();
        return CU_get_error();
    }

    /* Add the tests to the suite */
    if ((NULL == CU_add_test(pSuite, "testMultliplicacion_matriz", testMultliplicacion_matriz))) {
        CU_cleanup_registry();
        return CU_get_error();
    }

    /* Run all tests using the CUnit Basic interface */
    CU_basic_set_mode(CU_BRM_VERBOSE);
    CU_basic_run_tests();
    CU_cleanup_registry();
    return CU_get_error();
}
