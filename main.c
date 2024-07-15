#include <stdio.h>

int add(int, int);
int sub(int, int);
int div(int, int);
int multi(int, int);

int main(int argc, char* argv[])
{
    int a, b, c;
    char operator;

    printf("문구 띄우기: ");
    scanf("%d %c %d", &a, &operator, &b);

    switch (operator)
    {
        case '+':
            c = add(a, b);
            break;
        case '-':
            c = sub(a, b);
            break;

        case '*':
            c = multi(a, b);
            break;

        case '/':
            c = div(a, b);
            break;
    
    }
    prinitf("result is %d.\n", c);

    return 0;
}

int add(int a, int b){
    a + b;
}

int sub(int a, int b){
    a - b;
}

int multi(int a, int b){
    a * b;
}

int div(int a, int b){
    a / b;
}