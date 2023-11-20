#include <stdio.h>

//Start
//Declare three integer variables x, y, z and an additional temporary variable temp.
//Read values for x, y, z.
//Store the value of x in temp.
//Store the value of y in x.
//Store the value of z in y.
//Store the value of temp in z.
//Print the values of x, y, and z.
//End
#include <stdio.h>

int main() {
    int x, y, z, temp;
    printf("Enter the value of x: ");
    scanf("%d", &x);
    printf("Enter the value of y: ");
    scanf("%d", &y);
    printf("Enter the value of z: ");
    scanf("%d", &z);
    temp = x;
    x = y;
    y = z;
    z = temp;
    printf("After circular permutation, the values are:\n");
    printf("x: %d\n", x);
    printf("y: %d\n", y);
    printf("z: %d\n", z);
    return 0;
}
