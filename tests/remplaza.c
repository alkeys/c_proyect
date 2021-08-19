/*
 * File:   remplaza.c
 * Author: avi
 *
 * Created on 18 ago. 2021, 23:30:48
 */

#include <stdio.h>
#include <stdlib.h>
#include <CUnit/Basic.h>


/*
 * CUnit Test Suite
 */

int init_suite(void) {
    return 0;
}

int clean_suite(void) {
    return 0;
}

void testRemplazar() {
    //se remplazara los 7
    int V[]={7,8,7,9,6};
    int dato_a_remplazar=7;
    int Nuevo_dato=4;
    remplazar(V, dato_a_remplazar, Nuevo_dato);
    CU_ASSERT_EQUAL(V[0],4);
    CU_ASSERT_EQUAL(V[2],4);
}

int main() {
    CU_pSuite pSuite = NULL;

    /* Initialize the CUnit test registry */
    if (CUE_SUCCESS != CU_initialize_registry())
        return CU_get_error();

    /* Add a suite to the registry */
    pSuite = CU_add_suite("remplaza", init_suite, clean_suite);
    if (NULL == pSuite) {
        CU_cleanup_registry();
        return CU_get_error();
    }

    /* Add the tests to the suite */
    if ((NULL == CU_add_test(pSuite, "testRemplazar", testRemplazar))) {
        CU_cleanup_registry();
        return CU_get_error();
    }

    /* Run all tests using the CUnit Basic interface */
    CU_basic_set_mode(CU_BRM_VERBOSE);
    CU_basic_run_tests();
    CU_cleanup_registry();
    return CU_get_error();
}
