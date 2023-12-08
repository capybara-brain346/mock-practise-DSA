#include <iostream>
#include <string>
using namespace std;

struct node{
    string name;
    int prn;
    node *next;
};

class member{
    public:
    node *header1, *header2;
    member(){
        header1 = NULL;
        header2 = NULL;
    }

    int count(node *head){
        node *current = head;
        int count = 0;
        while(current!=NULL){
            count++;
            current=current->next;
        }
        return count;
    }

    node* create(){
        char ch;

        node *head;
        node *nn = new node;
        head = nn;
        cout << "Enter Name Of President: ";
        cin >> nn->name;
        cout << "Enter PRN Number: ";
        cin >> nn->prn;

        cout << endl;

        do {
            nn->next = new node;
            nn = nn->next;
            cout << "Member: ";
            cin >> nn->name;
            cout<<"PRN: ";
            cin >> nn->prn;

            cout << "Repeat?: ";
            cin >> ch;
        } while(ch=='Y' || ch=='y');

        nn->next = new node;
        nn = nn->next;
        cout << "Secretary: ";
        cin >> nn->name;
        cout<<"PRN: ";
        cin >> nn->prn;

        nn->next = NULL;

        return head;
    }

    void display(node *head){
        node *nn;
        nn = head;

        cout << "President: " << nn->name << "\n";
        cout << "PRN: " << nn->prn << "\n";

        for (int i = 0; nn->next!=NULL;i++){
            cout << "Member: " << nn->name << "\n";
            cout << "PRN: " << nn->prn << "\n";
            nn->next;
        }
        cout << "Secretary: " << nn->name << "\n";
        cout<< "PRN: " << nn->prn << "\n";
    }





};

