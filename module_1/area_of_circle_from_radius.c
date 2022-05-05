/**
 * @brief A program to find the area of a circle from its radius
 *
 * @author Allen Shibu
 */

#define PI 22 / 7

int main()
{
    int r;
    double area;

    printf("Enter the radius of circle: ");
    scanf("%d", &r);

    area = (double)PI * r * r;

    printf("Area of the circle is %f\n", area);

    return 0;
}