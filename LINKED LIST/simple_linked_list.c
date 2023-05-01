#include <stdio.h>
#include <stdlib.h>
void begin_insert();
void last_insert();
void random_insert();
void begin_delete();
void last_delete();
void random_delete();
void display();
void search();
struct node
{
    int data;
    struct node *address;
};

struct node *head;

void printlinked(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("elements : %d \n", ptr->data);
        ptr = ptr->address;
    }
}

int main()
{
    int choice = 0;
    while (choice != 9)
    {
        printf("\n******MAIN MENU*******\n");
        printf("\n-----choose one option--------- \n");
        printf("\n------------------------------------------------------------\n");
        printf("\n1.Insert at begining \n");
        printf("\n2.Insert at last \n");
        printf("\n3.Insert at any random location \n");
        printf("\n4.delete from beginning  \n");
        printf("\n5.delete from last \n");
        printf("\n6.delete node after specified location \n");
        printf("\n7.search for element \n");
        printf("\n8.show \n");
        printf("\n9.Exit \n");
        printf("\nEnter your choice\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            begin_insert();
            break;
        case 2:
            last_insert();
            break;
        case 3:
            random_insert();
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
            break;

        default:
            printf("\n please enter valid choice \n");
            break;
        }
    }
}
void begin_insert()
{
    int num;
    struct node *ptr;
    ptr = (struct node *)malloc(sizeof(struct node));
    printf("\nEnter the numnber : \n");
    scanf("%d", &num);
    ptr->data = num;
    ptr->address = head;
    head = ptr;
    printf("\n node inserted \n");
}

void last_insert()
{
    struct node *ptr, *temp;
    int item;
    ptr = (struct node *)malloc(sizeof(struct node));
    if (ptr == NULL)
    {
        printf("\nOVERFLOW");
    }
    else
    {
        printf("\nEnter value?\n");
        scanf("%d", &item);
        ptr->data = item;
        if (head == NULL)
        {
            ptr->address = NULL;
            head = ptr;
            printf("\nNode inserted");
        }
        else
        {
            temp = head;
            while (temp->address != NULL)
            {
                temp = temp->address;
            }
            temp->address = ptr;
            ptr->address = NULL;
            printf("\nNode inserted");
        }
    }
}
void random_insert()
{
    int i, loc, item;
    struct node *ptr, *temp;
    ptr = (struct node *)malloc(sizeof(struct node));
    if (ptr == NULL)
    {
        printf("\nOVERFLOW");
    }
    else
    {
        printf("\nEnter element value");
        scanf("%d", &item);
        ptr->data = item;
        printf("\nEnter the location after which you want to insert ");
        scanf("\n%d", &loc);
        temp = head;
        for (i = 0; i < loc; i++)
        {
            temp = temp->address;
            if (temp == NULL)
            {
                printf("\ncan't insert\n");
                return;
            }
        }
        ptr->address = temp->address;
        temp->address = ptr;
        printf("\nNode inserted");
    }
}

void begin_delete()
{
    struct node *ptr;
    if (head == NULL)
    {
        printf("\nList is empty\n");
    }
    else if(head->address==NULL)
    {
    int ok;
    ok = head->data;
    printf("element deleted %d",ok);
    struct node *ptr;
    ptr=head;
    head=NULL;
    free(ptr);
    }
    else
    {
        ptr = head;
        head = ptr->address;
        free(ptr);
        printf("\nNode deleted from the begining ...\n");
    }
}
void last_delete()
{
    struct node *ptr, *ptr1;
    if (head == NULL)
    {
        printf("\nlist is empty");
    }
    else if (head->address == NULL)
    {
        head = NULL;
        free(head);
        printf("\nOnly node of the list deleted ...\n");
    }

    else
    {
        ptr = head;
        while (ptr->address != NULL)
        {
            ptr1 = ptr;
            ptr = ptr->address;
        }
        ptr1->address = NULL;
        free(ptr);
        printf("\nDeleted Node from the last ...\n");
    }
}
void random_delete()
{
    struct node *ptr, *ptr1, *ptr2;
    int loc, i;
    printf("\n Enter the location of the node after which you want to perform deletion \n");
    scanf("%d", &loc);
    ptr = head;
    for (i = 0; i < loc; i++)
    {
        ptr1 = ptr;
        ptr = ptr->address;

        if (ptr == NULL)
        {
            printf("\n Can't delete \n ");
            return;
        }
    }
    ptr2 = ptr->address;
    ptr1->address = ptr2;

    // ptr1->address = ptr->address;
    free(ptr);
    printf("\nDeleted node %d ", loc + 1);
}
void search()
{
    struct node *ptr;
    int item, i = 0, flag;
    ptr = head;
    if (ptr == NULL)
    {
        printf("\n Empty List \n");
    }
    else
    {
        printf("\nEnter item which you want to search?\n");
        scanf("%d", &item);
        while (ptr != NULL)
        {
            if (ptr->data == item)
            {
                printf("item found at location %d ", i + 1);
                flag = 0;
            }
            else
            {

                printf("Item not found\n");
            }
            i++;
            ptr = ptr->address;
        }
    }
}

void display()
{
    struct node *ptr;
    ptr = head;
    if (ptr == NULL)
    {
        printf("Nothing to print");
    }
    else
    {
        printf("\nprinting values . . . . .\n");
        while (ptr != NULL)
        {
            printf("\n%d", ptr->data);
            ptr = ptr->address;
        }
    }
}
