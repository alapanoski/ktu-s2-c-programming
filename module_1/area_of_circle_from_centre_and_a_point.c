/**
 * @brief A program to find the area of a circle using the coordinates of it's centre and of a point on it
 *
 * @author Allen Shibu
 */
#include <math.h>

#define PI 22 / 7

int main()
{
    int xc, yc, xp, yp, r;
    double area;

    printf("Enter the coordinates of the centre: ");
    scanf("%d %d", &xc, &yc);
    printf("Enter the coordinates of a point on the circle: ");
    scanf("%d %d", &xp, &yp);

    r = sqrt(pow((xp - xc), 2) + pow((yp - yc), 2));

    area = (double)PI * r * r;

    printf("Area of the circle is %f\n", area);

    return 0;
}