/*
 * File:   isertar_datos.c
 * Author: avi
 *
 * Created on 30 ago. 2021, 18:58:59
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

void testInsertar() {
   tipo_dato V[6];
    p_cero(V, 6);
    V[0] = 1;
    V[1] = 2;
    V[2] = 4;
    V[3] = 5;
    tipo_dato N_casilla = 3;
    int dato_a_insertar = 6;
    insertar(V, N_casilla, dato_a_insertar, 6);
    int i;
    CU_ASSERT_EQUAL(V[0],1);
    CU_ASSERT_EQUAL(V[1],2);
    CU_ASSERT_EQUAL(V[2],4);
    CU_ASSERT_EQUAL(V[3],6);
    CU_ASSERT_EQUAL(V[4],5);

}

int main() {
    CU_pSuite pSuite = NULL;

    /* Initialize the CUnit test registry */
    if (CUE_SUCCESS != CU_initialize_registry())
        return CU_get_error();

    /* Add a suite to the registry */
    pSuite = CU_add_suite("isertar_datos", init_suite, clean_suite);
    if (NULL == pSuite) {
        CU_cleanup_registry();
        return CU_get_error();
    }

    /* Add the tests to the suite */
    if ((NULL == CU_add_test(pSuite, "testInsertar", testInsertar))) {
        CU_cleanup_registry();
        return CU_get_error();
    }

    /* Run all tests using the CUnit Basic interface */
    CU_basic_set_mode(CU_BRM_VERBOSE);
    CU_basic_run_tests();
    CU_cleanup_registry();
    return CU_get_error();
}
