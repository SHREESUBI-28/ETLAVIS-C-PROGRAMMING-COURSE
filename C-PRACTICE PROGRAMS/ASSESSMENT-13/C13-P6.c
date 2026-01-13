#include <stdio.h>
#include <stdlib.h>

struct student
{
    int id;
    int Maths;
    int Science;
    struct student *next;
};

struct student *top = NULL;

void push()
{
    struct student *newnode;

    newnode = (struct student *)malloc(sizeof(struct student));

    printf("Enter ID: ");
    scanf("%d", &newnode->id);
    printf("Enter Maths mark: ");
    scanf("%d", &newnode->Maths);
    printf("Enter Science mark: ");
    scanf("%d", &newnode->Science);

    newnode->next = top;
    top = newnode;

    printf("Pushed successfully\n");
}

void pop()
{
    struct student *temp;

    if (top == NULL)
    {
        printf("Stack is empty\n");
        return;
    }

    temp = top;
    printf("Popped Element -> ID:%d Maths:%d Science:%d\n",
           temp->id, temp->Maths, temp->Science);

    top = top->next;
    free(temp);
}

void display()
{
    struct student *temp = top;

    if (temp == NULL)
    {
        printf("Stack is empty\n");
        return;
    }

    printf("\nSTACK (Top to Bottom)\n");
    printf("ID  Maths  Science\n");

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

    while (1)
    {
        printf("\n1.Push");
        printf("\n2.Pop");
        printf("\n3.Display Stack");
        printf("\n4.Exit");
        printf("\nEnter choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1: push(); break;
            case 2: pop(); break;
            case 3: display(); break;
            case 4: exit(0);
            default: printf("Invalid choice\n");
        }
    }
}
