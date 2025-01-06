#include "dinamic_arrays_lib.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <time.h>

void llenar_int_vector(int *vec, uint8_t cant);

void llenar_float_vector(float *vec, uint8_t cant);

void llenar_double_vector(double *vec, uint8_t cant);

void llenar_Complex_vector(struct Complex *vec, uint8_t cant);

int main()
{
    // VECTORES ENTEROS
    printf("\n\n\nVECTORES ENTEROS:");

    int* v = (int*)malloc(10 * sizeof(int));
    int* u = (int*)malloc(5 * sizeof(int));

    // vector dinamico V
    llenar_int_vector(v, 10);
    printf("\nVector V:\n");
    show_int_vector(v, 10);

    // vector dinamico U
    llenar_int_vector(u, 5);
    printf("\nVector U:\n");
    show_int_vector(u, 5);

    // Concatenar
    int *cad = concat_int_vector(v, 10, u, 5);
    printf("\nVector concatenado:\n");
    show_int_vector(cad, 15);

    // Resizing vector V.
    v = resize_int_vector(v, 10, 5);
    printf("\nVector V resized (new_size < old_size):\n");
    show_int_vector(v, 5);

    v = resize_int_vector(v, 5, 10);
    printf("\nVector V resized (new_size > old_size):\n");
    llenar_int_vector(v, 10);
    show_int_vector(v, 10);

    // Inserting an item in vector V.
    v = insertItem_int_vector(v, 10, 7, 137);
    printf("\nVector V (with a new item):\n");
    show_int_vector(v, 11);

    // Removing an item from vector V.
    v = removeItem_int_vector(v, 11, 7);
    printf("\nVector V (without an old item):\n");
    show_int_vector(v, 10);

    free(v);
    free(u);
    free(cad);

    v = NULL;
    u = NULL;
    cad = NULL;
    

    // VECTORES FLOTANTES
    printf("\n\n\nVECTORES FLOTANTES:");

    float* v = (float*)malloc(10 * sizeof(float));
    float* u = (float*)malloc(5 * sizeof(float));

    // vector dinamico V
    llenar_float_vector(v, 10);
    printf("\nVector V:\n");
    show_float_vector(v, 10);

    // vector dinamico U
    llenar_float_vector(u, 5);
    printf("\nVector U:\n");
    show_float_vector(u, 5);

    // Concatenar
    float* cad = concat_float_vector(v, 10, u, 5);
    printf("\nVector concatenado:\n");
    show_float_vector(cad, 15);

    // Resizing vector V.
    v = resize_float_vector(v, 10, 5);
    printf("\nVector V resized (new_size < old_size):\n");
    show_float_vector(v, 5);

    v = resize_float_vector(v, 5, 10);
    printf("\nVector V resized (new_size > old_size):\n");
    llenar_float_vector(v, 10);
    show_float_vector(v, 10);

    // Inserting an item in vector V.
    v = insertItem_float_vector(v, 10, 7, 137);
    printf("\nVector V (with a new item):\n");
    show_float_vector(v, 11);

    // Removing an item from vector V.
    v = removeItem_float_vector(v, 11, 7);
    printf("\nVector V (without an old item):\n");
    show_float_vector(v, 10);

    free(v);
    free(u);
    free(cad);

    v = NULL;
    u = NULL;
    cad = NULL;


    // VECTORES DE TIPO DOUBLE
    printf("\n\n\nVECTORES DE TIPO DOUBLE:");

    double* v = (double*)malloc(10 * sizeof(double));
    double* u = (double*)malloc(5 * sizeof(double));

    // vector dinamico V
    llenar_double_vector(v, 10);
    printf("\nVector V:\n");
    show_double_vector(v, 10);

    // vector dinamico U
    llenar_double_vector(u, 5);
    printf("\nVector U:\n");
    show_double_vector(u, 5);

    // Concatenar
    double* cad = concat_double_vector(v, 10, u, 5);
    printf("\nVector concatenado:\n");
    show_double_vector(cad, 15);

    // Resizing vector V.
    v = resize_double_vector(v, 10, 5);
    printf("\nVector V resized (new_size < old_size):\n");
    show_double_vector(v, 5);

    v = resize_double_vector(v, 5, 10);
    printf("\nVector V resized (new_size > old_size):\n");
    llenar_double_vector(v, 10);
    show_double_vector(v, 10);

    // Inserting an item in vector V.
    v = insertItem_double_vector(v, 10, 7, 137);
    printf("\nVector V (with a new item):\n");
    show_double_vector(v, 11);

    // Removing an item from vector V.
    v = removeItem_double_vector(v, 11, 7);
    printf("\nVector V (without an old item):\n");
    show_double_vector(v, 10);

    free(v);
    free(u);
    free(cad);

    v = NULL;
    u = NULL;
    cad = NULL;


    // VECTORES COMPLEJOS
    printf("\n\n\nVECTORES COMPLEJOS:");

    struct Complex* v = (struct Complex*)malloc(10 * sizeof(struct Complex));
    struct Complex* u = (struct Complex*)malloc(5 * sizeof(struct Complex));

    // vector dinamico V
    llenar_Complex_vector(v, 10);
    printf("\nVector V:\n");
    show_Complex_vector(v, 10);

    // vector dinamico U
    llenar_Complex_vector(u, 5);
    printf("\nVector U:\n");
    show_Complex_vector(u, 5);

    // Concatenar
    struct Complex* cad = concat_Complex_vector(v, 10, u, 5);
    printf("\nVector concatenado:\n");
    show_Complex_vector(cad, 15);

    // Resizing vector V.
    v = resize_Complex_vector(v, 10, 5);
    printf("\nVector V resized (new_size < old_size):\n");
    show_Complex_vector(v, 5);

    v = resize_Complex_vector(v, 5, 10);
    printf("\nVector V resized (new_size > old_size):\n");
    llenar_Complex_vector(v, 10);
    show_Complex_vector(v, 10);

    // Inserting an item in vector V.
    struct Complex value;
    value.real = rand() / (float) RAND_MAX;
    value.imag = rand() / (float) RAND_MAX; 
    v = insertItem_Complex_vector(v, 10, 7, value);
    printf("\nVector V (with a new item):\n");
    show_Complex_vector(v, 11);

    // Removing an item from vector V.
    v = removeItem_Complex_vector(v, 11, 7);
    printf("\nVector V (without an old item):\n");
    show_Complex_vector(v, 10);

    free(v);
    free(u);
    free(cad);

    v = NULL;
    u = NULL;
    cad = NULL;

    // FIN DEL PROGRAMA
    return 0;
}

void llenar_int_vector(int *vec, uint8_t cant)
{
    srand(time(NULL));
    for (int i = 0; i < cant; i++)
    {
        vec[i] = rand() % 100;
    }
}

void llenar_float_vector(float *vec, uint8_t cant)
{
    srand(time(NULL));
    for (int i = 0; i < cant; i++)
    {
        vec[i] = rand() / (float) RAND_MAX;
    }
}

void llenar_double_vector(double *vec, uint8_t cant)
{
    srand(time(NULL));
    for (int i = 0; i < cant; i++)
    {
        vec[i] = rand() / (float) RAND_MAX;
    }
}

void llenar_Complex_vector(struct Complex *vec, uint8_t cant)
{
    srand(time(NULL));
    for (int i = 0; i < cant; i++)
    {
        vec[i].real = rand() / (float) RAND_MAX;
        vec[i].imag = rand() / (float) RAND_MAX;
    }
}
