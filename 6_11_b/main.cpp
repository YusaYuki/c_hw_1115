#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

void bubbleSortOptimizedA(int arr[], int n);
int A[SIZE] = { 5, 26, 7, 63, 81 };
int count = 0;

int main(void)
{
    int i;
    bubbleSortOptimizedA(A, SIZE);
    printf("���G:");
    for (i = 0; i < SIZE; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n�@�@����洫�F %d ��\n", count);
    system("pause");
    return 0;
}

void bubbleSortOptimizedA(int arr[], int n) {
    int i, j, k, temp, change;
    for (i = 0; i < n - 1; i++) 
    {
        change = 0;
        for (j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                change = 1;
            }
        }
        printf("��%d��", i);
        for (k = 0; k < SIZE; k++) 
        {
            printf("%d ", A[k]);
        }
        printf("\n");
        count++;
        if (change == 0)
        {
            break;
        }
    }
}