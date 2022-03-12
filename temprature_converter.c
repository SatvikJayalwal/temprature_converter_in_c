#include<stdio.h>
int main()
{
    float c,f;
    
    printf("\nThis program converts temprature\n");
    printf("Enter the temprature in celcius : ");
    scanf("%f",&c);
    f=(c*9/5)+32;
    printf("The given temprature in faranhite is %f",f);
    return 0;
}