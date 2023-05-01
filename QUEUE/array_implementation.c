#include <stdio.h>
#include <stdlib.h>
#define MAX 50
int rear = -1;
int front = -1;
int array[MAX];
void insert();
void delete();
void display();
int main()
{
    int num;
    while (num != 4)
    {
        printf(" \n Enter 1 for insert elements \n  ");
        printf(" \n Enter 2 for delete elements \n  ");
        printf(" \n Enter 3 for display elements \n  ");
        printf(" \n Enter 4 for exit  \n  ");
        scanf("%d", &num);
        switch (num)
        {
        case 1:
            insert();
            break;
        case 2:
            delete ();
            break;
        case 3:
            display();
            break;
        case 4:
            break;

        default:
            printf(" \n please enter the right number : \n ");
            break;
        }
    }

    return 0;
}

void insert()
{
    if (rear == MAX - 1)
    {
        printf(" \n Queue overflow !!! \n ");
    }
    else
    {

        int item;
        printf("enter the number : ");
        scanf("%d", &item);
        rear++;
        array[rear] = item;
    }
}

void delete()
{
    if (rear == -1)
    {
        printf("\n queue underflow \n");
    }
    else
    {
        front = front + 1;
        printf("\n deleted number is %d \n", array[front]);
    }
}

void display()
{
    printf("Queue is  : \n");
    for (int i = front + 1; i <= rear; i++)
    {
        printf("%d ", array[i]);
    }
}