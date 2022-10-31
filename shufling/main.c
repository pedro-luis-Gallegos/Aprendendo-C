#include <time.h>
#include <stdlib.h>
#include <stdio.h>
int main() {
	
	int c,wish_card,counter;
	c = 0;
	counter = 0;
	printf("Hey! Welcome to the shufling, which card do you want?");
	scanf("%d",&wish_card);
	while(wish_card != c){
		printf("%d Not this one :( \n",c);
		c = rand() % 13;
		counter++;
	}
	if(counter<3)
	{
	printf("%d Here is the card you choose! it took %d times shufling %d cards to find this one! I think it was fast ",c,counter,wish_card);
	}
	else if (counter>3 || counter <6){
		printf("Meh It didn't took too many time but it still kinda hard to find, I shufled %d times with %d cards, oops this your card %d",counter,wish_card,c);
	}
	else if(counter>6){
		printf("WoW that took eternity to find, heres you %d card, it took %d times shufling with %d cards until find this one :( ",c,counter,wish_card);
	}
	return 0;
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	