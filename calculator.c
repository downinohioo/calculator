#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <math.h>

int main(void)
{
    float answer;
    float firstNumber = get_float("Input first number: ");
    float secondNumber = get_float("Input second number: ");
    string operation;
    printf("Enter, '+' for addition, '-' for subtraction, '*' for multiplication, '/' for division, or '^' for power: \n");
    operation = get_string("Enter operation: ");
    if(strcmp("+",operation)== 0)
    {
        answer = firstNumber + secondNumber;
        printf("The result of the sum is: %.2f\n",answer);
    } else if(strcmp("-",operation)==0)
    {
        answer = firstNumber - secondNumber;
        printf("The result of the difference is: %.2f\n",answer);
    } else if(strcmp("*",operation)==0)
    {
        answer = firstNumber * secondNumber;
        printf("The result of the operation is: %.2f\n",answer);
    } else if(strcmp("/",operation)==0)
    {
        answer = firstNumber / secondNumber;
        printf("The result of the operation is: %.2f\n",answer);
    } else if(strcmp("^",operation)==0)
    {
        answer = pow(firstNumber, secondNumber);
        printf("The result of the operation is: %.2f\n",answer);
    } else {
        printf("Your input wasn't valid");
    }
}

