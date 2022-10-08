#include <stdio.h>
#define CAPACITY 3

int stack[CAPACITY];
int top=-1;

void push(int x){
    if(top<CAPACITY-1){
        top=top+1;
        stack[top]=x;
        printf("added item: %d\n",x);
    }else{
        printf("no space left\n");
    }
}

int pop(){
    if(top>=0){
        int val=stack[top];
        top=top-1;
        return val;
    }
        printf("empty stack\n");
    
    
    return -1;
}

int peek(){
    if(top>=0){
        return stack [top];
    }
    printf("Empty stack\n");
    return -1;
}
int main() {
    printf("Implementing my stack\n");
    peek();
    push(10);
    push(30);
    push(90);
    
    printf("popped item: %d\n", pop());
    push(80);
    printf("top of stack: %d\n",peek());
    
    return 0;
}
