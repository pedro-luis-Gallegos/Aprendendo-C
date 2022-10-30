#include <stdio.h>
int main(){
	int limit = 6;//have to be the same size as the number that we gonna find the factorial
	int n1 = 6;
	for (int c=1;c<limit;c++){
		//printf("%d\n",n1);
		n1 = n1*c;
	}
	printf("%d",n1);
	return 0;
	}