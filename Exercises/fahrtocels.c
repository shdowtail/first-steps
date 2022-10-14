#include <stdio.h>
int main(void)
{
    int fahr, cels;

    printf("Enter the temperature in Fahrenheit: ");
    scanf("%d" , &fahr);
    cels =  (fahr - 32)  * 5 / 9;
    printf("Celsius value: %d\n", cels);
}
