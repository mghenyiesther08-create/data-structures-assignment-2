#include <stdio.h>

#define MAX 5

int queue[MAX];
int front = -1, rear = -1;

// Enqueue function
void enqueue(int x)
{
    if (rear == MAX - 1)
    {
        printf("Queue Full\n");
    }
    else
    {
        if (front == -1)
            front = 0;

        rear++;
        queue[rear] = x;

        printf("%d has been queued\n", x);
    }
}

// Dequeue function
int dequeue()
{
    int x;

    if (front == -1 || front > rear)
    {
        printf("Queue Empty\n");
        front = rear = -1;
        return -1;
    }
    else
    {
        x = queue[front];
        front++;

        printf("%d has been dequeued\n", x);

        if (front > rear)
            front = rear = -1;

        return x;
    }
}

int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);
    enqueue(60);   // Queue Full

    dequeue();
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    return 0;
}