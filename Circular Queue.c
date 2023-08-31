

#include <stdio.h>
#define size 5
int front=-1,rear=-1;
int arr[size];
void enque(int x){
    if(front==rear+1 || (front==0 && rear==size-1)){
        printf("Overflow");
    }
    else{
        if(front==-1){
            front++;
        }
        rear=(rear+1)%size;
        arr[rear]=x;
    }
}
void deque(){
    if(front==-1){
        printf("Underflow");
    }
    else{
        front=(front+1)%size;
    }
}

void display(){
    int i;
    for(i=front;i!=rear;i=(i+1)%size){
        printf("%d ",arr[i]);
    }
    printf("%d ",arr[i]);
    printf("\n*********************\n");
}
void peek(){
    if(front!=-1){
        printf("%d",arr[front]);
    }
    printf("\n*******************\n");
}
int main()
{
    int a,b;
   
    
    do{
        printf("1.enqueue 2.dequeue 3.display 4.peek 5.Exit: ");
        scanf("%d",&a);
    switch(a){
        case 1:
               printf("Enter the element you want store:");
               scanf("%d",&b);
               enque(b);
               printf("***********************\n");
               break;
        case 2:
               deque();
               printf("***********************\n");
               break;
               
        case 3:
               display();
               break;
        case 4:
              peek();
              break;
    }
    }while(a!=5);
    printf("The program is successfully completed");
    
}
