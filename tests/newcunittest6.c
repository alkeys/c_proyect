/*
 * File:   newcunittest6.c
 * Author: avi
 *
 * Created on 19 ago. 2021, 17:32:38
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

void testP_cero() {
    int V[5];
    int N=5;
    p_cero(V, N);
    int i;
    for (i = 0; i < N; i++) {
        CU_ASSERT_EQUAL(V[i],0);
    }

}

int main() {
    CU_pSuite pSuite = NULL;

    /* Initialize the CUnit test registry */
    if (CUE_SUCCESS != CU_initialize_registry())
        return CU_get_error();

    /* Add a suite to the registry */
    pSuite = CU_add_suite("newcunittest6", init_suite, clean_suite);
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
