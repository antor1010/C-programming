#include <stdio.h>
#include <math.h>

int main() {
    float radius;
    double pi, volume;
    // Write your code here
    pi=3.14159;
    radius=1.5;
    volume=(4.0/3.0)*pi*radius*radius*radius;
    printf("The volume of a sphere with radius %.2f is %.2lf cubic units",radius,volume);
    
    return 0;
}
