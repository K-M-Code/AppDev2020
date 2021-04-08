#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// in a header file usually we put the following information:
// 1. Constant Definitions
// 2. Data Structure Definitions
// 3. Function Prototypes


#define MAX 30

// We dont use complex data structure in this program

void input_scores(int[]);
void evaluation(int[], int[]);
void classification(int[], int[]);
void output_results(int[], int[]);

