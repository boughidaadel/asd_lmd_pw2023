#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, discriminant, root1, root2;

    printf("Enter coefficients a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);

    discriminant = b*b - 4*a*c;

    if (discriminant > 0) // 2 5 1
    {
        root1 = (-b + sqrt(discriminant)) / (2*a);
        root2 = (-b - sqrt(discriminant)) / (2*a);
        printf("2 Roots different.\n");
        printf("Root 1 = %.2f\n", root1);
        printf("Root 2 = %.2f\n", root2);
    }
    else if (discriminant == 0) // 1 2 1
    {
        root1 = root2 = -b / (2*a);
        printf("Roots are the same.\n");
        printf("Root 1 = Root 2 = %.2f\n", root1);
    }
    else // 1 2 3
    {
        printf("No solution\n");
    }

    return 0;
}
