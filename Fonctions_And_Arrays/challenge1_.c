#include <stdio.h>
int estimpair(int nbr){
	return (nbr%2 != 0);
}

int main(){
	int N;
	printf("Entrer un entier: ");
	scanf("%d",&N);
	if (estimpair(N)){
		printf("True!");
	}
	else{
		printf("False!");
	}
	
}
