#include<stdio.h> 

int main(void)
{       
    int a, b, result;
    char op; 
    
    printf("Enter an expression: ");
    scanf("%d%c%d", &a, &op, &b);

    switch(op)
    {
        case '+':
            result = a + b;
            break;
        case '-':
            result = a - b;
            break;
        case '*':
            result = a * b;
            break;
        case '/':
            result = a / b;
            break;              
    }
    
    printf("Result = %d", result);
    
    return 0; 
}

