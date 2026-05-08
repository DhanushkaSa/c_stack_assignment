#include <stdio.h>
#include <stdlib.h>

#define MAX 100

// Stack array
float stack[MAX];

// Top variable
int top = -1;

// PUSH function
void push(float value)
{
    if (top == MAX - 1)
    {
        printf("Error: Stack Overflow!\n");
    }
    else
    {
        top++;
        stack[top] = value;
    }
}

// POP function
float pop()
{
    if (top == -1)
    {
        printf("Error: Stack Underflow!\n");
        return 0;
    }
    else
    {
        float value = stack[top];
        top--;
        return value;
    }
}

// Display stack
void displayStack()
{
    int i;

    printf("Current Stack: ");

    if (top == -1)
    {
        printf("Empty");
    }
    else
    {
        for (i = 0; i <= top; i++)
        {
            printf("%.2f ", stack[i]);
        }
    }

    printf("\n");
}

int main()
{
    char choice;
    float number;
    float num1, num2, result;

    printf("=====================================\n");
    printf(" Reverse Polish Calculator (RPN)\n");
    printf("=====================================\n");

    while (1)
    {
        printf("\nEnter:\n");
        printf(" ? = Push Number\n");
        printf(" + = Addition\n");
        printf(" - = Subtraction\n");
        printf(" * = Multiplication\n");
        printf(" / = Division\n");
        printf(" = = Show Top Value\n");
        printf(" d = Display Stack\n");
        printf(" q = Quit\n");

        printf("\nEnter your choice: ");
        scanf(" %c", &choice);

        switch (choice)
        {

        // Push Number
        case '?':

            printf("Enter number: ");

            if (scanf("%f", &number) != 1)
            {
                printf("Error: Invalid number input!\n");

                // Clear invalid input buffer
                while (getchar() != '\n');

                break;
            }

            push(number);

            displayStack();

            break;

        // Addition
        case '+':

            if (top < 1)
            {
                printf("Error: Need at least 2 values for addition!\n");
                break;
            }

            num2 = pop();
            num1 = pop();

            result = num1 + num2;

            push(result);

            printf("Added: %.2f + %.2f = %.2f\n",
                   num1, num2, result);

            displayStack();

            break;

        // Subtraction
        case '-':

            if (top < 1)
            {
                printf("Error: Need at least 2 values for subtraction!\n");
                break;
            }

            num2 = pop();
            num1 = pop();

            result = num1 - num2;

            push(result);

            printf("Subtracted: %.2f - %.2f = %.2f\n",
                   num1, num2, result);

            displayStack();

            break;

        // Multiplication
        case '*':

            if (top < 1)
            {
                printf("Error: Need at least 2 values for multiplication!\n");
                break;
            }

            num2 = pop();
            num1 = pop();

            result = num1 * num2;

            push(result);

            printf("Multiplied: %.2f * %.2f = %.2f\n",
                   num1, num2, result);

            displayStack();

            break;

        // Division
        case '/':

            if (top < 1)
            {
                printf("Error: Need at least 2 values for division!\n");
                break;
            }

            num2 = pop();
            num1 = pop();

            // Division by zero handling
            if (num2 == 0)
            {
                printf("Error: Cannot divide by zero!\n");

                // Restore original values
                push(num1);
                push(num2);

                displayStack();

                break;
            }

            result = num1 / num2;

            push(result);

            printf("Divided: %.2f / %.2f = %.2f\n",
                   num1, num2, result);

            displayStack();

            break;

        // Show top value
        case '=':

            if (top == -1)
            {
                printf("Stack is empty!\n");
            }
            else
            {
                printf("Top Value = %.2f\n", stack[top]);
            }

            break;

        // Display full stack
        case 'd':

            displayStack();

            break;

        // Quit
        case 'q':

            printf("Program Ended.\n");

            return 0;

        // Invalid input
        default:

            printf("Error: Invalid Input!\n");
        }
    }

    return 0;
}