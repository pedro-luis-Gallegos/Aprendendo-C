#include <stdio.h>//so queria testar um pouco do que entendi sobre pointers em funções, aproveitei e coloquei um pouco do que vi em matematica recentemente
void probabilidade  ( float* espaco_amostral, float  * evento){
	float prob = (*evento / *espaco_amostral)*100 ;
	printf("A probabilidade em porcentagem desse evendo acontecer e: %0.f%%",prob);
}
int main(){
	float  lados_do_dado = 6;
	float  tamanho_do_evento = 1;
	probabilidade(&lados_do_dado,&tamanho_do_evento);
	return 0;
}