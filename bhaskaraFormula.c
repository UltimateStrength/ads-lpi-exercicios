# include <stdio.h>
# include <math.h>
# include <unistd.h>

int main () {
    float a, b, c, resultx1, resultx2;
    int delta;

    printf("a = ");
    scanf("%f", &a);
    printf("b = ");
    scanf("%f", &b);
    printf("c = ");
    scanf("%f", &c);
    
    delta = ((b * b) - (4 * a * c));
    resultx1 = (-(b) + sqrt(delta)) / (2 * a);
    resultx2 = (-(b) - sqrt(delta)) / (2 * a);

    printf("S = {%f, %f}", resultx1, resultx2);
}
