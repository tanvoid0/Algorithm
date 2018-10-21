#include <stdio.h>

int main(void)
{
    float a,b,c,d,e,med,fin;

    scanf("%f %f %f %f", &a, &b, &c, &d);

    med= ((a*2)+(b*3)+(c*4)+(d*1))/10;

    printf("Media: %.1f\n", med);
    if(med>=7)
        printf("Aluno aprovado.\n");
    else if(med<5)
        printf("Aluno reprovado.\n");
    else if(med>=5 && med<=6.9) {
        printf("Aluno em exame.\n");
        scanf("%f", &e);
        printf("Nota do exame: %.1f\n", e);

        fin = (med+e) / 2;
        if(fin>=5)
            printf("Aluno aprovado.\n");
        else if(fin<=4.9)
            printf("Aluno reprovado.\n");
        printf("Media final: %.1f\n", fin);
    }

    return 0;


}
