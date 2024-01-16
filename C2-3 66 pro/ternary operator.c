#include<stdio.h>
int main(){

int n1,n2;
printf("Enter values of n1 and n2");
scanf("%d %d", &n1,&n2);



int max = (n1 > n2) ? n1 : n2;

printf("The largest number is %d", max);































return 0;
}
