#include <stdio.h>
int main(){
	int c;
	for(c=0;c<100;c++){
		if(c%3==0){
			if (c%5==0){
				printf("BuzzFizz\n");
			}
			else{
			printf("Buzz\n");}
			}
		else if (c%5==0){
			if (c%3==0){
				printf("BuzzFizz\n");
				}
			else{
			printf("Fizz\n");
			}
		}
		
		else{
			printf("%d\n",c);
		}
	}
	return 0;
	}