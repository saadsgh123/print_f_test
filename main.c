#include "main.h"
int main() {
    int num1 = 42;
    int num2 = -123;
    int num3 = 0;
    int num4 = 2147483647;
    int num5 = -2147483648;
    int num6 = 7;
    int num7 = 42;

    // Test with your custom _printf
    printf("Custom _printf:\n");
    _printf("Positive Integer: %d\n", num1);
    _printf("Negative Integer: %d\n", num2);
    _printf("Zero: %d\n", num3);
    _printf("Large Integer: %d\n", num4);
    _printf("Smallest Integer: %d\n", num5);
    _printf("Mix of Format Specifiers: %d %i\n", num6, num7);
    _printf("Leading and Trailing Text: The answer is: %d, correct?\n", num1);
    _printf("Multiple Format Specifiers: %d %i %d\n", num1, num2, num3);
    _printf("Format Specifier with Width and Precision: %05d, %2i\n", num1, num2);
    _printf("Mix of Different Data Types: %d %i %d\n", num1, (short)num2, num3);
    _printf("No Integer Argument: %d\n");
    _printf("Mix with text: Number: %d\n", num1);

    // Test with standard printf for comparison
    printf("\nStandard printf:\n");
    printf("Positive Integer: %d\n", num1);
    printf("Negative Integer: %d\n", num2);
    printf("Zero: %d\n", num3);
    printf("Large Integer: %d\n", num4);
    printf("Smallest Integer: %d\n", num5);
    printf("Mix of Format Specifiers: %d %d\n", num6, num7);
    printf("Leading and Trailing Text: The answer is: %d, correct?\n", num1);
    printf("Multiple Format Specifiers: %d %d %d\n", num1, num2, num3);
    printf("Format Specifier with Width and Precision: %05d, %2d\n", num1, num2);
    printf("Mix of Different Data Types: %d %d %d\n", num1, (short)num2, num3);
    printf("Mix with text: Number: %d\n", num1);

    return 0;
}
