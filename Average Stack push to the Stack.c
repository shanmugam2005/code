

#include <stdio.h>
int sta[1000];
int top=-1;
void push(int a){
    top++;
    sta[top]=a;
}
void average(){
    int c=0;
    for(int i=0;i<=top;i++){
         c+=sta[top];
     }
     int m=c/(top+1);
     push(m);
}   
int main()
{
    int a,b;
    printf("Enter how many elements you want to store:");
    scanf("%d",&a);
    printf("\nEnter the element you want to store:");
     for(int i=0;i<a;i++){
        scanf("%d",&b);
        push(b);
     }
     average();
     printf("\nThe average elements is:%d\n",sta[top]);
     printf("\nThe elements are in stack:");
     for(int i=0;i<=top;i++){
            printf("%d ",sta[i]);
     }
    return 0;
}
