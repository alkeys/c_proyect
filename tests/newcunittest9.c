/*
 * File:   newcunittest9.c
 * Author: avi
 *
 * Created on 1 sept. 2021, 21:32:13
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
    //este metodo para su principal funcionamiento debe de poner a cero desde el principo el vector y despues ordenalarlo para
    //su funcionamiento correcto
    //el metodo ingresa el dato en el ultimo valor 
    tipo_dato V[3];
    poner_cero_todo(V,3);
    V[0]=6;
    V[1]=8;
    insertar(V,7,3,'v');
    CU_ASSERT_EQUAL(V[2],7);

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
