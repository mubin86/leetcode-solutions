
#include<bits/stdc++.h>

using namespace std;

struct Node{
    int data;
    Node* next;
};
    
Node* previous = NULL;
Node* temp = NULL;
    
    
void reverselist(Node* headnode){
    Node* current = headnode;
    
    while(current != NULL){
        temp = current->next;
        current->next = previous;
        previous = current;
        current = temp;
    }
}

Node* newnode(int data){
    
    Node* temp = new Node();
    temp->data= data;
    temp->next = NULL;
    
    return temp;
}

void printlist(Node* startnode){
    
    while(startnode != NULL){
        cout<<startnode->data<<" ";
        startnode=startnode->next;
    }
}


int main()
{
    Node* head = newnode(5);
    head->next = newnode(4);
    head->next->next = newnode(3);
    head->next->next->next = newnode(2);
    head->next->next->next->next = newnode(1);
    
    reverselist(head);
    
    printlist(previous);
    

    return 0;
}