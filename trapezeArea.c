    // bliblotecas

# include <stdio.h>
# include <math.h>
# include <unistd.h>

int main () {

        // varialves
    float majorBase, minorBase, heightVar, result;

        //codigo legau ai sla nn sei oq por aqui
    printf("Caba safado mim de a base maior de seu trapezio\n");
        scanf("%f", &majorBase);

    printf("Caba safado, agr mim de a base menor de seu trapezio\n");
        scanf("%f", &minorBase);

    printf("pra finalizar eu quero a altura de seu trapezio\n");
        scanf("%f", &heightVar);

    result = ((majorBase + minorBase) * heightVar)/2;

    printf("ta la a area do seu trapezio: %f", result);

}
