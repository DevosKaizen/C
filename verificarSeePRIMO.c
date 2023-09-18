#include<stdio.h>

int main(){
	
	int x = 0;
	
	//recebe os valores a calcular
	printf("\nDado um inteiro positivo n, verificar se n � primo.\n");
	printf("Digite o numero base a ser Verificado:"); scanf("%d",&x);
	printf("\n");
	
	int aux = x;
	
	if( x % 1 == 0 ){
		
		if( x % x == 0){
			printf("\n O numero %d e sim um numero primo.\n",x);
		}//if 2 primo
	}//if 1 primo
	else printf("\n O numero %d nao e um numero primo",x);
}
