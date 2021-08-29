/*
 * File:   newcunittest7.c
 * Author: avi
 *
 * Created on 28 ago. 2021, 23:15:13
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

void p_cero(tipo_dato* V, int N);

void testP_cero() {
    tipo_dato* V;
    int N;
    p_cero(V, N);
    if (1 /*check result*/) {
        CU_ASSERT(0);
    }
}

void testRecorrer() {
    tipo_dato* V;
    char* C;
    int cant;
    recorrer(V, C, cant);
    if (1 /*check result*/) {
        CU_ASSERT(0);
    }
}

void testInvertir() {
    tipo_dato* V;
    int N;
    invertir(V, N);
    if (1 /*check result*/) {
        CU_ASSERT(0);
    }
}

void redimencionar(tipo_dato* v, int nueva_dimencion);

void testRedimencionar() {
    tipo_dato* v;
    int nueva_dimencion;
    redimencionar(v, nueva_dimencion);
    if (1 /*check result*/) {
        CU_ASSERT(0);
    }
}

void testRemplazar() {
    tipo_dato* V;
    tipo_dato dato_a_remplazar;
    tipo_dato Nuevo_dato;
    remplazar(V, dato_a_remplazar, Nuevo_dato);
    if (1 /*check result*/) {
        CU_ASSERT(0);
    }
}

void testModificar() {
    tipo_dato* V;
    int N_casilla;
    tipo_dato dato_sustitullente;
    modificar(V, N_casilla, dato_sustitullente);
    if (1 /*check result*/) {
        CU_ASSERT(0);
    }
}

void testInsertar() {
    tipo_dato* V;
    int N_casilla;
    tipo_dato dato_a_insertar;
    insertar(V, N_casilla, dato_a_insertar);
    if (1 /*check result*/) {
        CU_ASSERT(0);
    }
}

void testBorra() {
    tipo_dato* V;
    int N_casilla;
    borra(V, N_casilla);
    if (1 /*check result*/) {
        CU_ASSERT(0);
    }
}

void testOrdenamiento() {
    tipo_dato* V;
    int N;
    ordenamiento(V, N);
    if (1 /*check result*/) {
        CU_ASSERT(0);
    }
}

void testBuscar_remplazar() {
    tipo_dato* V;
    tipo_dato numero;
    tipo_dato remplazo;
    int N;
    buscar_remplazar(V, numero, remplazo, N);
    if (1 /*check result*/) {
        CU_ASSERT(0);
    }
}

void testMatrix_traspuesta() {
    matrix_traspuesta();
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
    pSuite = CU_add_suite("newcunittest7", init_suite, clean_suite);
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
            (NULL == CU_add_test(pSuite, "testOrdenamiento", testOrdenamiento)) ||
            (NULL == CU_add_test(pSuite, "testBuscar_remplazar", testBuscar_remplazar)) ||
            (NULL == CU_add_test(pSuite, "testMatrix_traspuesta", testMatrix_traspuesta))) {
        CU_cleanup_registry();
        return CU_get_error();
    }

    /* Run all tests using the CUnit Basic interface */
    CU_basic_set_mode(CU_BRM_VERBOSE);
    CU_basic_run_tests();
    CU_cleanup_registry();
    return CU_get_error();
}
