#ifndef LIB2D_H
#define LIB2D_H

#include <iostream>
#include <cmath>

using namespace std;

int** create_random_matrix(int l, int c);

int** create_matrix(int l, int c);

void print_matrix(int** mat, int l, int c);

int** sum_matrix(int** m1, int** m2, int l, int c);

#endif // LIB2D_H
