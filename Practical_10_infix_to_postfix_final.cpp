#include<iostream>

const int MAX_SIZE = 50;

class Stack {
private:
    char stackArray[MAX_SIZE];
    int top;

public:
    Stack() : top(-1) {}

    void push(char symbol) {
        if (isFull()) {
            std::cout << "\nStack overflow:\n";
        } else {
            top++;
            stackArray[top] = symbol;
        }
    }

    char pop() {
        if (isEmpty()) {
            return '#'; // Return value '#' indicates stack is empty
        } else {
            return stackArray[top--];
        }
    }

    bool isEmpty() const {
        return top == -1;
    }

    bool isFull() const {
        return top == MAX_SIZE - 1;
    }

    int getPriority(char symbol) const {
        switch (symbol) {
            case '/': return 4; // Precedence of / is 4
            case '*': return 3; // Precedence of * is 3
            case '+': return 2; // Precedence of + is 2
            case '-': return 1; // Precedence of - is 1
            case '(': return 0; // Precedence of ( is 0
            default: return -1;
        }
    }

    void readInfixExpression() {
        std::cout << "\nEnter an infix expression: ";
        std::cin >> infixExpression;
    }

    void convertToPostfix() {
        int p = 0;
        char entry;

        for (int i = 0; infixExpression[i] != '\0'; i++) {
            if (!isWhiteSpace(infixExpression[i])) {
                switch (infixExpression[i]) {
                    case '(':
                        push(infixExpression[i]);
                        break;
                    case ')':
                        while ((entry = pop()) != '(') {
                            postfixExpression[p++] = entry;
                        }
                        break;
                    case '+':
                    case '-':
                    case '*':
                    case '/':
                        handleOperator(infixExpression[i], p);
                        break;
                    default:
                        postfixExpression[p++] = infixExpression[i];
                        break;
                }
            }
        }

        while (!isEmpty()) {
            postfixExpression[p++] = pop();
        }

        postfixExpression[p] = '\0';

        std::cout << "\nThe postfix expression is: " << postfixExpression << std::endl;
    }

private:
    char infixExpression[MAX_SIZE];
    char postfixExpression[MAX_SIZE];
    char entry;

    bool isWhiteSpace(char symbol) const {
        return symbol == ' ' || symbol == '\t' || symbol == '\0';
    }

    void handleOperator(char currentOperator, int &p) {
        if (!isEmpty()) {
            int prev = getPriority(currentOperator);
            entry = pop();
            while (prev <= getPriority(entry)) {
                postfixExpression[p++] = entry;
                if (!isEmpty()) {
                    entry = pop();
                } else {
                    break;
                }
            }

            if (prev > getPriority(entry)) {
                push(entry);
            }
        }
        push(currentOperator);
    }
};

int main() {
    char choice = 'y';
    Stack expressionStack;

    while (choice == 'y') {
        expressionStack.readInfixExpression();
        expressionStack.convertToPostfix();
        std::cout << "\nDo you want to continue? (y/n): ";
        std::cin >> choice;
    }

    return 0;
}
