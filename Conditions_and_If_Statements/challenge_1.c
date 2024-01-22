#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,b,c;
	printf("Donner la valeur de a=  ");
	scanf("%d",&a);
	printf("Donner la valeur de b=  ");
	scanf("%d",&b);
	printf("Donner la valeur de c=  ");
	scanf("%d",&c);
	
	if(a>b && a>c){
		printf("Le plus grand nombre est: %d",a);
	}
	else if (b > a && b > c){
			printf("Le plus grand nombre est: %d",b);
	}
	else{
			printf("Le plus grand nombre est: %d",c);
	}
	return 0;
}
