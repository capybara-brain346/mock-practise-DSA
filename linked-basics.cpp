#include <iostream>
#include <stdio.h>
using namespace std;

struct node{
    int data;
    node *next;
};

class student{
    public:
    node *header;
    node* create();
    void display(node *head);
    void add(node *head);
    void add_specific(node *head, int x);
};

node* student::create(){
    int roll;
    char ch;
    
    node *head;
    node *nn = new node;
    head = nn;

    do {
        nn->next = new node;
        nn = nn->next;
        printf("Enter The Roll Number: ");
        cin >> roll;
        nn->data = roll;
        printf("Do You Want To Continue y/n: ");
        cin >> ch;
    } while (ch == 'Y' || ch == 'y');
    
    nn->next = NULL; 
    return head;
}

void student::display(node *head){
    node *nn;
    nn = head;
    if (nn == NULL){printf("EMPTY!");}

    while(nn!=NULL){
        cout << nn->data << "\n";
        nn=nn->next;
    }
}

void student::add(node *head){
    node *temp,*ptr;
    ptr = head;
    temp = new node;

    temp->data = 67;
    temp->next = NULL;

    while(ptr->next!=NULL){
        ptr = ptr->next;
    }
    ptr->next = temp;
}

void student::add_specific(node *head,int x){
    node *ptr = head;
    node *ptr2 = new node;

    ptr2->data = 100;
    ptr2->next = NULL;

    x--;
    while(x!=1){
        ptr = ptr->next;
        x--;
    }
    ptr2->next = ptr->next;
    ptr->next = ptr2;
}

int main(){
    student s;
    s.header = s.create();
    s.add(s.header);
    s.display(s.header);
    s.add_specific(s.header,3);
    s.display(s.header);
    return 0;
}