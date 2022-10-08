#include<stdio.h>
#define MAXSIZE 3
struct stack
{
    int stk[MAXSIZE];
    int top;
};
typedef struct stack STACK;
STACK s;
void push()
{
    int num;
    if(s.top==MAXSIZE-1){
        printf("stack is full or overflow \n");
        return;
    }
    else {
        printf("enter the element to be pushed \n");
        scanf("%d",&num);
        s.top=s.top+1;
        s.stk[s.top]=num;

    }
    return;

}
int pop(){
    int num;
    if(s.top==-1){
        printf("underflow \n");
        return(s.top);

    }
    else{
        num=s.stk[s.top];
        printf("popped element is=%d\n",s.stk[s.top]);
        s.top=s.top-1;

    }
    return(num);

}
void display()
{
   int i;
   if(s.top==-1)
   {
       printf("stack is empty\n");
       return;

   }
   else{
    printf("\nThe status of the stack is \n");
    for(i=0;i<=s.top;i++)
    {
        printf("%d\t",s.stk[i]);

    }

   }
   printf("\n");
    
}

void main()
{
    int choice;
    s.top=-1;
    printf("stack operation\n");
    while(1)
    {
        printf("--------------------\n");
        printf("1---> PUSH \n");
        printf("2---> POP \n");
        printf("3---> DISPLAY \n");
        printf("4---> EXIT \n");
        printf("--------------------\n");
printf("Enter your choice \n");
scanf("%d",&choice);
switch(choice)
{
case 1:
    push();
    break;
case 2:
    pop();
    break;
case 3:
    display();
    break;
case 4:
    return;
}
    }

}



