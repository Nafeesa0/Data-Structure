#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *link;
};

// Size of stack
#define MAX_SIZE 5

int position = 0;
struct node *head = NULL;

struct node* createnode(int data) {
    struct node *newnode;
    newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = data;
    newnode->link = NULL;
    position++;
    return newnode;
}

void push(int data) {
    if (position == MAX_SIZE) {
        printf("Stack overflow!!!!!!!!\n");
        return;
    } else {
        struct node *newnode = createnode(data);
        newnode->link = head;
        head = newnode;
        printf("Item pushed: %d\n", data);
    }
}

void pop() {
    struct node *ptr = head;
    if (ptr == NULL) {
        printf("Stack underflow!!!!!!!\n");
        return;
    } else {
        printf("Item popped: %d\n", ptr->data);
        head = ptr->link;
        free(ptr);
        position--;
    }
}

void traverse() {
    struct node *ptr = head;
    if (ptr == NULL) {
        printf("Stack is empty!!!!!!!!\n");
        return;
    } else {
        printf("Stack elements: ");
        while (ptr != NULL) {
            printf("%d\t", ptr->data);
            ptr = ptr->link;
        }
        printf("\n");
    }
}

int main() {
    int data, ch = 0;
    while (ch != 4) {
        printf("\nStack operations........\n");
        printf("\n1. Push\n2. Pop\n3. Traverse\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);

        switch (ch) {
            case 1:
                printf("Enter the element: ");
                scanf("%d", &data);
                push(data);
                break;

            case 2:
                pop();
                break;

            case 3:
                traverse();
                break;

            case 4:
                printf("Exiting.........\n");
                return 0;

            default:
                printf("Enter a valid choice\n");
                break;
        }
    }
    return 0;
}
