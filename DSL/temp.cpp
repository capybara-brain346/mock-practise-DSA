#include <iostream>
using namespace std;

struct node{
    int data;
    node *next;
};

class member{
    public:
    node *header;
    node* create();
    void display(node *head);
    void add(node *head);
};

node* member::create(){
    node *head;
    node *nn = new node;
    head = nn;

    for (int i = 1; i<10; ++i){
        nn->next = new node;
        nn = nn->next;
        nn->data = i;
    }
    nn->next = NULL;
    return head;
}

void member::display(node *head){
    node *ptr;
    ptr = head;
    while(ptr!=NULL){
        cout << ptr->data << "\n";
        ptr = ptr->next;
    }
}

void member::add(node *head){
    node *ptr = head;
    node *nn = new node;
    nn->data = 100;
    nn->next = NULL;

    while(ptr->next!=NULL){
        ptr = ptr->next;;
    }
    ptr->next = nn;
}

int main(){
    member m;
    m.header = m.create();
    m.add(m.header);
    m.display(m.header);
    return 0;
}