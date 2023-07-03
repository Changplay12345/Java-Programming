#include <stdio.h>
float addNumbers(float a, float b);

int main()
{
    float n1,n2,sum;
    printf("Enters n1 :");
    scanf("%f",&n1);

    printf("Enters n2 :");
    scanf("%f",&n2);

    sum = addNumbers(n1, n2);

    printf("sum = %0.2f",sum);
    return 0;
}

float addNumbers(float a, float b)
{
    float result;
    result = a-b;
    return result;
}