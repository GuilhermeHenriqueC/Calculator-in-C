/*
Author: William Crolla  (Guilherme Crolla)

Description:  Calculator with the basic operators using functions and lists to create the equation: 

Date: Start: 02/03/2024
        End: 

*/

#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100


struct MixedVariable {
    int type; // to indicate the type of variable (1 for int, 2 for float, etc.)
    union {
        int intValue;
        float floatValue;
        } value;
};

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
    int check =1;
    int size_arr =0;
    int size_arr2 =0;
    int i, j =0;
    int temp;
    struct MixedVariable var[size_arr];
    char operator[] = {};

while (check != 0) {
        printf("Enter the type of variable (1 for int, 2 for float, 0 to quit): ");
        scanf("%d", &var[i].type);

        switch (var[i].type) {
            case 1:
                printf("\nEnter an integer: ");
                scanf("%d", &var[i].value.intValue);
                size_arr++;
                i++;
                break;
            case 2:
                printf("\nEnter a float: ");
                scanf("%f", &var[i].value.floatValue);
                size_arr++;
                i++;
                break;   
            case 0:
                check = 0;
                var[i].value.intValue = 0;
                size_arr++;
                i++;

                break;
            default:
                printf("\nUnknown type\n");
                break;
        }
        if(check != 0){
        size_arr2++;
        printf("\nEnter an operator: ");
        scanf("%s", &operator[j]);
        j++;
        }        
        else{
            break;
        }
    }

 j = 0; //reset J 

for (i = 0; i < size_arr; i++) {
        switch (var[i].type) {
            case 1:
                printf("%d ", var[i].value.intValue);
                break;
            case 2:
                printf("%.2f ", var[i].value.floatValue);
                break;
        if (j < size_arr2){
        printf("%c", operator[j]);
        j++;
        }    

        }
    }
    

/*printf("First number:  ");
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
    
    
}*/




    

    

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