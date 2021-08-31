/*
 * File:   newcunittest9.c
 * Author: avi
 *
 * Created on 28 ago. 2021, 23:23:45
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

void testOrdenamiento() {
    tipo_dato V[3];
    V[0]=6;
    V[1]=7;
    V[2]=8;
    int N=3;
    ordenamiento(V, N);
    CU_ASSERT_EQUAL(V[0],8);
    CU_ASSERT_EQUAL(V[1],7);
    CU_ASSERT_EQUAL(V[2],6);

}

int main() {
    CU_pSuite pSuite = NULL;

    /* Initialize the CUnit test registry */
    if (CUE_SUCCESS != CU_initialize_registry())
        return CU_get_error();

    /* Add a suite to the registry */
    pSuite = CU_add_suite("newcunittest9", init_suite, clean_suite);
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
