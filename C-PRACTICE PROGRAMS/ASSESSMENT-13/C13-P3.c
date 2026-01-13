#include <stdio.h>
#include <stdlib.h>

struct student
{
    int id;
    int Maths;
    int Science;
    struct student *next;
};

struct student *head = NULL;

void create_sample()
{
    int i;
    struct student *temp, *newnode;

    for (i = 1; i <= 5; i++)
    {
        newnode = (struct student *)malloc(sizeof(struct student));
        newnode->id = i * 10;
        newnode->Maths = 70 + i;
        newnode->Science = 80 + i;
        newnode->next = NULL;

        if (head == NULL)
        {
            head = newnode;
            temp = newnode;
        }
        else
        {
            temp->next = newnode;
            temp = newnode;
        }
    }
}

void insert_entry()
{
    int choice, key;
    struct student *newnode, *temp = head, *prev = NULL;

    newnode = (struct student *)malloc(sizeof(struct student));

    printf("Enter new ID: ");
    scanf("%d", &newnode->id);
    printf("Enter Maths: ");
    scanf("%d", &newnode->Maths);
    printf("Enter Science: ");
    scanf("%d", &newnode->Science);
    newnode->next = NULL;

    printf("Insert 1-Before ID / 2-After ID: ");
    scanf("%d", &choice);

    printf("Enter reference ID: ");
    scanf("%d", &key);

    while (temp != NULL && temp->id != key)
    {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL)
    {
        printf("ID not found\n");
        free(newnode);
        return;
    }

    if (choice == 1)  
    {
        if (prev == NULL)
        {
            newnode->next = head;
            head = newnode;
        }
        else
        {
            prev->next = newnode;
            newnode->next = temp;
        }
    }
    else               
    {
        newnode->next = temp->next;
        temp->next = newnode;
    }
}

void display()
{
    struct student *temp = head;

    printf("\n--- Student List ---\n");
    while (temp != NULL)
    {
        printf("ID:%d Maths:%d Science:%d\n",
               temp->id, temp->Maths, temp->Science);
        temp = temp->next;
    }
}

int main()
{
    int ch;

    create_sample();   

    while (1)
    {
        printf("\n1. Insert Entry\n2. Display List\n3. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &ch);

        switch (ch)
        {
            case 1: insert_entry(); break;
            case 2: display(); break;
            case 3: exit(0);
            default: printf("Invalid choice\n");
        }
    }
}
