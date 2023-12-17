#include <stdio.h>
#include <math.h>

// Define a structure to store the real and imaginary parts of a complex number
typedef struct {
    float a;
    float b;
} complex;

int main() {
    complex Z1, Z2; // Declare variables of type complex to store two input complex numbers
    printf("Enter the real part of Z1: ");
    scanf("%f", &Z1.a); // Read the real part of Z1 from the user
    printf("Enter the imaginary part of Z1: ");
    scanf("%f", &Z1.b); // Read the imaginary part of Z1 from the user

    printf("Enter the real part of Z2: ");
    scanf("%f", &Z2.a); // Read the real part of Z2 from the user
    printf("Enter the imaginary part of Z2: ");
    scanf("%f", &Z2.b); // Read the imaginary part of Z2 from the user

    // Calculate the module of each input complex number using the formula sqrt(a^2 + b^2)
    float modZ1 = sqrt(Z1.a * Z1.a + Z1.b * Z1.b);
    float modZ2 = sqrt(Z2.a * Z2.a + Z2.b * Z2.b);

    // Calculate the sum of each input complex number by adding their real and imaginary parts separately
    //complex sumZ = {Z1.real + Z2.real, Z1.imag + Z2.imag};
    complex sumZ;
    sumZ.a = Z1.a + Z2.a;
    sumZ.b = Z1.b + Z2.b;
    // Calculate the conjugate of each input complex number by changing the sign of their imaginary parts
    //complex conjZ1 = {Z1.real, -Z1.imag}; complex conjZ2 = {Z2.real, -Z2.imag};
    complex conjZ1, conjZ2;
    conjZ1.a = Z1.a;
    conjZ1.b = -Z1.b;
    conjZ2.a = Z2.a;
    conjZ2.b = -Z2.b;
    // Display each output complex number in its standard form with appropriate signs
    char c1, c2, c3, c4, c5;
    if (Z1.b>0) {c1 = '+'; c4 = '-';} else {c1 = '-'; c4 = '+';}
    if (Z2.b>0) {c2 = '+'; c5 = '-';} else {c2 = '-'; c5 = '+';}
    if (sumZ.b>0) c3 = '+'; else c3 = '-';
    printf("The module of %.2f %c %.2fi is %.2f\n", Z1.a, c1, Z1.b, modZ1);
    printf("The module of %.2f %c %.2fi is %.2f\n", Z2.a, c2, Z2.b, modZ2);
    printf("The sum of %.2f %c %.2fi and %.2f %c %.2fi is %.2f %c %.2fi\n", Z1.a, c1, Z1.b, Z2.a, c2, Z2.b, sumZ.a, c3, sumZ.b);
    printf("The conjugate of %.2f %c %.2fi is %.2f %c %.2fi\n", Z1.a, c1, Z1.b, conjZ1.a, c4, abs(conjZ1.b));
    printf("The conjugate of %.2f %c %.2fi is %.2f %c %.2fi\n", Z2.a, c2, Z2.b, conjZ2.a, c5, abs(conjZ2.b));

    return 0;
}
