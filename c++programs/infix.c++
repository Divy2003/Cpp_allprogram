#include <iostream>
#include <stack>
#include <string>

using namespace std;

bool isOperand(char c) {
    return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
}
int getPrecedence(char op) {
    if (op == '^') {
        return 3;
    }
    else if (op == '*' || op == '/') {
        return 2;
    }
    else if (op == '+' || op == '-') {
        return 1;
    }
    else {
        return -1; // Invalid operator
    }
}

string infixToPostfix(string infix) {
    stack<char> s;
    string postfix = "";

    for (int i = 0; i < infix.length(); i++) {
        char c = infix[i];
        if (isOperand(c)) {
            postfix += c;
        }
        else if (c == '(') {
            s.push(c);
        }

        else if (c == ')') {
            while (!s.empty() && s.top() != '(') {
                postfix += s.top();
                s.pop();
            }
            if (!s.empty() && s.top() == '(') {
                s.pop();
            }
        }

        else {
            while (!s.empty() && getPrecedence(c) <= getPrecedence(s.top())) {
                postfix += s.top();
                s.pop();
            }
            s.push(c);
        }
    }

    while (!s.empty()) {
        postfix += s.top();
        s.pop();
    }

    return postfix;
}

int main() {
    string infix = "D+A*T/A+S/T*R(U/C)+T/U*R-E^S";
    string postfix = infixToPostfix(infix);
    cout << postfix << endl;
    return 0;
}