#include <stdio.h>
#include <math.h>
int main()
{
    float x1, y1, x2, y2;
    float distance, slope;
    int choice;

    printf("Enter x1 and y1: ");
    scanf("%f%f", &x1, &y1);
    printf("Enter x2 and y2: ");
    scanf("%f%f", &x2, &y2);
    do
    {
        printf("\n1. Distance between points");
        printf("\n2. Slope of line between the points");
        printf("\n3. Check whether they lie in the same quadrant");
        printf("\n4. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1:
                distance = sqrt((x2 - x1)*(x2 - x1)+(y2 - y1)*(y2 - y1));                            
                printf("Distance = %.2f", distance);
                break;
            case 2:
                if(x2 == x1)
                    printf("Slope is undefined");
                else
                {
                    slope = (y2 - y1)/(x2 - x1);
                    printf("Slope = %.2f", slope);
                }
                break;
            case 3:
                if(x1 > 0 && y1 > 0 && x2 > 0 && y2 > 0)
                    printf("Both points lie in First Quadrant");
                else if(x1 < 0 && y1 > 0 && x2 < 0 && y2 > 0)
                    printf("Both points lie in Second Quadrant");
                else if(x1 < 0 && y1 < 0 && x2 < 0 && y2 < 0)
                    printf("Both points lie in Third Quadrant");
                else if(x1 > 0 && y1 < 0 && x2 > 0 && y2 < 0)
                    printf("Both points lie in Fourth Quadrant");
                else
                    printf("Points do not lie in the same quadrant");
                break;
            case 4:
                printf("Exit");
                break;
            default:
                printf("Invalid choice");
        }
    } while(choice != 4);
    return 0;
}
