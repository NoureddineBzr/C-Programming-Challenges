#include <stdio.h>
#include <stdlib.h>



int main() {
	int n=8;
	int resultat;
	int i;
	printf("Table de multiplication de: %d \n",n);
	for(i=1;i<=10;i++){
		resultat=i*n;
		printf("%d x %d = %d\n",n,i,resultat);
	}
	
	return 0;
}
