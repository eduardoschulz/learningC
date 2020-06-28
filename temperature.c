#include <stdio.h>

int main(){

int fahr, celsius;
int lower, upper, step;

lower = 0;
upper = 300;
step = 20;

fahr = lower;



for (fahr = lower; fahr <= upper; fahr += step){



celsius = (fahr-32) *5 /9;
printf("%d\t%d\n", fahr, celsius);


}

}