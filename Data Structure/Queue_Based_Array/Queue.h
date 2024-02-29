
#define maxsize 5
#define type int 

typedef struct queue
{
    int front;
    int rear;
    int size;
    type my_arr[maxsize];
}Queue;


void CreatQueue(Queue *pq);
void append(type item, Queue *pq);
void serve(type *pe, Queue *pq);
int QueueEmpty(Queue *pq);
int QueueFull(Queue *pq);
int QueueSize(Queue *pq);
void Clear(Queue *pq);
void display(type element);
void Traverse(Queue *pq, void(*pf)(type));
type getfront(Queue *pq);
type getrear(Queue *pq);
