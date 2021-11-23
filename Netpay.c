#include <stdio.h>


int main()
{
    float basicPay, sales, netPay;

    //BASIC PAY
    printf("Please input your Basic Pay: ");
    scanf("%f", &basicPay);

    //SALES
    printf("Please input your Sales: ");
    scanf("%f", &sales);

    if (sales <= 10000) {
        //here the commission is 0. So no need of even doing that calculations
        netPay = basicPay;
        printf("Your Net Pay is %.2f", netPay);
    }
    else if (sales <= 20000) {
        // ((basicPay*8)/100) is where we do the commission
        netPay = basicPay + ((sales * 8) / 100);
        printf("Your Net Pay is %.2f", netPay);

    }
    else if (sales <= 50000) {
        netPay = basicPay + ((sales * 12) / 100);
        printf("Your Net Pay is %.2f", netPay);

    }
    else {
        netPay = basicPay + ((sales * 17) / 100);
        printf("Your Net Pay is %.2f", netPay);
    }

    return 0;
}
