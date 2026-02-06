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
struct student* createNode(int id, int m, int s) {
    struct student *newNode = (struct student*)malloc(sizeof(struct student));
    newNode->id = id;
    newNode->Maths = m;
    newNode->Science = s;
    newNode->next = NULL;
    return newNode;
}
void display() {
    struct student *temp = head;
    if (head == NULL) {
        printf("List Empty!\n");
        return;
    }
    while (temp != NULL) {
        printf("ID:%d  Maths:%d  Science:%d\n",
               temp->id, temp->Maths, temp->Science);
        temp = temp->next;
    }
}
void insertEntry() {
    int id, m, s, key, choice;
    printf("Enter new ID: ");
    scanf("%d", &id);
    printf("Enter Maths: ");
    scanf("%d", &m);
    printf("Enter Science: ");
    scanf("%d", &s);
    struct student *newNode = createNode(id, m, s);
    printf("1.Before  2.After : ");
    scanf("%d", &choice);
    printf("Enter reference ID: ");
    scanf("%d", &key);
    struct student *temp = head, *prev = NULL;
    while (temp != NULL && temp->id != key) 
    {
        prev = temp;
        temp = temp->next;
    }
    if (temp == NULL) 
    {
        printf("ID not found!\n");
        free(newNode);
        return;
    }
    if (choice == 1)
    {
        if (prev == NULL) {
            newNode->next = head;
            head = newNode;
        } else {
            prev->next = newNode;
            newNode->next = temp;
        }
    }
    else {
        newNode->next = temp->next;
        temp->next = newNode;
    }
}
void deleteEntry() {
    int key;
    printf("Enter ID to delete: ");
    scanf("%d", &key);
    struct student *temp = head, *prev = NULL;
    while (temp != NULL && temp->id != key) {
        prev = temp;
        temp = temp->next;
    }
    if (temp == NULL) {
        printf("ID not found!\n");
        return;
    }
    if (prev == NULL)         
        head = temp->next;
    else
        prev->next = temp->next;
    free(temp);
    printf("Deleted successfully.\n");
}
void createSample() {
    struct student *temp;
    for (int i = 1; i <= 5; i++) {
        struct student *newNode = createNode(i, 60+i, 70+i);
        if (head == NULL)
            head = newNode;
        else {
            temp = head;
            while (temp->next != NULL)
                temp = temp->next;
            temp->next = newNode;
        }
    }
}
int main() {
    int ch;
    createSample();
    while (1) {
        printf("\n1.Insert\n2.Delete\n3.Display\n4.Exit\nChoose: ");
        scanf("%d", &ch);
        switch (ch) {
            case 1: insertEntry(); break;
            case 2: deleteEntry(); break;
            case 3: display(); break;
            case 4: return 0;
            default: printf("Invalid choice\n");
        }
    }
}