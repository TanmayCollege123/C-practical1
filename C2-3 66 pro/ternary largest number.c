#include<stdio.h>
int main(){

int a,b,c;


printf("Enter Values of a,b and c");
scanf("%d %d %d", &a,&b,&c);


int large = (a>b)?((a>c)?a:c):((b>c)?b:c);
printf("The Largest Number is %d", large);





return 0;





















}
