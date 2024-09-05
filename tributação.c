#include <stdio.h>

int main()
{
    float totalPayment,liquidPayment,days;

    scanf("%.0f", &days);
    totalPayment = 200*days;
    liquidPayment = 0,77*totalPayment;
    printf("%.0f", liquidPayment);
    return 0;
}
