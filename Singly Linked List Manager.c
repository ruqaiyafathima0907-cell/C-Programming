#include <stdio.h>
#include <stdlib.h>
struct node{
int data;
struct node *next;
};
struct node *head=NULL;
void insertend(int value){
struct node *newnode=(struct node*)malloc(sizeof(struct node));
newnode->data=value;
newnode->next=NULL;
if(head==NULL){
head=newnode;
}
else{
    struct node *temp=head;
    while(temp->next!=NULL)
        temp=temp->next;
}
}
void insertbeginning(int value){
struct node *newnode=(struct node*)malloc(sizeof(struct node));
newnode->data=value;
newnode->next=head;
head=newnode;
}
void deletenode(int value){
struct node *temp=head,*prev=NULL;
if(temp!=NULL&&temp->data==value){
    head=temp->next;
    free(temp);
    return;
}
while(temp!=NULL&&temp->data!=value){
    prev=temp;
    temp=temp->next;
}
if(temp==NULL){
    printf("Value not found");
    return;
}
prev->next=temp->next;
free(temp);
}
void display(){
struct node*temp=head;
if(head==NULL){
    printf("List is empty");
    return;
}
printf("Linked list: ");
while(temp!=NULL){
    printf("%d",temp->data);
    temp=temp->next;
}
printf("\n");
}
int main(){
int choice,value;
while(1){
    printf("\n-----Singly Linked list menu----\n");
    printf("1. Insert at beginning\n");
    printf("2. Insert at end\n");
    printf("3. Delete a node\n");
    printf("4. Display list\n");
    printf("5. Exit\n");
    printf("Enter your choice: ");
    scanf("%d",&choice);
    switch(choice){
    case 1:
    printf("Enter the value: ");
    scanf("%d",&value);
    insertbeginning(value);
    break;
    case 2:
    printf("Enter the value: ");
    scanf("%d",&value);
    insertend(value);
    break;
    case 3:
    printf("Enter value to delete: ");
    scanf("%d",&value);
    deletenode(value);
    break;
    case 4:
    display();
    break;
    case 5:
    exit(0);
    default:
        printf("Invalid choice!\n");

    }
}
}
