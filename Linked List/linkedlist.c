#include <stdio.h> 
#include <stdlib.h> 

struct Node { 
 int data; 
 struct Node* next; 
}; 

struct Node* head = NULL; 

void insertAtBeginning(int data) { 
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node)); 
    newNode->data = data; 
    newNode->next = head; 
    head = newNode; 
} 

void insertAtEnd(int data) { 
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node)); 
    newNode->data = data; 
    newNode->next = NULL; 

    if (head == NULL) { 
        head = newNode; 
        return; 
    } 

    struct Node* temp = head; 
    while (temp->next != NULL) { 
        temp = temp->next; 
    } 
    temp->next = newNode; 
} 

void deleteNode(int key) { 
    struct Node *temp = head, *prev = NULL; 
    if (temp != NULL && temp->data == key) { 
        head = temp->next; 
        free(temp); 
        return; 
    } 
    while (temp != NULL && temp->data != key) { 
        prev = temp; 
        temp = temp->next; 
    } 
    if (temp == NULL) return; 
        prev->next = temp->next; 
        free(temp); 
} 
void display() { 
    struct Node* temp = head; 
    while (temp != NULL) { 
        printf("%d ", temp->data); 
        temp = temp->next; 
    } 
    printf("\n"); 
} 
int main() { 
    insertAtEnd(10); 
    insertAtEnd(20); 
    //  insertAtEnd(30); 
    insertAtBeginning(5); 
    //  display(); 
    deleteNode(20); 
    display(); 
    return 0; 
} 