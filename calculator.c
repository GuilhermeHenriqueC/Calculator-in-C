#include <stdio.h>

void multiply(int, int);
void subtract(int, int);
void addition(int, int);
void division(int, int);
void oper(char, int, int);

int main(){
    int num1 = 0;
    int num2 = 0;
    char maths;
    int list[] =  {};
    int check, size =0;
    int i =0;
    int temp;


 
    

printf("First number:  ");
scanf("%d", &num1);

printf("\nmathematical operator(+ , - , * , /) : ");
scanf("%s", &maths); 

printf("\nSecond number:  ");
scanf("%d", &num2);

//oper(maths, num1, num2);

while (check != 0){
    scanf("%d", &check);
    list[i] = check;
    printf("%d", list[i]);
    size++;
    i++;    
    
    
}
printf("\n%d", size);



    

    

    return 0;
}

void oper(char math, int n1, int n2){




    switch (math)
{
case '+':
    addition(n1, n2);
    break;

case '-':
    subtract(n1, n2);
    
    break;
case '*':
    multiply(n1, n2);
    
    break;
case '/':
    division(n1, n2);
    
    break;



}

}

void addition(int number1, int number2){

int temp;
temp = number1 + number2;
printf("The answer is: %d", temp); 
}

void multiply(int number1, int number2){

int temp;
temp = number1 * number2;
printf("The answer is: %d", temp);
}

void subtract(int number1, int number2){

int temp;
temp = number1 - number2;
printf("The answer is: %d", temp);
   
}

void division(int number1, int number2){

int temp;
temp = number1 / number2;
printf("The answer is: %d", temp);
}