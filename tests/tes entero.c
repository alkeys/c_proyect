/*
 * File:   newcunittest7.c
 * Author: avi
 *
 * Created on 26 ago. 2021, 20:56:19
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

void testP_cero() {
    int V[5];
    int N=5;
    p_cero(V, N);
    int i;
    for (i = 0; i < N; i++) {
        CU_ASSERT_EQUAL(V[i],0);
    }
}

void testRecorrer() {
    int V[]={1,254,40,8,9,4,100,5};
    char c[100];
    int cant=8;
    recorrer(V, c, cant);
    CU_ASSERT_STRING_EQUAL(c,"1-254-40-8-4-100-5-");
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

void testRedimencionar() {
    int *v;
    v=(int *) calloc(5,sizeof(int));
    v[0]=1;
    v[1]=2;
    v[2]=3;
    v[3]=4;
    v[4]=5;
  //  CU_ASSERT_EQUAL(v[5],8);
    redimencionar(v,7);
    v[5]=8;
    v[6]=7;
    CU_ASSERT_EQUAL(v[5],8);
    CU_ASSERT_EQUAL(v[6],7);
}

void testRemplazar() {
    //se remplazara los 7
    int V[]={7,8,7,9,6};
    int dato_a_remplazar=7;
    int Nuevo_dato=4;
    remplazar(V, dato_a_remplazar, Nuevo_dato);
    CU_ASSERT_EQUAL(V[0],4);
    CU_ASSERT_EQUAL(V[2],4);
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
    int V[6];
    p_cero(V, 6);
    V[0] = 1;
    V[1] = 2;
    V[2] = 4;
    V[3] = 5;
    int N_casilla = 3;
    int dato_a_insertar = 6;
    insertar(V, N_casilla, dato_a_insertar, 6);
    int i;
    CU_ASSERT_EQUAL(V[0],1);
    CU_ASSERT_EQUAL(V[1],2);
    CU_ASSERT_EQUAL(V[2],4);
    CU_ASSERT_EQUAL(V[3],6);
    CU_ASSERT_EQUAL(V[4],5);
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
  int V[]={5,1,8,9,4,3};
   int N=6;
    ordenamiento(V,N);
    CU_ASSERT_EQUAL(V[0],9);
    CU_ASSERT_EQUAL(V[1],8);
    CU_ASSERT_EQUAL(V[2],5);
    CU_ASSERT_EQUAL(V[5],1);
}

void testBuscar_remplazar() {
    int V[5];
    V[0]=8;
    V[1]=7;
    V[2]=8;
    V[3]=7;
    V[4]=9;
    buscar_remplazar(V,7,3,5);
    CU_ASSERT_EQUAL(V[1],3);
    CU_ASSERT_EQUAL(V[3],3);
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
            (NULL == CU_add_test(pSuite, "testBuscar_remplazar", testBuscar_remplazar))) {
        CU_cleanup_registry();
        return CU_get_error();
    }

    /* Run all tests using the CUnit Basic interface */
    CU_basic_set_mode(CU_BRM_VERBOSE);
    CU_basic_run_tests();
    CU_cleanup_registry();
    return CU_get_error();
}
