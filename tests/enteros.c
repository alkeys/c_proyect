/*
 * File:   enteros.c
 * Author: avi
 *
 * Created on 26 ago. 2021, 21:08:21
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

void p_cero(int* V, int N);

void testP_cero() {
    int* V;
    int N;
    p_cero(V, N);
    if (1 /*check result*/) {
        CU_ASSERT(0);
    }
}

void testRecorrer() {

    int V[]={1,254,40,8,9,4,100,5};
    char c[100];
    recorrer(V, c);
    CU_ASSERT_STRING_EQUAL(c,"1-254-40-8-4-100-5-");
}

void testInvertir() {
    int* V;
    int N;
    invertir(V, N);
    if (1 /*check result*/) {
        CU_ASSERT(0);
    }
}

void testRedimencionar() {
    int* v;
    int nueva_dimencion;
    redimencionar(v, nueva_dimencion);
    if (1 /*check result*/) {
        CU_ASSERT(0);
    }
}

void testRemplazar() {
    int* V;
    int dato_a_remplazar;
    int Nuevo_dato;
    remplazar(V, dato_a_remplazar, Nuevo_dato);
    if (1 /*check result*/) {
        CU_ASSERT(0);
    }
}

void testModificar() {
    int* V;
    int N_casilla;
    int dato_sustitullente;
    modificar(V, N_casilla, dato_sustitullente);
    if (1 /*check result*/) {
        CU_ASSERT(0);
    }
}

void testInsertar() {
    int* V;
    int N_casilla;
    int dato_a_insertar;
    insertar(V, N_casilla, dato_a_insertar);
    if (1 /*check result*/) {
        CU_ASSERT(0);
    }
}

void testBorra() {
    int* V;
    int N_casilla;
    borra(V, N_casilla);
    if (1 /*check result*/) {
        CU_ASSERT(0);
    }
}

void testOrdenamiento() {
    int* V;
    int N;
    ordenamiento(V, N);
    if (1 /*check result*/) {
        CU_ASSERT(0);
    }
}

int main() {
    CU_pSuite pSuite = NULL;

    /* Initialize the CUnit test registry */
    if (CUE_SUCCESS != CU_initialize_registry())
        return CU_get_error();

    /* Add a suite to the registry */
    pSuite = CU_add_suite("enteros", init_suite, clean_suite);
    if (NULL == pSuite) {
        CU_cleanup_registry();
        return CU_get_error();
    }

    /* Add the tests to the suite */
    if ((NULL == CU_add_test(pSuite, "testP_cero", testP_cero)) ||
            (NULL == CU_add_test(pSuite, "testRecorrer", testRecorrer)) ||
            (NULL == CU_add_test(pSuite, "testInvertir", testInvertir)) ||
            (NULL == CU_add_test(pSuite, "testRedimencionar", testRedimencionar)) ||
            (NULL == CU_add_test(pSuite, "testRemplazar", testRemplazar)) ||
            (NULL == CU_add_test(pSuite, "testModificar", testModificar)) ||
            (NULL == CU_add_test(pSuite, "testInsertar", testInsertar)) ||
            (NULL == CU_add_test(pSuite, "testBorra", testBorra)) ||
            (NULL == CU_add_test(pSuite, "testOrdenamiento", testOrdenamiento))) {
        CU_cleanup_registry();
        return CU_get_error();
    }

    /* Run all tests using the CUnit Basic interface */
    CU_basic_set_mode(CU_BRM_VERBOSE);
    CU_basic_run_tests();
    CU_cleanup_registry();
    return CU_get_error();
}
