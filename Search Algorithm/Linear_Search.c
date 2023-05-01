#include <stdio.h>
int Linear_Search(int A[], int n, int value)
{
    for (int i = 0; i < n; i++)
    {
        if (value == A[i])
        {
            return 10;
        }
    }
    return -1;
}
int len(int A[])
{
    int n;
    n = sizeof(A) / sizeof(A[0]);
    return n;
}
void print_all(int A[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}
int main()
{
    int A[] = {12, 34, 56, 9, 34, 56, 78, 90, 123};
    int value = 90;
    int n = len(A);
    printf("%d \n", n);

    int result = Linear_Search(A, n, value);
    printf("%d \n", result);
    if (result == -1)
    {
        printf("not found!!! \n");
    }
    else
    {
        printf("found! \n");
    }
}