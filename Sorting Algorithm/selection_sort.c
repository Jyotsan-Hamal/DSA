#include <stdio.h>
void swap(int *ptr, int *ptr2)
{
    int temp;
    temp = *ptr;
    *ptr = *ptr2;
    *ptr2 = temp;
}
void selection_sort(int list[], int len)
{
    for (int i = 0; i < len; i++)
    {
        int first = i;
        for (int j = i + 1; j < len; j++)
        {
            if (list[first] > list[j])
            {
                first = j;
            }
        }
        swap(&list[first], &list[i]);
    }
}
void printAll(int list[], int len)
{
    printf("sorted array : \n");
    for (int i = 0; i < len; i++)
    {
        printf("%d ", list[i]);
    }
}
int length(int list[])
{
    printf("%d", sizeof(list));
    printf("%d", sizeof(list[0]));
    int length = sizeof(list) / sizeof(list[0]);
    return length;
}
int main()
{
    int list[] = {1, 3, 4, 5, 2, 6, 7, 9};
    int len = 8;
    selection_sort(list, len);
    printAll(list, len);
}