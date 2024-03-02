#include <stdio.h>

void mutliply(int);
void subtract(int);
void addition(int);
void division(int);
void oper(char);

int main(){
    int num1 = 0;
    int num2 = 0;
    char maths;
    int add, minus, divide, mult;
 
    

printf("First number:  ");
scanf("%d", &num1);

printf("\nmathematical operator(+ , - , x , /) : ");
scanf("%s", &maths);


printf("%c", maths);

//oper(maths);

    

    

    return 0;
}

void oper(char math){

int add, minus, divide, mult  = 0;


    switch (math)
{
case '+':
    add = 1;
    break;

case '-':
    minus = 1;
    
    break;
case 'x':
    mult = 1;
    
    break;
case '/':
    divide = 1;
    
    break;


printf("%d", minus);
}
}