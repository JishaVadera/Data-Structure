#include<stdio.h>
#include<stdlib.h>

//Structure definition for Node of the circular linked list
struct Node {
    int data;
    struct Node *next;
};

//Structure definition for Circular Linked List
struct CircularLinkedList {
    struct Node *head;
};

//Function to create a new Node in heap
struct Node* getNewNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

//Function to create a new Circular Linked List
struct CircularLinkedList* getNewCircularLinkedList() {
    struct CircularLinkedList* list = (struct CircularLinkedList*)malloc(sizeof(struct CircularLinkedList));
    list->head = NULL;
    return list;
}

//Function to add new node to the circular linked list
void addNode(struct CircularLinkedList* list, int data) {
    if(list->head == NULL) {
        list->head = getNewNode(data);
        list->head->next = list->head; //Head's next points to head
    } else {
        struct Node* newNode = getNewNode(data);
        struct Node* temp = list->head;
        while(temp->next != list->head) {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->next = list->head;
    }
}

//Function to print the circular linked list
void printList(struct CircularLinkedList* list) {
    if(list->head == NULL) {
        printf("No elements in the Circular Linked List\n");
        return;
    }
    struct Node* temp = list->head;
    do {
        printf("%d ", temp->data);
        temp = temp->next;
    } while(temp != list->head);
    printf("\n");
}

//Function to delete the entire circular linked list
void deleteList(struct CircularLinkedList* list) {
    struct Node* current = list->head;
    struct Node* nextNode;
    do {
        nextNode = current->next;
        free(current);
        current = nextNode;
    } while(current != list->head);
    free(list);
}

int main() {
    struct CircularLinkedList* list = getNewCircularLinkedList();
    addNode(list, 1);
    addNode(list, 2);
    addNode(list, 3);
    addNode(list, 4);
    printList(list);
    deleteList(list);
    return 0;
}