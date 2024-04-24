#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define MAX_SIZE 100

// Function prototypes
void infixToPostfix(char infix[], char postfix[]);
int isOperator(char ch);
int precedence(char op);

int main() {
    char infix[MAX_SIZE], postfix[MAX_SIZE];

    // Input infix expression
    printf("Enter an infix expression: ");
    scanf("%s", infix);

    // Convert infix to postfix
    infixToPostfix(infix, postfix);

    // Output postfix expression
    printf("Postfix expression: %s\n", postfix);

    return 0;
}

// Function to convert infix expression to postfix expression
void infixToPostfix(char infix[], char postfix[]) {
    char stack[MAX_SIZE];
    int top = -1;
    int i = 0, j = 0;

    // Iterate through each character of infix expression
    while (infix[i] != '\0') {
        char ch = infix[i];

        // If the character is an operand, add it to the postfix expression
        if (isalnum(ch)) {
            postfix[j++] = ch;
        }
        // If the character is an operator
        else if (isOperator(ch)) {
            // Pop operators from stack and add to postfix until we find an operator with lower precedence
            while (top >= 0 && precedence(stack[top]) >= precedence(ch)) {
                postfix[j++] = stack[top--];
            }
            // Push the current operator to stack
            stack[++top] = ch;
        }
        // Move to the next character
        i++;
    }

    // Pop remaining operators from stack and add to postfix
    while (top >= 0) {
        postfix[j++] = stack[top--];
    }

    // Add null terminator to postfix string
    postfix[j] = '\0';
}

// Function to check if a character is an operator
int isOperator(char ch) {
    return (ch == '+' || ch == '-' || ch == '*' || ch == '/');
}

// Function to get the precedence of an operator
int precedence(char op) {
    switch (op) {
        case '+':
        case '-':
            return 1;
        case '*':
        case '/':
            return 2;
        default:
            return 0;
    }
}
