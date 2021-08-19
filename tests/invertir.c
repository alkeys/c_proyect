/*
 * File:   invertir.c
 * Author: avi
 *
 * Created on 18 ago. 2021, 23:43:45
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

void testInvertir() {
    int V[]={1,2,3,4,5};
    invertir(V,5);
  CU_ASSERT_EQUAL(V[0],5);
  CU_ASSERT_EQUAL(V[1],4);
  CU_ASSERT_EQUAL(V[2],3);
  CU_ASSERT_EQUAL(V[3],2);
  CU_ASSERT_EQUAL(V[4],1);     
}

int main() {
    CU_pSuite pSuite = NULL;

    /* Initialize the CUnit test registry */
    if (CUE_SUCCESS != CU_initialize_registry())
        return CU_get_error();

    /* Add a suite to the registry */
    pSuite = CU_add_suite("invertir", init_suite, clean_suite);
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
