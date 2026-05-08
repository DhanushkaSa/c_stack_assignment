#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define MAX 100

// Stack array
float stack[MAX];

// Top variable
int top = -1;

// PUSH function
void push(float value) {
    if(top == MAX - 1) {
        printf("Stack Overflow!\n");
    } else {
        top++;
        stack[top] = value;
    }
}

// POP function
float pop() {
    if(top == -1) {
        printf("Stack Underflow!\n");
        return 0;
    } else {
        float value = stack[top];
        top--;
        return value;
    }
}

// Display stack
void displayStack() {
    int i;

    printf("Current Stack: ");

    if(top == -1) {
        printf("Empty");
    } else {
        for(i = 0; i <= top; i++) {
            printf("%.2f ", stack[i]);
        }
    }

    printf("\n");
}

int main() {



    return 0;
}
