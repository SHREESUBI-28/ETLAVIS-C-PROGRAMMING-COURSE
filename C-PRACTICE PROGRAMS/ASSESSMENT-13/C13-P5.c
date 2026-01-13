#include <stdio.h>
#include <stdlib.h>

struct student
{
    struct student *prev;
    int id;
    int Maths;
    int Science;
    struct student *next;
};

struct student *head = NULL;

void create_list()
{
    int i;
    struct student *newnode, *temp;

    for (i = 1; i <= 5; i++)
    {
        newnode = (struct student *)malloc(sizeof(struct student));
        newnode->id = i;
        newnode->Maths = 60 + i;
        newnode->Science = 70 + i;
        newnode->prev = NULL;
        newnode->next = NULL;

        if (head == NULL)
        {
            head = newnode;
            temp = newnode;
        }
        else
        {
            temp->next = newnode;
            newnode->prev = temp;
            temp = newnode;
        }
    }
}

void insert_entry()
{
    int ref, pos;
    struct student *newnode, *temp = head;

    newnode = (struct student *)malloc(sizeof(struct student));

    printf("Enter ID: ");
    scanf("%d", &newnode->id);
    printf("Enter Maths mark: ");
    scanf("%d", &newnode->Maths);
    printf("Enter Science mark: ");
    scanf("%d", &newnode->Science);

    printf("1.Before ID  2.After ID: ");
    scanf("%d", &pos);
    printf("Enter reference ID: ");
    scanf("%d", &ref);

    while (temp != NULL && temp->id != ref)
        temp = temp->next;

    if (temp == NULL)
    {
        printf("ID not found\n");
        free(newnode);
        return;
    }

    if (pos == 1) 
    {
        newnode->next = temp;
        newnode->prev = temp->prev;

        if (temp->prev != NULL)
            temp->prev->next = newnode;
        else
            head = newnode;

        temp->prev = newnode;
    }
    else          
    {
        newnode->prev = temp;
        newnode->next = temp->next;

        if (temp->next != NULL)
            temp->next->prev = newnode;

        temp->next = newnode;
    }
}

void delete_entry()
{
    int key;
    struct student *temp = head;

    printf("Enter ID to delete: ");
    scanf("%d", &key);

    while (temp != NULL && temp->id != key)
        temp = temp->next;

    if (temp == NULL)
    {
        printf("ID not found\n");
        return;
    }

    if (temp->prev != NULL)
        temp->prev->next = temp->next;
    else
        head = temp->next;

    if (temp->next != NULL)
        temp->next->prev = temp->prev;

    free(temp);
    printf("Entry deleted\n");
}

void display()
{
    struct student *temp = head;

    printf("\nID  Maths  Science\n");
    while (temp != NULL)
    {
        printf("%d   %d     %d\n",
               temp->id, temp->Maths, temp->Science);
        temp = temp->next;
    }
}

int main()
{
    int choice;

    create_list();   

    while (1)
    {
        printf("\n1.Insert Entry");
        printf("\n2.Delete Entry");
        printf("\n3.Display List");
        printf("\n4.Exit");
        printf("\nEnter choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1: insert_entry(); break;
            case 2: delete_entry(); break;
            case 3: display(); break;
            case 4: exit(0);
            default: printf("Invalid choice\n");
        }
    }
}
