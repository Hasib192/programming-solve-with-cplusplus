#include <iostream>
#include<cstdio>
using namespace std;

int main() {

   double N1, N2, N3, N4, N5, AVG, b;
    scanf("%lf %lf %lf %lf", &N1, &N2, &N3, &N4);
    AVG=(N1*2+N2*3+N3*4+N4*1)/(2+3+4+1);
    printf("Media: %.1lf\n", AVG);
    if(AVG>=7.0)
    {
        printf("Aluno aprovado.\n");
    }
    else if(AVG>=5.0)
    {
        printf("Aluno em exame.\n");
        
        scanf("%lf", &N5);
        printf("Nota do exame: %.1f\n", N5);
        b=(N5+AVG)/2;
        if(b>5.0)
        {
            printf("Aluno aprovado.\n");
        }
        else
        {
            printf("Aluno reprovado.\n");
        }
        printf("Media final: %.1lf\n", b);

    }
    else
    {
        printf("Aluno reprovado.\n");
    }

    return 0;
}
