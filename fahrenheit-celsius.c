#include <stdio.h>

int main(){


float fahr, celsius, lower, upper, step;

lower = 0;
upper = 300;
step = 20;

fahr = lower;


printf("Fahrenheit to Celcius Convertor\n");
for (fahr = lower; fahr <= upper; fahr += step){



celsius = (fahr-32) * (5.0/9.0);
printf("\t%3.0f°F\t%6.1f°C\n", fahr, celsius);

//pagina 15 livro the c programming language
}

}