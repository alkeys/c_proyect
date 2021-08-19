/*
 * File:   tes2.c
 * Author: avi
 *
 * Created on 18 ago. 2021, 17:02:51
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

void testRecorrer() {
    int V[]={1,254,40,8,9,4,100,5};
    char c[100];
    int cant=8;
    recorrer(V, c, cant);
    CU_ASSERT_STRING_EQUAL(c,"1-254-40-8-4-100-5-");
    
}

void testModificar() {
    int V[]={1,2,5,4};
    int N_casilla=2;
    int dato_sustitullente=0;
    modificar(V, N_casilla, dato_sustitullente);
    CU_ASSERT_EQUAL(V[N_casilla],0);
}

int main() {
    CU_pSuite pSuite = NULL;

    /* Initialize the CUnit test registry */
    if (CUE_SUCCESS != CU_initialize_registry())
        return CU_get_error();

    /* Add a suite to the registry */
    pSuite = CU_add_suite("tes2", init_suite, clean_suite);
    if (NULL == pSuite) {
        CU_cleanup_registry();
        return CU_get_error();
    }

    /* Add the tests to the suite */
    if ((NULL == CU_add_test(pSuite, "testRecorrer", testRecorrer)) ||
            (NULL == CU_add_test(pSuite, "testModificar", testModificar))) {
        CU_cleanup_registry();
        return CU_get_error();
    }

    /* Run all tests using the CUnit Basic interface */
    CU_basic_set_mode(CU_BRM_VERBOSE);
    CU_basic_run_tests();
    CU_cleanup_registry();
    return CU_get_error();
}
