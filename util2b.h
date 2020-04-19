#ifndef LIB2B_H
#define LIB2B_H

#include <iostream>
#include <cmath>
using namespace std;

int size(char* s);

int str_to_int(char* s, int q);

string remove_whitespaces(char* s1);

int count_words(string s, char c);

string* split(string s, char c, int & q);

int index_of(char* s1, char* s2);

char* complete_array(char* old_arr, int old_size, int difference);

char* sum_of_giant_numbers(char* n1, char* n2);

#endif // LIB2B_H
