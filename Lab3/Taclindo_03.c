#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#define LENGTH 30

// Node structure for the linked list
struct node {
    char name[LENGTH];
    float data;  
    struct node* next;
};

// Function prototypes
void enqueue(char*, float, struct node**);
void dequeue(struct node**);
void front_queue(struct node*);
void close_queue(struct node**);

int main() {
    int option;
    float price;
    char name[LENGTH];
    struct node* front = NULL;

    // Menu-driven loop
    do {
        printf("\nBorgi's Grusiri Counter 0:\n\n[1]Fall in line\n[2]Serve Customer\n[3]Next Customer\n[4]Closing time\n[0]Exit\n\nEnter Choice: ");
        scanf("%d", &option);

        switch(option) {
            case 0: 
                exit(0);
            case 1:
                printf("Enter customer name: ");
                scanf("%9s", name);
                printf("Enter total amount: ");
                scanf("%f", &price);
                enqueue(name, price, &front);
                break;
            case 2:
                dequeue(&front);
                break;
            case 3:
                front_queue(front);
                break;
            case 4:
                close_queue(&front);
                break;
            default:
                printf("\nError! Option Undefined.");
        }
    } while(option != 0);
    return 0;
}

// Function to add a new customer to the end of the queue
void enqueue(char *name, float item, struct node** front){
    // Create a new node
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    temp->data = item;
    strcpy(temp->name, name); // Copy the name to the node
    temp->next = NULL;

    // If the queue is empty, make the new node the front
    if(*front == NULL){
        *front = temp;
    }
    else{
        // Traverse the list to find the last node and append the new node to it
        struct node* current = *front;
        while(current->next != NULL){
            current = current->next;
        }
        current->next = temp;
    }
}

// Function to serve the first customer in the queue
void dequeue(struct node** front){
    if(*front == NULL){
        printf("The QUEUE is EMPTY. No orders to serve.\n");
        return;
    }

    // Remove the front node and update the front pointer
    struct node* temp = *front;
    *front = (*front)->next;

    printf("Now Serving: %s with total amount payable of Php %.4f.\n", temp->name, temp->data);
    free(temp); // Free memory allocated for dequeued node
}

// Function to display information about the next customer in the queue
void front_queue(struct node* front){
    if(front == NULL){
        printf("The QUEUE is EMPTY. No order to serve.\n");
        return;
    }
    
    printf("Next order: For %s with total amount payable of Php %.4f.\n", front->name, front->data);
}

// Function to serve all customers and close the queue
void close_queue(struct node** front){
    if(*front == NULL){
        printf("The QUEUE is EMPTY. No order to serve.\n");
        return;
    }
    else{
        // Serve each customer until the queue is empty
        while(*front != NULL){
            dequeue(front);
        }
        printf("All Customers Have Been Served.\n");
    }
}
