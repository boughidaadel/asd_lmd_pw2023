#include <stdio.h>
#include <math.h>

int main() {
    float Ax, Ay, Bx, By, Cx, Cy;
    float distAC, distCB, distAB;

    printf("Enter coordinates for point A (x y): ");
    scanf("%f,%f", &Ax, &Ay);

    printf("Enter coordinates for point B (x y): ");
    scanf("%f,%f", &Bx, &By);

    printf("Enter coordinates for point C (x y): ");
    scanf("%f,%f", &Cx, &Cy);

    distAC = sqrt(pow(Cx - Ax, 2) + pow(Cy - Ay, 2));
    distCB = sqrt(pow(Bx - Cx, 2) + pow(By - Cy, 2));
    distAB = sqrt(pow(Bx - Ax, 2) + pow(By - Ay, 2));

    float diff = distAC + distCB - distAB;
    //printf("Difference is %f \n", diff);
    if(diff == 0) {
        printf("Point C lies on the line segment AB\n");
    } else {
        printf("Point C does not lie on the line segment AB\n");
    }

    return 0;
}
