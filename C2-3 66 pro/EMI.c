#include<stdio.h>
#include <math.h>
int main(){

float prin,loan,inte;


printf("Enter Principal loan amoutn,Loan Tenure in months,Monthly interest rate:-");
scanf("%f %f %f", &prin,&loan,&inte);




float emi1 = prin * inte * pow(1+inte, loan);
float emi2 = pow(1+inte, loan)-1;

float emi = emi1/emi2;






printf("The EMI is %f", emi );




return 0;
}
