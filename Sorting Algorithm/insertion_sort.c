#include <stdio.h>
void print_Arr(int A[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
}
void insertion_sort(int A[], int n)
{
    int key, j;
    for (int i = 1; i < n; i++)
    {
        key = A[i];
        j = i - 1;
        while (j >= 0 && A[j] > key)
        {
            A[j + 1] = A[j];
            j--;
        }
        A[j + 1] = key;
    }
}

int main()
{
    int A[7] = {101, 0, 5, 3, 2, 7, 10};
    int n = 7;
    print_Arr(A, n);
    printf("\n");
    insertion_sort(A, n);
    print_Arr(A, n);

    return 0;
}