#include<stdio.h>
#include<string.h>


struct student{
  char name[100];
  unsigned long long int phone;
  struct student *next;
} ;
int main(){
    struct student *head,*newnode,*tem;
     head=0;
     int a,pos,l,i=0;
     scanf("%d",&a);
     printf("Enter a name and phone number\n");
     for(int i=0;i<a;i++){
    newnode=(struct student*)malloc(sizeof(struct student));
    scanf("%s %lld",&newnode->name,&newnode->phone);
    newnode->next=0;
    if(head==0){
        head=newnode;
        tem=newnode;
    }
    else{
        tem->next=newnode;
        tem=newnode;
    }

     }
    printf("Anything you want to insert(1) or Delete(0):");
     scanf("%d",&l);
     if(l==1){
        newnode=(struct student*)malloc(sizeof(struct student));
        printf("Enter the Position:");
        scanf("%d",&pos);
        tem=head;
        while(i<pos){
            tem=tem->next;
            i++;
        }
        printf("Enter name and phone number:");
        scanf("%s %d",&newnode->name,&newnode->phone);

        newnode->next=tem->next;
        tem->next=newnode;
     }
     if(l==0){
        struct student *nextnode;
        int pos,i=1;
        tem=head;
        printf("Eneter a position:");
        scanf("%d",&pos);
        while(i<pos-1){
            tem=tem->next;
            i++;
        }
            nextnode=tem->next;
            tem->next=nextnode->next;
            free(nextnode);

     }
     tem=head;
     while(tem!=0){
        printf("%s %d\n",tem->name,tem->phone);
        tem=tem->next;
     }


}
