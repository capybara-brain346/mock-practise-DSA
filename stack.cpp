#include <iostream>
using namespace std;
#define MAX_SIZE 10

class Stack{
    int top;
    char stack[MAX_SIZE];

    public:
    Stack() : top(-1) {}
    void push(char);
    char pop();
    bool isFull();
    bool isEmpty();
};

void Stack::push(char x){
    if (top < MAX_SIZE-1){
        stack[++top] = x;
    } else{
        cout << "Stack Overflow!" << "\n";
    }
}

char Stack::pop(){
    if (top>=0){
        return stack[top--];
    } else {
        cout << "Stack Underflow!" << "\n";
        return '\0';
    }
}

bool Stack::isFull(){
    return top == MAX_SIZE-1;
}

bool Stack::isEmpty(){
    return top == -1;
}

int main(){
    Stack s;
    char exp[20], ch;
    int i = 0;

    cin >> exp;

    if (exp[0] == ')' || exp[0] == ']' || exp[0] == '}'){
        cout << "Invalid Expression!" << "\n";
        return 0;
    } else{
        while (exp[i]!='\0') {
            ch = exp[i];
            switch (ch)
            {
            case '(': s.push(ch); break;
            case '{': s.push(ch); break;
            case '[': s.push(ch); break;
            case ')': s.pop(); break;
            case '}': s.pop(); break;
            case ']': s.pop(); break;
            }
            i = i+1;
        }
    }
    if (s.isEmpty()){
        cout << "Expression is well parentheised";
    } else{
        cout << "Invalid!";
    }
}

