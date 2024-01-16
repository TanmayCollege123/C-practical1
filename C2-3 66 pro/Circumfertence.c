#include <stdio.h>

int main() {

    float rad, len, bre, base, height;




            printf("Enter radius of circle: \n");
            scanf("%f", &rad);
            float area_circle = 3.14 * rad * rad;
            float peri_circle = 2 * 3.14 * rad;
            printf("Area: %f, Perimeter: %f\n", area_circle, peri_circle);


            printf("Enter length and breadth of rectangle: \n");
            scanf("%f %f", &len, &bre);
            float area_rect = len * bre;
            float perim_rect = 2 * (len + bre);
            printf("Area: %f, Perimeter: %f\n", area_rect, perim_rect);


            printf("Enter side length of square: \n");
            scanf("%f", &bre);
            float area_square = bre * bre;
            float perim_square = 4 * bre;
            printf("Area: %f, Perimeter: %f\n", area_square, perim_square);



            printf("Enter base and height of triangle: \n");
            scanf("%f %f", &base, &height);
            float area_triangle = 0.5 * base * height;
            float perim_triangle = base + height + sqrt(base * base + height * height);
            printf("Area: %f, Perimeter: %f", area_triangle, perim_triangle);




    return 0;
}
