#include<stdio.h>
#include<stdlib.h>
struct student
{
    int id;
    int Maths;
    int Science;
    struct student *next;
};
int main()
{
    struct student *head = NULL, *temp, *newNode;
    int id,m,s;
    while (1)
    {
        printf("\nEnter ID (-1 to stop): ");
        scanf("%d", &id);
        if (id == -1)
            break;
        printf("Enter Maths mark: ");
        scanf("%d", &m);
        printf("Enter Science mark: ");
        scanf("%d", &s);
        newNode = (struct student*)malloc(sizeof(struct student));
        newNode->id = id;
        newNode->Maths = m;
        newNode->Science = s;
        newNode->next = NULL;
        if (head == NULL)
        {
            head = newNode;
        }
        else
        {
            temp = head;
            while (temp->next != NULL)
                temp = temp->next;
            temp->next = newNode;
        }
    }
    printf("\n Student Records \n");
    temp = head;
    while (temp != NULL) 
    {
        printf("ID: %d  Maths: %d  Science: %d\n",
               temp->id, temp->Maths, temp->Science);
        temp = temp->next;
    }
}