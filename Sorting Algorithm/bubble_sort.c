#include <stdio.h>
void bubble_sort();
void print_Arr(int A[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
}
int main()
{
    int array_A[6] = {1, 4, 2, 5, 10, 12};
    int len = 6;
    print_Arr(array_A, len);
    printf("\n");
    bubble_sort(array_A, len);
    printf("\n");
    print_Arr(array_A, len);
}

void bubble_sort(int A[], int n)
{
    int temp;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (A[j] > A[j + 1])
            {
                temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
            }
        }
    }
}