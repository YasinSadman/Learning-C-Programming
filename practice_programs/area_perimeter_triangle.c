#include <stdio.h>
#include <math.h>

int main() {
    float side, area, perimeter;
    
    printf("Enter the side length of the equilateral triangle: ");
    scanf("%f", &side);
    
    perimeter = 3 * side;
    area = (sqrt(3) / 4) * side * side;
    
    printf("Perimeter = %.2f\n", perimeter);
    printf("Area = %.2f\n", area);
    
    return 0;
}
