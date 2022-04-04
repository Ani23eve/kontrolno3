#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;;
}Node;

void push(Node** head, int value );
void printNum(Node* head);
void pop(Node** head);


int main(){

    Node* head =NULL;
    pop(&head);
    pop(&head);
    push(&head, 10);
    push(&head, 9);
    push(&head, 15);
    
    printNum(head);
    pop(&head);
    printNum(head);

    return 0;

}


void pop(Node** head){
    if (*head == NULL){
        return;
    }
    Node* temp = *head;
    *head = (*head)->next; 
    free(temp);
}

void push(Node** head, int value ){
     Node* element = malloc(sizeof(Node));
     
     element->data = value;
     element -> next = *head;
     *head = element;
    
}

void printNum(Node* head){
    Node* current = head;
    while (current != NULL){
        printf("%d ", current->data); 
        current = current->next;
    }
    putchar('\n');
}

