#include <stdio.h> 
#define FREEZIN_PT 32.0f
#define SCALE_FACTOR (5.0f / 9.0f)

int main(void)
{
    float fahrenheit, celsius;

    printf("Enter fahrenheit value: ");
    scanf("%f,", &fahrenheit);
    celsius = (fahrenheit - FREEZIN_PT) * SCALE_FACTOR;
    printf("Celsius value: %.2f\n", celsius ) ;
        return 0;
}