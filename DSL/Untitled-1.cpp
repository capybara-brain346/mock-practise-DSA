#include<iostream>
#include<stack>
#include<cctype>
using namespace std;

bool is_operator(char op)
{
    return (op == '+' || op == '-' || op == '*' || op == '/');
}

int precedence(char op)
{
    if (op == '+' || op == '-') return 1;
    else if (op == '*' || op == '/') return 2;
    return 0;
}

string infixtopostfix(const string& infix)
{
    stack <char> operators;
    string postfix = "";
    for (char c: infix)
    {
        if (isalnum(c))
            postfix += c;
        else if (c == '(')
            operators.push(c);
        else if (c == ')')
        {
            while (!operators.empty() && operators.top() != '(')
            {
                postfix += operators.top();
                operators.pop();
            }
            operators.pop();
        }
        else if (is_operator(c))
        {
            while(!operators.empty() && precedence(c) <= precedence(operators.top()))
            {
                postfix += operators.top();
                operators.pop();
            }
            operators.push(c);
        }
    }
    while (!operators.empty())
    {
        postfix+=operators.top();
        operators.pop();
    }
    return postfix;
}

int main()
{
    string infixexpression, postfixexpression;

    cout << "Enter an infix expression: ";
    getline(cin, infixexpression);

    postfixexpression = infixtopostfix(infixexpression);

    cout << "postfix: " << postfixexpression << endl;

    return 0;
}