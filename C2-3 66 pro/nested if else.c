#include<stdio.h>
int main(){

int age;
printf("enter age:-");
scanf("%d", &age);



if(age<18){

    printf("Too young to work");
}
else {
    if (age>=18 && age<=60){


        printf("Eligible to work");
    }
    else{
        printf("Too old to work");
    }
}






return 0;



}
