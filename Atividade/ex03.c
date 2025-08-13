#include <stdio.h>


int main(){
    
    int n1;
    int n2;
    int n3;

    int p1;
    int p2;
    int p3;

    printf("Digite o valor da nota 1 do primeiro aluno \n");
    scanf("%d", &n1);

    printf("Digite o valor da nota 2 do primeiro aluno \n");
    scanf("%d", &n2);

    printf("Digite o valor da nota 3 do primeiro aluno \n");
    scanf("%d", &n3);


    printf("Digite o valor da nota 1 do segundo aluno\n");
    scanf("%d", &p1);

    printf("Digite o valor da nota 2 do segundo aluno\n");
    scanf("%d", &p2);

    printf("Digite o valor da nota 3 do segundo aluno \n");
    scanf("%d", &p3);


    int mediaN = (n1+n2+n3)/3;
    int mediaP = (p1+p2+p3)/3;


}