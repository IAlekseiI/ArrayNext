#include "arrayNext.h"
static int power(int num, int degree){
    int result = 1;
    for(int i = 0; i < degree; i++)
        result *= num;
    return result;
}

void* createArray(arrayINT arr, int SIZE){
    arr = malloc(sizeof(int)*SIZE);
    return arr;
}

void* deleteArray(arrayINT arr){
    free(arr);
    return NULL;
}
 void arrayPlus(arrayINT arrayOne, int sizeOne, arrayINT arrayTwo, int sizeTwo){
    for(int i = 0; i < (sizeOne > sizeTwo ? sizeTwo : sizeOne); i++){
        *(arrayOne + i) += *(arrayTwo + i);
    }
 }

 void arrayMinus(arrayINT arrayOne, int sizeOne, arrayINT arrayTwo, int sizeTwo){
     for(int i = 0; i < (sizeOne > sizeTwo ? sizeTwo : sizeOne); i++){
        *(arrayOne + i) -= *(arrayTwo + i);
     }
 }

 void arrayMulti(arrayINT arrayOne, int sizeOne, arrayINT arrayTwo, int sizeTwo){
     for(int i = 0; i < (sizeOne > sizeTwo ? sizeTwo : sizeOne); i++){
        *(arrayOne + i) *= *(arrayTwo + i);
     }
 }

 void arrayShare(arrayINT arrayOne, int sizeOne, arrayINT arrayTwo, int sizeTwo){
      for(int i = 0; i < (sizeOne > sizeTwo ? sizeTwo : sizeOne); i++){
         *(arrayOne + i) /= *(arrayTwo + i);
      }
 }

 void arrayMod(arrayINT arrayOne, int sizeOne, arrayINT arrayTwo, int sizeTwo){
       for(int i = 0; i < (sizeOne > sizeTwo ? sizeTwo : sizeOne); i++){
          *(arrayOne + i) %= *(arrayTwo + i);
       }
 }

 void arrayPow(arrayINT arrayOne, int sizeOne, int degree){
       for(int i = 0; i < sizeOne; i++){
          *(arrayOne + i) = power(*(arrayOne + i), degree);
       }
 }

void arrayClear(arrayINT arr, int SIZE){
    for(int i = 0; i < SIZE; i++){
        *(arr + i) = 0;
    }
}

void* arrayInStartNum(arrayINT arr, int SIZE, int num){
    arrayINT newArr = NULL;
    newArr = malloc(sizeof(int) * (SIZE + 1));
    *(newArr + 0) = num;
    for(int i = 1; i < SIZE; i++){
        *(newArr + i) = *(arr + i);
    }
    free(arr);
    return newArr;
}

void* arrayInEndNum(arrayINT arr, int SIZE, int num){
    arr = realloc(arr, sizeof(int) * (SIZE + 1));
    *(arr + SIZE) = num;
    return arr;
}

 void* arrayAdd(arrayINT arrayOne, int sizeOne, arrayINT arrayTwo, int sizeTwo){
    int sizeFULL = sizeOne + sizeTwo;
    arrayOne = realloc(arrayOne, sizeof(int) * sizeFULL);

    int locTwo = 0;
    for(int i = sizeOne; i < sizeFULL; i++){
        *(arrayOne + i) = *(arrayTwo + locTwo);
        locTwo++;
    }
    return arrayOne;
 }

 int arraySearchPosNum(arrayINT arr, int SIZE, int num){
    for(int i = 0; i < SIZE; i++){
        if(num == *(arr + i))
            return i;
    }
    return -1;
 }

 int arraySearchCountNum(arrayINT arr, int SIZE, int num){
    int count = 0;
    for(int i = 0; i < SIZE; i++){
        if(num == *(arr + i))
            count++;
    }
    return count;
 }

 void arrayReplace(arrayINT arr, int SIZE, int oldNum, int newNum){
    for(int i = 0; i < SIZE; i ++){
        if(oldNum == *(arr + i))
            *(arr + i) = newNum;
    }
 }
