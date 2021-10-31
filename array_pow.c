#include <stdio.h>
#include <math.h>

void main (void) {
    int flag = 0;
    int A[10] = {4, 4, 4, -4, -5, -6, 7, -8, 9, 10};
    for (int i = 0; i < 10; i++) {
        if (A[i] <= -7) {
            flag = 1;
        }
    }

    if (flag != 0) {
        for (int i = 0; i < 10; i++) {
            if (A[i] < 0) {
                A[i] = A[i] * A[i];
            }
            else  {
                A[i] = sqrt (A[i]);
            }
        }
    }

    else {
        for (int i = 0; i < 10; i++) {
            A[i] = A[i] * 2;
        }    
    }

    for (int i = 0; i < 10; i++) {
        printf ("%d ", A[i]);
    }
}