/*
 * File:   newcunittest3.c
 * Author: avi
 *
 * Created on 18 ago. 2021, 10:10:38
 */

#include <stdio.h>
#include <stdlib.h>
#include <CUnit/Basic.h>


int init_suite(void) {
    return 0;
}

int clean_suite(void) {
    return 0;
}

void testRecorrer() {
    int n=8;
    char c[10];
    int v[]={1,2,3,4,5,6,7,8};
    recorrer(v,c,n);
    
}

void convercion_(int numero);

void testConvercion_() {


}

int main() {
    CU_pSuite pSuite = NULL;

    /* Initialize the CUnit test registry */
    if (CUE_SUCCESS != CU_initialize_registry())
        return CU_get_error();

    /* Add a suite to the registry */
    pSuite = CU_add_suite("newcunittest3", init_suite, clean_suite);
    if (NULL == pSuite) {
        CU_cleanup_registry();
        return CU_get_error();
    }

    /* Add the tests to the suite */
    if ((NULL == CU_add_test(pSuite, "testRecorrer", testRecorrer)) ||
            (NULL == CU_add_test(pSuite, "testConvercion_", testConvercion_))) {
        CU_cleanup_registry();
        return CU_get_error();
    }

    /* Run all tests using the CUnit Basic interface */
    CU_basic_set_mode(CU_BRM_VERBOSE);
    CU_basic_run_tests();
    CU_cleanup_registry();
    return CU_get_error();
}
