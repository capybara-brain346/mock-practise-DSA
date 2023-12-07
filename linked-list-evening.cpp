#include <iostream>
#include <stdio.h>
using namespace std;

struct node{
    int data;
    node *next;
};

class member{
    public:
    node *header;
    node* create(int x);
    void display(node *head);
    void add(node *head);
};

node* member::create(int x){
    int roll;
    node *head = NULL;
    node *nn = new node;
    head = nn;    
    for(int i = 0; i<x;++i){
        nn->next = new node;
        nn = nn->next;
        printf("Enter Roll Number: ");
        cin >> nn->data;
    }
    nn->next=NULL;
    return head;
}

void member::display(node *head){
    node *ptr = head;
    for(int i=0;ptr!=NULL;i++){
        printf("%d",ptr->data);
        ptr = ptr->next;
    }
}

int main(){
    member m;
    m.header = m.create(3);
    m.display(m.header);
    return 0;
}