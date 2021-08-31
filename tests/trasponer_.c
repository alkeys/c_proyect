/*
 * File:   newcunittest10.c
 * Author: avi
 *
 * Created on 29 ago. 2021, 18:51:02
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

void testMatrix_traspuesta() {
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
    CU_ASSERT_EQUAL(V[0][0],1);
    CU_ASSERT_EQUAL(V[0][1],3);
    CU_ASSERT_EQUAL(V[0][2],5);
  
}

int main() {
    CU_pSuite pSuite = NULL;

    /* Initialize the CUnit test registry */
    if (CUE_SUCCESS != CU_initialize_registry())
        return CU_get_error();

    /* Add a suite to the registry */
    pSuite = CU_add_suite("newcunittest10", init_suite, clean_suite);
    if (NULL == pSuite) {
        CU_cleanup_registry();
        return CU_get_error();
    }

    /* Add the tests to the suite */
    if ((NULL == CU_add_test(pSuite, "testMatrix_traspuesta", testMatrix_traspuesta))) {
        CU_cleanup_registry();
        return CU_get_error();
    }

    /* Run all tests using the CUnit Basic interface */
    CU_basic_set_mode(CU_BRM_VERBOSE);
    CU_basic_run_tests();
    CU_cleanup_registry();
    return CU_get_error();
}
