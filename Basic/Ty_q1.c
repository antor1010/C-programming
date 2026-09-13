#include <stdio.h>

int main() {
    int smallNumber=42;
    float mediumNumber=123.456;
    double largeNumber;
    largeNumber=(float) smallNumber;
    printf("Small to large: %.1f\n",largeNumber);
    largeNumber=(float) mediumNumber;
    printf("Medium to large: %.1f\n",largeNumber);
    return 0;
}
