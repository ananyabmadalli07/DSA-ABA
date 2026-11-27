#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define MAX 100

char stack[MAX];
int top = -1;

void push(char c) {
    if (top < MAX - 1) {
        stack[++top] = c;
    }
}

char pop() {
    if (top == -1) return '\0';
    return stack[top--];
}

bool isMatching(char open, char close) {
    return (open == '(' && close == ')') ||
           (open == '{' && close == '}') ||
           (open == '[' && close == ']');
}

bool isBalanced(char expr[]) {
    top = -1;
    for (int i = 0; expr[i] != '\0'; i++) {
        char ch = expr[i];
        if (ch == '(' || ch == '{' || ch == '[') {
            push(ch);
        } else if (ch == ')' || ch == '}' || ch == ']') {
            if (top == -1) return false;
            char open = pop();
            if (!isMatching(open, ch)) return false;
        }
    }
    return top == -1;
}

int main() {
    char expr[MAX];
    printf("Enter expression: ");
    scanf("%s", expr);

    if (isBalanced(expr)) {
        printf("Balanced\n");
    } else {
        printf("Not Balanced\n");
    }
    return 0;
}