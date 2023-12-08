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
    node* create();
    void display(node* head);
    void add(int x);
};

node* member::create(){
    node *head;
    node *nn = new node;
    head = nn;

    for (int i = 0; i<10; ++i){
        nn->next = new node;
        nn = nn->next;
        nn->data = i;
    }
    nn->next = NULL;
    return head;
}

void member::display(node *head){
    node *ptr = head;
    while(ptr!=NULL){
        printf("%d \n",ptr->data);
        ptr = ptr->next;
    }
}

void member::add(int x){
    node *ptr = header;
    node *nn = new node;
    nn->data = x;
    nn->next=NULL;

    while(ptr->next!=NULL){
        ptr = ptr->next;
    }
    ptr->next = nn;
    
}

int main() {
    member m;
    m.header = m.create();
    m.add(69);
    m.display(m.header);


    
    return 0;
}