1 #include<stdio.h>
2 #include<string.h>
3 # define capacity 10;
4
5 int top=-1;
6 int arr[capacity];
7
8 int isfull(){
9 return top== capacity-1;
10 }
11 void push (int data){
12 if (isfull()==1)
13 printf ("Over stack flow\n");
14 else {
15 top++;
16 arr[top]=data;
17 }
18 }
19 int isempty(){
20 return top==-1;
21 }
22
23 int pop (){
24 if (isempty()==1){
25 printf ("Under stack flow\n");}
26
27 else {
28 top--;
29 return arr[top+1];
30 }
31 }
32
33 int main(){
34 char str [100];
35 int m;
36 shan :
37 printf ("Enter the expression:");
38 scanf ("%s",str );
39
40 int i,num1 ,num2 ;
41 int n=strlen(str );
42
43 for(int i=0;i<n;i++){
44
45 if (isdigit(str [i]))
46 push (str [i]-'0');
47
48 else {
49 num1 =pop ();
50 num2 =pop ();
51
52 switch (str [i]){
53
54 case '+' :
55 push (num1 +num2 );
56 break ;
57
58 case '-' :
59 push (num2 -num1 );
60 break ;
61
62 case '*' :
63 push (num1 *num2 );
64 break ;
65
66 case '/' :
67 push (num1 /num2 );
68 break ;}
69 }
70 }
71 printf ("Evaluated Answer: %d" ,pop ());
72 printf ("\nYou Want to continue 1.Yes 2.No:");
73 scanf ("%d" ,& m);
74 if (m== 1){
75 goto shan ;
76 }
77 else {
78 printf ("The program is successfully completed");
79 }
80 }
81
