#include <stdio.h>
void push();
void pop();
void display();
int arry[100];
int top = -1;
int mo;
int main()

{
    int num;
    printf("\nenter the size fo array you would like  [array max size = 100]\n");
    scanf("%d", &mo);

    while (num != 4)
    {

        printf("\n Enter 1 for push \n");
        printf("\n Enter 2 for pop \n");
        printf("\n Enter 3 for display \n");
        printf("\n Enter 4 for exit \n");
        scanf("%d", &num);

        switch (num)
        {
        case 1:

            push();
            break;
        case 2:
            pop();
        case 3:
            display();
        case 4:
            break;
        default:
            printf(" \n please enter the right number \n");
            break;
        }
    }
}

void push()
{
    if (top > mo - 1)
    {
        printf("\n Stack overflow  !!! \n");
    }
    else
    {
        int n;
        printf("\nEnter the number you want to add inside stacl \n");
        scanf("%d", &n);
        top = top + 1;
        arry[top] = n;
    }
}

void pop()
{
    if (top == -1)
    {
        printf(" \n Stack underflow \n");
    }
    else
    {
        top--;
    }
}

void display()
{
    if (top == -1)
    {
        printf(" \n Stack underflow \n");
    }
    else
    {
        printf("\n Inside the stack is :  \n");
        for (int i = 0; i < top; i++)
        {
            printf(" %d ", arry[i]);
        }
    }
}