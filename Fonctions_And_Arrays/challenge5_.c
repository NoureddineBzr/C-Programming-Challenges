#include <stdio.h>
int add(int a,int b){
	return a+b;
}
int sous(int a,int b){
	return a-b;
}

int mult(int a,int b){
	return a*b;
}

int main(){
	int x ,y;
	char op;
	printf("Doner le premier nombre: ");
	scanf("%d",&x);
	
	printf("Choisissez l'operation (+, -, x) : ");
    scanf(" %c", &op);
	
	printf("Doner le deuxime nombre: ");
	scanf("%d",&y);
	
	switch(op){
		case '+':
			printf("%d + %d = %d",x,y,add(x,y));
			break;
		case '-':
			printf("%d - %d = %d",x,y,sous(x,y));
			break;
		case 'x':
			printf("%d x %d = %d",x,y,mult(x,y));
			break;
		default:
			printf("Operateur invalide");
			break;
			
			
	}
	
}
