#include <stdio.h>
#include<stdlib.h>
 struct node{
     int data;
     struct node *next;
 }*head,*tem,*ptr;



 void create(){
     int size;
    printf("Enter how many element you want to store:");
    scanf("%d",&size);
    for(int i=0;i<size;i++){
     tem=(struct node *)malloc(sizeof(struct node));
     printf("Enter the element:");
    scanf("%d",&tem->data);
    tem->next=NULL;
    if(head==NULL){
        head=tem;
    }
    else{
        ptr=head;
        while(ptr->next!=NULL){
            ptr=ptr->next;
        }
        ptr->next=tem;
    }

    }
 }


 void insert_begin(){
     tem=(struct node*)malloc(sizeof(struct node));
     printf("\nEnter the elements: ");
     scanf("%d",&tem->data);
     tem->next=NULL;
     if(head==NULL){
         head=tem;
     }
     else{
         tem->next=head;
         head=tem;
     }
 }



 void insert_end(){
     struct node *p;
     tem=(struct node *)malloc(sizeof(struct node));
     printf("\nEnter the element: ");
     scanf("%d",&tem->data);
     tem->next=NULL;
     if(head==NULL){
        head=tem;
     }
     else{
     ptr=head;
     while(ptr!=NULL){
        p=ptr;
        ptr=ptr->next;
     }
     p->next=tem;
     }
 }

 void insert_pos(int a){
     tem=(struct node *)malloc(sizeof(struct node));
     printf("\nEnter the element: ");
     scanf("%d",&tem->data);
     tem->next=NULL;
     struct node *p;
     ptr=head;
     for(int i=0;i<=a;i++){
        p=ptr;
        ptr=ptr->next;
     }
     p->next=tem;
     tem->next=ptr;
 }
 void delete_beg(){
     if(head==NULL){
        printf("The stack is Empty");
     }
     else{
    head=head->next;
     }
 }

 void delete_end(){
  if(head==NULL){
        printf("The stack is Empty");
     }
  else{
   ptr=head;
   while(ptr->next!=NULL){
        tem=ptr;
      ptr=ptr->next;
   }
   tem->next=NULL;}
 }

 void delete_pos(int a){
     if(head==NULL){
        printf("The stack is Empty");
     }
     else{
       ptr=head;
        for(int i=0;i<a;i++){
            tem=ptr;
            ptr=ptr->next;
        }
        tem->next=ptr->next;
     }

 }
 void display(){
     ptr=head;
     while(ptr!=NULL){
        printf("%d->",ptr->data);
        ptr=ptr->next;
    }
     printf("Null\n");
 }


int main()
{
    int a,in;
    do{
    printf("\nEnter the choice 1.create 2.Insert begin 3.Insert end 4.Insert Specified position 5.Delete beg 6.Delete end 7.Delete Specified position 8.Exit: ");
    scanf("%d",&a);
    switch(a){
        case 1:
         create();
         display();
         break;
        case 2:
          insert_begin();
          display();
          break;
        case 3:
           insert_end();
           display();
           break;
        case 4:
            printf("Enter the index you want to insert an element: ");
            scanf("%d",&in);
            insert_pos(in);
            display();
            break;
        case 5:
            delete_beg();
            display();
            break;
        case 6:
            delete_end();
            display();
             break;
        case 7:
            printf("Enter the index you want to delete an element: ");
            scanf("%d",&in);
            delete_pos(in);
            display();
             break;
    }
   }while(a!=8);
    return 0;
}
