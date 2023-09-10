#include<stdio.h>
#include<ctype.h>
#include<string.h>
#define size 50


char stack[size];
int top=-1;


void push(char x){
      top++;
      stack[top]=x;
}


char pop(){
  char x;
  x=stack[top];
  top--;
  return x;
}


int pri(char symbol){
if(symbol=='^')
return(6);
else if(symbol=='*'||symbol=='/') return(3);
else if(symbol=='+'||symbol=='-') return(1);
else
return(0);
}




int main(){
char infix[50],postfix[50],ch,elem;
int i=0,k=0;
printf("EnterInfixExpression:");
scanf("%s",infix);
push('#');

while((ch=infix[i])!='\0'){
     if(ch=='(')
          push(ch);
     else if(isalnum(ch))
        postfix[k++]=ch;
     else if(ch==')'){
        while(stack[top]!='(')
            postfix[k++]=pop();
            elem=pop();
          }
    else{
        while(pri(ch)<=pri(stack[top]))
             postfix[k++]=pop();
             push(ch);
         }
   i++;
}
while(stack[top]!='#')
     postfix[k++]=pop();
     postfix[k]='\0';

printf("\nPostfixExpression=%s\n",postfix);

return 0;
}

