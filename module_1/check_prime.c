/**
 * @brief A program to check whether a natural number is prime or not
 *
 * @author Allen Shibu
 */

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            printf("%d is not prime\n", n);

            return 0;
        }
    }

    printf("%d is prime\n", n);

    return 0;
}