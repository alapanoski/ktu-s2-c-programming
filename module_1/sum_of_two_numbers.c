/**
 * @brief A program to find the sum of two numbers
 *
 * @author Allen Shibu
 */

int main()
{
    int x, y, sum;

    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    sum = x + y;

    printf("Sum of %d and %d is %d\n", x, y, sum);

    return 0;
}