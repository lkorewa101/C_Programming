#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node {
  int data;
  struct Node* next;
} Node;

typedef struct Queue {
  Node* front;
  Node* rear;
  int count;
} Queue;

void InitQueue(Queue* queue);
int IsEmpty(Queue* queue);
void Enqueue(Queue* queue, int data);
int Dequeue(Queue* queue);

void InitQueue(Queue* queue) {
  queue->front = queue->rear = NULL;
  queue->count = 0;
}

int IsEmpty(Queue* queue) {
  return !queue->count;
}

void Enqueue(Queue* queue, int data) {
  Node* now = (Node*)malloc(sizeof(Node));

  // Check if memory allocation is successful
  if (now == NULL) {
    fprintf(stderr, "Memory allocation failed\n");
    exit(EXIT_FAILURE);
  }

  now->data = data;
  now->next = NULL;

  if (IsEmpty(queue)) {
    queue->front = now;
  } else {
    queue->rear->next = now;
  }

  queue->rear = now;
  queue->count++;
}

int Dequeue(Queue* queue) {
  int re = 0;
  Node* now;

  if (IsEmpty(queue)) {
    return re;
  }

  now = queue->front;
  re = now->data;
  queue->front = now->next;
  free(now);
  queue->count--;

  return re;
}

int main(void) {
  int menu, input;

  Queue queue;
  InitQueue(&queue);

  do {
    printf("Select menu [(1) enqueue (2) dequeue (3) exit program] : ");
    scanf("%d", &menu);

    switch (menu) {
      case 1:
        printf("Input number : ");
        scanf("%d", &input);
        Enqueue(&queue, input);
        break;
      case 2:
        input = Dequeue(&queue);
        if (input != 0) {
          printf("(%d) is dequeued.\n", input);
        } else {
          printf("Queue is empty.\n");
        }
        break;
      case 3:
        break;
      default:
        printf("Invalid menu. Please try again.\n");
        break;
    }
  } while (menu != 3);

  return 0;
}