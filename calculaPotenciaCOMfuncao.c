#include<stdio.h>

//cria barra preta
int BarraPreta(int i){
	
	//printa uma linha de blocos
	
	for(i = 0; i <= 30; i++){
		printf("\xDB");
	}//for
}//barrapreta

//multiplica a potencia
int Potencia(int i, int x, int n, int base, int resultado){
	for(i = 2; i <= n; i++){
		resultado = x * base;
		x = resultado;
	}//for
	printf("\n\nO resultado da potencia e  %d \n",resultado);
}
	
	
	


int main(){
//declara variavel global	
	int x = 0;
	int n = 0;
	int base = 0;
	int resultado = 0;
	int i, j;

//recebe os valores a calcular
	printf("\nVamos calcular a potencia entre dois inteiros:\n");
	printf("Digite o numero base a ser multiplicado:"); scanf("%d",&x);
	printf("\nAgora digite o expoente:"); scanf("%d",&n);
	printf("\n");
	
	base = x; //joga o valor para a variavel auxiliar
	
	BarraPreta(i);	
	printf("\n\nVoce pediu para calcular %d sobre %d \n\n", x, n);
	BarraPreta(i);
	
	Potencia( i, x,  n,  base,  resultado);


	
}//main
