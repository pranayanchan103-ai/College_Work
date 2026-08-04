#include<stdio.h>
int queue[5];
int front=-1;
int rear=-1;
int sz=sizeof(queue)/sizeof(queue[0]);

void push(int x){
    if((rear+1)%sz==front){
        printf("Queue is full element cannot be added! ");
    } else if(front==-1){
        front=0;
        rear=0;
        queue[rear]=x;
    } else {
        rear=(rear+1)%sz;
        queue[rear]=x;
    }
}

void pop(){
    if(front==-1){
        printf("the queue is empty! ");
    } else if(front==rear){
        front=-1;
        rear=-1;
    } else {
        front=(front+1)%sz;
    }
}

void peak(){
    printf("\n%d",queue[front]);
}

void view(){
    if(front==-1){
        printf("\nqueue is empty!");
        return;
    }
    int i=front;
    while(1){
        printf("\n%d",queue[i]);
        if(i==rear) break;
        i=(i+1)%sz;
    }
}

int main(){
        printf("\n Pushing numbers 1-5 into queue: ");
    push(1);
    push(2);
    push(3);
    push(4);
    push(5);
        printf("\n Viewing all elements:");
    view();
    pop();
    pop();
        printf("\n popped two elements! ");
    view();
        printf("\n Peaking front element: ");
    peak();
    push(6);
    push(7);
        printf("\n elements Pushed, viewing again:");
    view();
    return 0;
}