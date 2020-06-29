#include <stdio.h>


int main(){

int fahr, celsius, lower, upper, step; //when converting intigers celsius values the fahrenheit will be integers as well.
//for example 5C = 41F; 20C =68; 55 = 131; 
printf("Celsius to Fahrenheit Converter\n");
lower = 0.0;
upper = 150.0;
step = 5.0;

for(celsius = lower; celsius <= upper; celsius += step){
    fahr = (celsius * 9 / 5 + 32);
    
    printf("\t%d°C\t%d°F\n", celsius, fahr);



}

}