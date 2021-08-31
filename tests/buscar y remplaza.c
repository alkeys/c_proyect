/*
 * File:   buscar y remplaza.c
 * Author: avi
 *
 * Created on 30 ago. 2021, 19:08:26
 */

#include <stdio.h>
#include <stdlib.h>
#include <CUnit/Basic.h>
#include "../funcion/funcion.h"

/*
 * CUnit Test Suite
 */
void buscar_remplazar(tipo_dato *V,tipo_dato numero,tipo_dato remplazo,int N);

int init_suite(void) {
    return 0;
}

int clean_suite(void) {
    return 0;
}

void testBuscar_remplazar() {

}

int main() {
    CU_pSuite pSuite = NULL;

    /* Initialize the CUnit test registry */
    if (CUE_SUCCESS != CU_initialize_registry())
        return CU_get_error();

    /* Add a suite to the registry */
    pSuite = CU_add_suite("buscar y remplaza", init_suite, clean_suite);
    if (NULL == pSuite) {
        CU_cleanup_registry();
        return CU_get_error();
    }

    /* Add the tests to the suite */
    if ((NULL == CU_add_test(pSuite, "testBuscar_remplazar", testBuscar_remplazar))) {
        CU_cleanup_registry();
        return CU_get_error();
    }

    /* Run all tests using the CUnit Basic interface */
    CU_basic_set_mode(CU_BRM_VERBOSE);
    CU_basic_run_tests();
    CU_cleanup_registry();
    return CU_get_error();
}
