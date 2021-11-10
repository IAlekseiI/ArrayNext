#ifndef ARRAYNEXT_H_INCLUDED
#define ARRAYNEXT_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>

typedef int* arrayINT;

void* createArray(arrayINT arr, int SIZE);

void* deleteArray(arrayINT arr);

void arrayPlus(arrayINT arrayOne, int sizeOne, arrayINT arrayTwo, int sizeTwo);
void arrayMinus(arrayINT arrayOne, int sizeOne, arrayINT arrayTwo, int sizeTwo);
void arrayMulti(arrayINT arrayOne, int sizeOne, arrayINT arrayTwo, int sizeTwo);
void arrayShare(arrayINT arrayOne, int sizeOne, arrayINT arrayTwo, int sizeTwo);
void arrayMod(arrayINT arrayOne, int sizeOne, arrayINT arrayTwo, int sizeTwo);
void arrayPow(arrayINT arrayOne, int sizeOne, int degree);

void arrayClear(arrayINT arr, int SIZE);
void* arrayAdd(arrayINT arrayOne, int sizeOne, arrayINT arrayTwo, int sizeTwo);

void* arrayInStartNum(arrayINT arr, int SIZE, int num);
void* arrayInEndNum(arrayINT arr, int SIZE, int num);

int arraySearchPosNum(arrayINT arr, int SIZE, int num);
int arraySearchCountNum(arrayINT arr, int SIZE, int num);

void arrayReplace(arrayINT arr, int SIZE, int oldNum, int newNum);

#endif // ARRAYNEXT_H_INCLUDED
