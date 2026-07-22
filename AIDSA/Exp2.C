#include<stdio.h>
int stack[5];
int top=-1;
int sz= sizeof(stack)/sizeof(stack[0]);

void push(int x){
    if (top==sz-1){
        printf("Stack is full element cannot be added! ");
    } else {
            top++;
            stack[top]=x;
    }
}
void pop() {
        if(top==-1) {
            printf("the stack is empty! ");
        } else {
            top--;
        }
}

void peak(){
    printf("\n%d",stack[top]);
}
void view() {
    for(int i=0;i<=top;i++){
        printf("\n%d",stack[i]);
    }
}
int main(){
    push(1);
    push(2);
    push(3);
    push(4);
    push(5);
        printf("\n Viewing all elements after this:");
    view();
    pop();
    pop();
        printf("\n popped two elements! ");
    view();
        printf("\n Peaking the top element: ");
    peak();
    return 0;
}
