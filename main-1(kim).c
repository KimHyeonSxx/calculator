#include <stdio.h>

int add(int, int);
int sub(int, int);
int div(int, int);
int multi(int, int);

int main(){

    int a, b, c;
    char op;

    printf("Please enter a exprssion\n");

    switch (op)
    {
    case '+':
    c = add(a, b);
    break;

    case '-':
    c = sun(a, b);
    break;
    
    default:
        break;
    }

    printf("%d\n", &c);
}

int add(int a, int b){
    return a + b;
}

int sub(int a, int b){
    return a - b;
}

// .......