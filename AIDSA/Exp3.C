#include <stdio.h>

int queue[5];
int front = -1;
int rear = -1;
int sz = sizeof(queue) / sizeof(queue[0]);

void push(int x)
{
    if ((rear + 1) % sz == front)
    {
        printf("\nQueue is full! Element cannot be added.\n");
    }
    else if (front == -1)
    {
        front = 0;
        rear = 0;
        queue[rear] = x;
        printf("\n%d inserted successfully.\n", x);
    }
    else
    {
        rear = (rear + 1) % sz;
        queue[rear] = x;
        printf("\n%d inserted successfully.\n", x);
    }
}

void pop()
{
    if (front == -1)
    {
        printf("\nQueue is empty!\n");
    }
    else if (front == rear)
    {
        printf("\nDeleted element: %d\n", queue[front]);
        front = -1;
        rear = -1;
    }
    else
    {
        printf("\nDeleted element: %d\n", queue[front]);
        front = (front + 1) % sz;
    }
}

void peek()
{
    if (front == -1)
    {
        printf("\nQueue is empty!\n");
    }
    else
    {
        printf("\nFront element = %d\n", queue[front]);
    }
}

void view()
{
    if (front == -1)
    {
        printf("\nQueue is empty!\n");
        return;
    }

    int i = front;

    printf("\nQueue elements:\n");

    while (1)
    {
        printf("%d ", queue[i]);

        if (i == rear)
            break;

        i = (i + 1) % sz;
    }

    printf("\n");
}

int main()
{
    int choice, value;

    do
    {
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Peek\n");
        printf("4. View\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter value to push: ");
            scanf("%d", &value);
            push(value);
            break;

        case 2:
            pop();
            break;

        case 3:
            peek();
            break;

        case 4:
            view();
            break;

        case 5:
            printf("\nExiting program...\n");
            break;

        default:
            printf("\nInvalid choice! Please try again.\n");
        }

    } while (choice != 5);

    return 0;
}
