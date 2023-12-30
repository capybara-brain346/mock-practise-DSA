#include <iostream>
#include <stdio.h>
#define SIZE 10
using namespace std;

class Stack{
    int top;
    char stack[SIZE];

    public:
    Stack(): top(-1) {};
    void push(char x);
    char pop();
    bool isFull();
    bool isEmpty();
};

void Stack::push(char x){
    if (top<SIZE-1){
        stack[++top]=x;
    }else{
        cout << "Stack Overflow!" << "\n";
    }
}

char Stack::pop(){
    if (top>=0){
        return stack[top--];
    } else{
        cout << "Stack Underflow!" << "\n";
    }
}

bool Stack::isFull(){
    return top==SIZE-1;
} 

bool Stack::isEmpty(){
    return top == -1;
}

int main(){
    Stack s;
    char exp[20],ch;
    int i=0;

    cin >> exp;

    if (exp[0]==')' || exp[0]=='}' || exp[0]==']'){
        printf("Invalid Expression!");
    } else{
        while (exp[i]!='\0'){
            ch = exp[i];
            switch(ch){
                case '(': s.push(ch); break;
                case '{': s.push(ch); break;
                case '[': s.push(ch);break;
                case ')': s.pop();break;
                case '}': s.pop(); break;
                case ']': s.pop();break;
            }
            i++;
        }
        
    }
    if (s.isEmpty()){
        printf("Valid!");
    } else{
        printf("Invalid Expression!");
    }
    return 0;
}
