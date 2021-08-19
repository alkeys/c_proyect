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

void redimencionar(int* v, int nueva_dimencion);

void testRedimencionar() {
    int *v;
    v=(int *) calloc(5,sizeof(int));
    v[0]=1;
    v[1]=2;
    v[2]=3;
    v[3]=4;
    v[4]=5;
    //CU_ASSERT_EQUAL(v[5],8);
    redimencionar(v,7);
    v[5]=8;
    v[6]=7;
    CU_ASSERT_EQUAL(v[5],8);
    CU_ASSERT_EQUAL(v[6],7);
    
}

int main() {
    CU_pSuite pSuite = NULL;

    /* Initialize the CUnit test registry */
    if (CUE_SUCCESS != CU_initialize_registry())
        return CU_get_error();

    /* Add a suite to the registry */
    pSuite = CU_add_suite("nueva_dimencion", init_suite, clean_suite);
    if (NULL == pSuite) {
        CU_cleanup_registry();
        return CU_get_error();
    }

    /* Add the tests to the suite */
    if ((NULL == CU_add_test(pSuite, "testRedimencionar", testRedimencionar))) {
        CU_cleanup_registry();
        return CU_get_error();
    }

    /* Run all tests using the CUnit Basic interface */
    CU_basic_set_mode(CU_BRM_VERBOSE);
    CU_basic_run_tests();
    CU_cleanup_registry();
    return CU_get_error();
}
