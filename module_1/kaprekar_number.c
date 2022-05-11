/**
 * @brief A program to check whether a number is a Kaprekar number or not
 *
 * A Kaprekar number is number whose square when split into two and added gives the original number itself. 9^2 = 81, 8 + 1 = 9. 297^2 = 88209, 88 + 209 = 297.
 *
 * @author Allen Shibu
 */
#include <math.h>

int main()
{
    int n, square, square_save, n_of_digits, left, right;

    printf("Enter a number: ");
    scanf("%d", &n);
    n = n;

    square = n * n;
    square_save = square;

    for (n_of_digits = 0; square > 0; n_of_digits++)
        square /= 10;

    square = square_save;
    right = square % (int)pow(10, (n_of_digits + 1) / 2);
    left = square / (int)pow(10, (n_of_digits + 1) / 2);

    if (left + right == n)
        printf("%d is a Kaprekar number\n", n);
    else
        printf("%d is not a Kaprekar number\n", n);

    return 0;
}