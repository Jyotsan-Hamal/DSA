#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};

struct Node *top = NULL;

void push()
{
    struct Node *New;
    int num;
    printf("enter the number to push");
    scanf("%d", &num);
    if (top == NULL)
    {
        New->next = NULL;
        New->data = num;
        top = New;
    }
    else
    {
        New->next = top;
        New->data = num;
        top = New;
    }
    printf("node insertes");
}
int pop()
{
    struct Node *temp = top;
    int data = temp->data;
    top = top->next;
    free(temp);
    return data;
}
void display()
{
    if (top == NULL)
    {
        printf("underflow");
    }
    else
    {
        struct Node *temp = top;
        while (temp->next != NULL)
        {
            printf(" %d ", temp->data);
            temp = temp->next;
        }
    }
}
int main()
{

    int num = 0;
    while (num != 4)
    {
        printf("\nenter 1 for push \n");
        printf("\nenter 2 for pop\n");
        printf("\nenter 3 for display\n");
        printf("\nenter 4 for exit\n");
        scanf("%d", &num);
        switch (num)
        {
        case 1:
            push();
            break;
        case 2:
            int bolo;

            bolo = pop();
            printf("deleted data --->%d", bolo);
            break;
        case 3:
            display();
            break;
        default:
            printf("please enter corrrect");
            break;
        }
    }
    return 0;
}