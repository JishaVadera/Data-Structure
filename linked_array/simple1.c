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
    struct node *temp = malloc(sizeof(struct node));
    temp->data = val;
    temp->next =NULL;

    if(head == NULL  )
    {
        head = temp;
        return;
    }
    while(ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    ptr->next =temp;
    return;
}
void deleteEnd()
{
     struct node *ptr = head, *p;

    if(head == NULL)
    {
       printf("List is already empty\n");
    }
    else if(head->next == NULL)
    {
        head=NULL;
        free(ptr);
    }
    else{
    while(ptr->next !=NULL)
    {
        p = ptr;
        ptr = ptr->next;
    }
    p->next =NULL;
    free(ptr);
    }

    return;
}
void insert_first(int val)
{
     struct node *temp = (struct node *)malloc(sizeof(struct node));
     temp->data = val;
    temp->next = head;
    head = temp;
}
void delet_first()
{
     struct node *ptr = head;
    head = ptr->next;
    free(ptr);
}
void insert_mid(int val,int posi)
{
      struct node *ptr = head;
    struct node *temp = (struct node *)malloc(sizeof(struct node));

    temp->data = val;
    struct node *p;

    while (ptr->data != posi)
    {
        p = ptr;
        ptr = ptr->next;
    }
    p->next = temp;
    temp->next = ptr;
    return;
}
void delet_mid(int posi)
{
    struct node *ptr = head;
    struct node *p;

    while (ptr->data != posi)
    {
        p = ptr;
        ptr = ptr->next;
    }
    p->next = ptr->next;
    free(ptr);
    return;
}
void display()
{
    struct node *ptr = head;
    if( head == NULL)
    {
        printf("list is empty");

    }
    else{
        while(ptr != NULL)
        {
            printf("%d ",ptr->data);
            ptr = ptr->next;
        }
    }
    printf("\n");
}
int main()
{
   // insertend(100);
    //insertend(200);
   // insertend(300);
    //insertend(400);
  //  insertend(500);
   // insertend(600);

    //display();
    //deleteEnd();
   // deleteEnd();
    //display();

    insert_first(10);
    insert_first(20);
    insert_first(30);
    insert_first(40);
   display();

   // delet_first();
   // delet_first();
   // display();

   insert_mid(60,30);
   //insert_mid(70,40);
  // insert_mid(90,10);
   display();

   delet_mid(60);
   display();

   
}