#include <stdio.h>

double add (double a, double b){
return a + b; 
}

double sub (double a, double b){
return a - b; 
}


double mul (double a, double b){
return a * b; 
}

double div (double a, double b){
 return b != 0 ? a / b : 0; 
}

double max (double a, double b){
 return a>b ? a  : b; 
}

double min (double a, double b){
 return a<b ? a  : b; 
}

double avg (double a, double b){
 return (a+b)/2 ; 
}




int main(void){

int a = 5; 
int b = 10; 

printf("Sum = %d",add(a,b));  // Summation 
printf("Sub = %d",sub(a,b));  // Subtraction


return 0; 
}
