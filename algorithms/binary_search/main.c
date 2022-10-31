#include <stdio.h>
int main(){
	
	int esq,dir,meio,numero_meio,x,contador=1;
	int list[10] = {1,2,3,4,5,6,7,8,9};
	int lenght = sizeof(list)/sizeof(list[0]);
	
/*o tamanho da array nn é definido apenas por sizeof(), sizeof é a soma de bits de todos os valores daquela array
um bom exemplo é uma lista de 10 numeros, tem 10 indexes de 0 á 9, e cada um deles é um integer que é um tipo que ocupa 4 bits, ou seja o sizeof dessa array
vai ser 40 e nn 10, porque ela ocupa 40 bits! por isso pra chegar no tamanho da array temos que pegar o espaço que ela ocupa e subtrair pelo espaço que o primeiro
valor dela ocupa, no caso dessa array list que são 10 indexes cada um ocupado por um integer que ocupa 4 bits o sizeof dela é 40 e logo pra saber o numero de 
indexes que ela tem devemos pegar todo espaço que ela ocupa (o sizeof(list)) e dividir pelo espaço que o primeiro valor dela ocupa (eu creio que não faz diferença
ser o primeiro ou último valor ja que todos o valores da lista são do mesmo tipo primitivo, mas eu nn tenho certeza!)*/
	
	printf("Insira o numero que voce quer encontrar aqui na array!");
	scanf("%d",&x);
	esq = 0;
	dir = lenght;
	
	while (esq<lenght){
		meio = (esq+dir)/2;
		numero_meio = list[meio];
		
		if(numero_meio == x){
			printf("%d (numero do meio) == %d (numero que voce escolheu ==> Finalmente acertei :D \n",numero_meio,x);
			return printf("\nO -%d- estava na posicao [%d] se comecarmos a contar o indexes por 1,\nagora se seguirmos a contagem comecando por 0 seria posicao [%d]\n\ne o numero de operacoes ate chegar no numero que voce pediu foi: [%d]",x,numero_meio,numero_meio-1,contador);
		}
		else if (numero_meio > x){
			dir = meio -1;
			printf("%d (numero do meio) > %d (numero que voce escolheu ==>)",numero_meio,x);
			printf("Opa numero maior! irei arrumar ... \n");
			contador ++;
		}
		else {
			esq = meio +1;
			printf("%d (numero do meio) < %d (numero que voce escolheu ==>)",numero_meio,x);
			printf("Opa numero menor! irei arrumar ... \n");
			contador ++;
		}
	}
	return printf("O numero nao estava na array!");
	return 0;
}