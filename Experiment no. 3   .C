#include <stdio.h>

int main() {
    int choice;
    float radius, side, length, breadth, area;

    printf("Choose a shape to calculate the area:\n");
    printf("1. Circle\n");
    printf("2. Square\n");
    printf("3. Rectangle\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("Enter the radius of the circle: ");
            scanf("%f", &radius);
            area = 3.14159 * radius * radius;
            printf("Area of the circle = %.2f\n", area);
            break;

        case 2:
            printf("Enter the side of the square: ");
            scanf("%f", &side);
            area = side * side;
            printf("Area of the square = %.2f\n", area);
            break;

        case 3:
            printf("Enter the length and breadth of the rectangle: ");
            scanf("%f %f", &length, &breadth);
            area = length * breadth;
            printf("Area of the rectangle = %.2f\n", area);
            break;

        default:
            printf("Invalid choice! Please enter 1, 2, or 3.\n");
    }

    return 0;
}
