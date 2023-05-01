#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};

void prinall(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("elemnetsd :  %d \n", ptr->data);
        ptr = ptr->next;
    }
}

int main()
{
    struct node *head;
    struct node *one;
    struct node *two;
    struct node *three;
    struct node *last;

    head = (struct node *)malloc(sizeof(struct node));
    one = (struct node *)malloc(sizeof(struct node));
    two = (struct node *)malloc(sizeof(struct node));
    three = (struct node *)malloc(sizeof(struct node));
    last = (struct node *)malloc(sizeof(struct node));

    head->data = 11;
    head->next = one;

    one->data = 12;
    one->next = two;

    two->data = 13;
    two->next = three;

    three->data = 14;
    three->next = last;

    last->data = 16;
    last->next = NULL;

    prinall(head);
}