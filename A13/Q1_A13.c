#include <stdio.h>

struct complex{
    int real;
    int img;
};

void main()
{
    struct complex num1, num2, result;
    printf("Enter real part of complex numbers: ");
    scanf("%d%d", &num1.real, &num2.real);
    printf("Enter imaginary part of complex numbers: ");
    scanf("%d%d", &num1.img, &num2.img);

    result.real= num1.real + num2.real;
    result.img= num1.img + num2.img;
    printf("\nSum of complex numbers: %d + i(%d)", result.real, result.img);

    result.real= num1.real - num2.real;
    result.img= num1.img - num2.img;
    printf("\nDifference of complex numbers: %d + i(%d)", result.real, result.img);

    result.real= (num1.real * num2.real) - (num1.img * num2.img);
    result.img= (num1.real * num2.img) + (num1.img * num2.real);
    printf("\nProduct of complex numbers: %d + i(%d)", result.real, result.img);
}