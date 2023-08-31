#include<stdio.h>
int queue[1000],queueodd[1000],queueeven[1000];
int front=0,rear=-1,rear1=-1,rear2=-1;
void push(int a,int o){
    if(o==0){
        rear1++;
        queueodd[rear1]=a;
    }
    else if(o==1){
        rear2++;
        queueeven[rear2]=a;
    }
    else{
        rear++;
        queue[rear]=a;
    }
}
void displayoddqueue(){
    printf("\nThe even elements in the queue is ");
    for(int i=0;i<=rear1;i++){
        printf("%d ",queueodd[i]);
    }
    printf("\n");
}
void displayevenqueue(){
    printf("\nThe even elements in the queue is: ");
    for(int i=0;i<=rear2;i++){
        printf("%d ",queueeven[i]);
    }
    printf("\n");
}

int main(){
    int a,b,c;
    printf("Enter the size of the queue: ");
    scanf("%d",&a);
    printf("\nEnter the elements you want to store: ");
    for(int i=0;i<a;i++){
        scanf("%d",&b);
        push(b,-1);
    }
    for(int i=0;i<=rear;i++){
        if(queue[i]%2==0){
            push(queue[i],1);
        }
        else{
            push(queue[i],0);
        }
    }
    shan:
    printf("\n1.Display odd 2.Display Even 3.Display odd and even 4.exit(): ");
    scanf("%d",&c);
    if(c==1){
        displayoddqueue();
    }
    if(c==2){
        displayevenqueue();
    }
    if(c==3){
        displayoddqueue();
        displayevenqueue();
    }
    if(c==4){
        printf("\nThe program was successfully completed");
        return 0;
    }
    goto shan;
    
}