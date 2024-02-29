#define type int



typedef struct queuenode
{
    type data;
    struct queuenode *next;
}QueueNode;

typedef struct queue
{
    QueueNode *front;
    QueueNode *rear;
    int size;
}Queue;



void CreatQueue(Queue *pq);
void append(type item, Queue *pq);
void serve(type *pe, Queue *pq);
int QueueEmpty(Queue *pq);
int QueueFull(Queue *pq);
int QueueSize(Queue *pq);
void ClearQueue(Queue *pq);
void display(type element);
void Traverse(Queue *pq, void(*pf)(type));