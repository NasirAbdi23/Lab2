#include <stdio.h>
int main(void) {
double Dollars;
double Fee;
double totalAfter;
double amountLeftover;
double GBP;
double JPY;
printf("Please input the amount of dollars you have:");
scanf("%lf", &Dollars);
Fee = Dollars * .1;
printf("Fee (10%%): $%.2f\n", Fee);
totalAfter = Dollars - Fee;
amountLeftover = totalAfter / 2;
GBP = amountLeftover * .79;
JPY = amountLeftover * 127.65;
printf("%.2f GBP\n",  GBP);
printf("%d JPY\n", (int) JPY);
}
