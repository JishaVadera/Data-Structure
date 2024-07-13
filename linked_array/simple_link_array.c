// malloc function is use for memory allocation in heap memory
#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head = NULL;
void insertend(int val)
{
    struct node *ptr = head;
    struct node *temp = malloc(sizeof(struct node));     //  temp = temprary node
    temp->data = val;
    temp->next = NULL;
    
    if(head == NULL)
    {
        head = temp;
        return;
    }
    while(ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    ptr->next = temp;
    return;
}

void deleteend()
{
    struct node *ptr = head , *p;
    if(head == NULL)
    {
        printf("List Is Already Empty\n");
    }
    else if(head->next == NULL)
    {
        head == NULL;
        free(ptr);             // free function is use for  free any variable 
    }
    else
    {
        while(ptr->next != NULL)
        {
            p = ptr;
            ptr = ptr->next;
        }
        p->next = NULL;
        free(ptr);
    }
    return;
}
void insertFirst()
{
    
}

void display()
{
    struct node *ptr = head;
    if(head == NULL)
    {
        printf("List Is Empty");
    }
    else 
    {
        while(ptr != NULL)
        {
            printf("%d  ",ptr->data);
            ptr = ptr->next;
        }
    }
    printf("\n");
}

int main()
{
    insertend(10);
    insertend(20);
    insertend(30);
    insertend(40);
    insertend(50);
    display();
    
    deleteend();
    deleteend();
    
    display();
}