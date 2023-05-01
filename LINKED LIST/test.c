#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head;

void beginsert();
void lastinsert();
void randominsert();
void begin_delete()
{
    printf("dksjfcs");
}
void last_delete()
{
    printf("dsjfcsdf");
}
void random_delete()
{
    printf("kdjfjklsnf");
}
void display();
void search()
{
    printf("dsfkjsd");
}
void main()
{
    int choice = 0;
    while (choice != 9)
    {
        printf("\n\n*********Main Menu*********\n");
        printf("\nChoose one option from the following list ...\n");
        printf("\n===============================================\n");
        printf("\n1.Insert in begining\n2.Insert at last\n 3.Insert at any random location\n 4.Delete from Beginning\n   5.Delete from last\n6.Delete node after specified location\n7.Search for an element\n8.Show\n9.Exit\n");
        printf("\nEnter your choice?\n");
        scanf("\n%d", &choice);
        switch (choice)
        {
        case 1:
            beginsert();
            break;
        case 2:
            lastinsert();
            break;
        case 3:
            randominsert();
            break;
        case 4:
            begin_delete();
            break;
        case 5:
            last_delete();
            break;
        case 6:
            random_delete();
            break;
        case 7:
            search();
            break;
        case 8:
            display();
            break;
        case 9:
            exit(0);
            break;
        default:
            printf("Please enter valid choice..");
        }
    }
}
void beginsert()
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));

    if (ptr == NULL)
    {
        printf("overflow");
    }
    else
    {
        int num;
        printf("enter the number you want to insert:\n");
        scanf("%d", &num);
        ptr->next = head;
        ptr->data = num;
        head = ptr;
    }
}

void lastinsert()
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    int num;
    printf("enter the number you want to insert:\n");
    scanf("%d", &num);
    ptr->data = num;
    if (head == NULL)
    {
        ptr->next = NULL;

        head = ptr;
    }
    else
    {
        struct node *temp;
        temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = ptr;
        ptr->next = NULL;
    }
}

void randominsert()
{
    int num, ind;
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    struct node *temp;
    printf("enter the number you want to insert:\n");
    scanf("%d", &num);
    ptr->data = num;
    printf("where u want to insert\n");
    scanf("%d", &ind);
    temp = head;
    for (int i = 0; i < ind; i++)
    {
        temp = temp->next;
        if (temp == NULL)
        {
            printf("not possible");
        }
        ptr->next = temp->next;
        temp->next = ptr;
    }
}

void display()
{
    struct node *temp;
    temp = head;
    if (head == NULL)
    {
        printf("underflow");
    }
    else
    {
        while (temp != NULL)
        {
            printf(" %d ", temp->data);
            temp = temp->next;
        }
    }
}