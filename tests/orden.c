/*
 * File:   orden.c
 * Author: avi
 *
 * Created on 18 ago. 2021, 22:49:30
 */

#include <stdio.h>
#include <stdlib.h>
#include <CUnit/Basic.h>
#include <../funcion/funcion.h>
/*
 * CUnit Test Suite
 */

int init_suite(void) {
    return 0;
}

int clean_suite(void) {
    return 0;
}

void ordenamiento(int* V, int N);

void testOrdenamiento() {
   int V[]={5,1,8,9,4,3};
   int N=6;
    ordenamiento(V,N);
    CU_ASSERT_EQUAL(V[0],9);
    CU_ASSERT_EQUAL(V[1],8);
    CU_ASSERT_EQUAL(V[2],5);
    CU_ASSERT_EQUAL(V[5],1);
}

int main() {
    CU_pSuite pSuite = NULL;

    /* Initialize the CUnit test registry */
    if (CUE_SUCCESS != CU_initialize_registry())
        return CU_get_error();

    /* Add a suite to the registry */
    pSuite = CU_add_suite("orden", init_suite, clean_suite);
    if (NULL == pSuite) {
        CU_cleanup_registry();
        return CU_get_error();
    }

    /* Add the tests to the suite */
    if ((NULL == CU_add_test(pSuite, "testOrdenamiento", testOrdenamiento))) {
        CU_cleanup_registry();
        return CU_get_error();
    }

    /* Run all tests using the CUnit Basic interface */
    CU_basic_set_mode(CU_BRM_VERBOSE);
    CU_basic_run_tests();
    CU_cleanup_registry();
    return CU_get_error();
}
