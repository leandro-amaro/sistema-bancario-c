#include <stdio.h>
 
int main() {
    double x, y;
    
    scanf("%lf %lf", &x, &y);
    
    if(x >= 1 && y >= 1) {
        printf("Q1\n");
    } else if(x < 0 && y >= 1) {
        printf("Q2\n");
    } else if(x < 0 && y < 0) {
        printf("Q3\n");
    } else if(x >= 1 && y < 0) {
        printf("Q4\n");
    } else if(x == 0 && y == 0) {
        printf("Origem\n");
    }
 
    return 0;
}