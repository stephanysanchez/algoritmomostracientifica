#include<stdio.h>

int main()
{
    int A,B,C,LADOMAIOR,LADO1,LADO2;
    printf("Digite o primeiro valor: \n");
    scanf("%d",&A);
    printf("Digite o segundo valor: \n");
    scanf("%d",&B);
    printf("Digite o terceiro valor: \n");
    scanf("%d",&C);

   if ((A>B)&&(A>C)){
        LADOMAIOR=A;
        LADO1=B;
        LADO2=C;
}
    else if (B>C){
            LADOMAIOR=B;
            LADO1=A;
            LADO2=C;
}
    else{
        LADOMAIOR=C;
        LADO1=A;
        LADO2=B;
}
    if (LADOMAIOR<LADO1+LADO2){
        printf("Os valores apresentados constituem em um triangulo. \n");
        //Classificação dos lados
        if ((LADOMAIOR==LADO1)&&(LADOMAIOR==LADO2))
        {
            printf("Seu triangulo e Equilatero.\n");
        }
        else if( (LADOMAIOR==LADO2) || (LADOMAIOR==LADO1) || (LADO1==LADO2) )
        {
            printf("Seu triangulo e Isosceles.\n");
        }
        else
        {
            printf("Seu triangulo e Escaleno.\n");
        }
}
    else{
        printf("Digite outros valores para poder transforma-lo em um triangulo.\n");
        }
        if ((LADOMAIOR * LADOMAIOR)<(LADO1 * LADO1)+(LADO2 * LADO2)){
                printf("O angulo do triangulo e Acutangulo.\n");
}
        if((LADOMAIOR * LADOMAIOR)==(LADO1 * LADO1)+(LADO2 * LADO2)){
                printf("O angulo do triangulo e Retangulo.\n");
}
        if ((LADOMAIOR * LADOMAIOR)>(LADO1 * LADO1)+(LADO2 * LADO2)){
                printf("O angulo do triangulo e Obtusangulo.\n");
}
}