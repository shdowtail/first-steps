//computes dimensional weight of a  box provided by the user //
#include<stdio.h>
#define INCHES_PER_POUND 166
int main(void)
{
    int height, length, width, volume, weight;

    printf("Enter the height of a box: ");
    scanf("%d", &height);
    printf("Enter the length of a box: ");
    scanf("%d", &length);
    printf("Enter the width of a box: ");
    scanf("%d", &width);
    volume = height * length * width ;
    weight = (volume + 165) /INCHES_PER_POUND;
  ;
    printf("Dimensions: %dx%dx%d\n", length, width, height);
    printf("Volume (cubic inches):%d\n", volume);
    printf("Dimensional weight (pounds): %d\n", weight);

    return 0;
     }