#include <stdio.h>

double add (double a, double b){
return a + b; 
}

double sub (double a, double b){
return a - b; 
}


int main(void){

int a = 5; 
int b = 10; 

printf("Sum = %d",add(a,b));  
printf("Sub = %d",sub(a,b));  


return 0; 
}
