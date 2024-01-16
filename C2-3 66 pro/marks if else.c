#include<stdio.h>
int main(){

int marks;
printf("Enter marks");
scanf("%d", &marks);






if(marks > 90){
    printf("A Grade");
}

else if(marks >=70 && marks <=90){
printf("B Grade");
}
else if(marks >=50 && marks < 70){
printf("C Grade");
}
else{
    printf("Fail");
}






















return 0;




}
