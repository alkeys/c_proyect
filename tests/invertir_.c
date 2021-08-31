/*
 * File:   newcunittest13.c
 * Author: avi
 *
 * Created on 30 ago. 2021, 18:24:52
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

void testInvertir() {
    tipo_dato V[3];
    V[0]=9;
    V[1]=8;
    V[2]=5;
    int N=3;
    invertir(V, N);
    CU_ASSERT_EQUAL(V[0],5);
    CU_ASSERT_EQUAL(V[1],8);
    CU_ASSERT_EQUAL(V[2],9);
}

int main() {
    CU_pSuite pSuite = NULL;

    /* Initialize the CUnit test registry */
    if (CUE_SUCCESS != CU_initialize_registry())
        return CU_get_error();

    /* Add a suite to the registry */
    pSuite = CU_add_suite("newcunittest13", init_suite, clean_suite);
    if (NULL == pSuite) {
        CU_cleanup_registry();
        return CU_get_error();
    }

    /* Add the tests to the suite */
    if ((NULL == CU_add_test(pSuite, "testInvertir", testInvertir))) {
        CU_cleanup_registry();
        return CU_get_error();
    }

    /* Run all tests using the CUnit Basic interface */
    CU_basic_set_mode(CU_BRM_VERBOSE);
    CU_basic_run_tests();
    CU_cleanup_registry();
    return CU_get_error();
}
