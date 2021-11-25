#include <stdio.h>
#include <math.h>

void complate(int* A, int flag) {
    if (flag != 0) {
        for (int i = 0; i < 10; i++) {       //если есть то производим некие операции
            if (A[i] < 0) {
                A[i] = A[i] * A[i];
            }
            else  {
                A[i] = sqrt(A[i]);
            }
        }
    }
    else {                                   //если нет то просто умножаем все на 2
        for (int i = 0; i < 10; i++) {
            A[i] = A[i] * 2;
        }
    }
}

int check(int* A) {
    int flag;
    for (int i = 0; i < 10; i++) {           //проверяем есть ли в массиве числа <= -7
        if (A[i] <= -7) {
            flag = 1;
        }
    }
    return flag;
}

void main(void) {
    int flag = 0;
    printf("Please, enter the array \n");
    printf("Your array is: 4, 4, 4, -4, -5, -6, 7, -8, 9, 10 \n");
    int A[10] = {4, 4, 4, -4, -5, -6, 7, -8, 9, 10};  //задаем массив
    flag = check(A);
    complate(A, flag);
    printf("Finally array is: ");             //выводим обработаный массив
    for (int i = 0; i < 10; i++) {
        printf("%d ", A[i]);
    }
}
