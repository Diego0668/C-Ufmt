#include <stdio.h>


int main(){

int fat = 1;
int n;

printf("Digite um numero para fazer o fatorial\n");
scanf("%d" , &n);


while( n != 0 ){
fat *= n--;

}
printf("o valor ficou %d" , fat);


}