#include <stdio.h>

int main() 
{
    float x, y;

    printf("Enter coordinates (x y): ");
    scanf("%f %f", &x, &y);

    if (x == 0 && y == 0) 
    {
        printf("The point is at the origin.\n");
    } 
    else if (x == 0) {
        printf("The point lies on the Y-axis.\n");
    } 
    else if (y == 0) {
        printf("The point lies on the X-axis.\n");
    } 
    else if (x > 0 && y > 0) {
        printf("Quadrant I\n");
    } 
    else if (x < 0 && y > 0) {
        printf("Quadrant II\n");
    } 
    else if (x < 0 && y < 0) {
        printf("Quadrant III\n");
    } 
    else {
        printf("Quadrant IV\n");
    }

    return 0;
}
