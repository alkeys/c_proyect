/*
 * File:   newcunittest8.c
 * Author: avi
 *
 * Created on 28 ago. 2021, 23:16:13
 */

#include <stdio.h>
#include <stdlib.h>
#include <CUnit/Basic.h>
//#include "../funcion/funcion.h"
typedef int tipo_dato;


/*
 * CUnit Test Suite
 */

int init_suite(void) {
    return 0;
}

int clean_suite(void) {
    return 0;
}

void p_cero(tipo_dato* V, int N);

void testP_cero() {
    tipo_dato V[2];
    V[0]=2;
    V[1]=3;
    int N=2;
    p_cero(V, N);
    CU_ASSERT_EQUAL(V[0],0);
    
}

int main() {
    CU_pSuite pSuite = NULL;

    /* Initialize the CUnit test registry */
    if (CUE_SUCCESS != CU_initialize_registry())
        return CU_get_error();

    /* Add a suite to the registry */
    pSuite = CU_add_suite("newcunittest8", init_suite, clean_suite);
    if (NULL == pSuite) {
        CU_cleanup_registry();
        return CU_get_error();
    }

    /* Add the tests to the suite */
    if ((NULL == CU_add_test(pSuite, "testP_cero", testP_cero))) {
        CU_cleanup_registry();
        return CU_get_error();
    }

    /* Run all tests using the CUnit Basic interface */
    CU_basic_set_mode(CU_BRM_VERBOSE);
    CU_basic_run_tests();
    CU_cleanup_registry();
    return CU_get_error();
}
