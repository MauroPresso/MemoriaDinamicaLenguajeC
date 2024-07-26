#pragma once

struct Complex
{
    float real;
    float imag;
};

// int_vector
void show_int_vector(int *vec, uint8_t cant);

int* resize_int_vector(int* vec, uint8_t size, uint8_t new_size);

int* removeItem_int_vector(int* vec, uint8_t vec_size, uint8_t item_pos);

int* insertItem_int_vector(int* vec, uint8_t vec_size, uint8_t insert_pos, int insert_value);

int* concat_int_vector(int* vec_left, uint8_t left_size, int* vec_right, uint8_t right_size);

// float_vector
void show_float_vector(float *vec, uint8_t cant);

float* resize_int_vector(float* vec, uint8_t size, uint8_t new_size);

float* removeItem_int_vector(float* vec, uint8_t vec_size, uint8_t item_pos);

float* insertItem_int_vector(float* vec, uint8_t vec_size, uint8_t insert_pos, float insert_value);

float* concat_int_vector(float* vec_left, uint8_t left_size, float* vec_right, uint8_t right_size);

// double_vector
void show_double_vector(double *vec, uint8_t cant);

double* resize_double_vector(double* vec, uint8_t size, uint8_t new_size);

double* removeItem_double_vector(double* vec, uint8_t vec_size, uint8_t item_pos);

double* insertItem_double_vector(double* vec, uint8_t vec_size, uint8_t insert_pos, double insert_value);

double* concat_double_vector(double* vec_left, uint8_t left_size, double* vec_right, uint8_t right_size);

// Complex_vector
void show_Complex_vector(struct Complex *vec, uint8_t cant);

struct Complex* resize_Complex_vector(struct Complex* vec, uint8_t size, uint8_t new_size);

struct Complex* removeItem_Complex_vector(struct Complex* vec, uint8_t vec_size, uint8_t item_pos);

struct Complex* insertItem_Complex_vector(struct Complex* vec, uint8_t vec_size, uint8_t insert_pos, struct Complex insert_value);

struct Complex* concat_Complex_vector(struct Complex* vec_left, uint8_t left_size, struct Complex* vec_right, uint8_t right_size);