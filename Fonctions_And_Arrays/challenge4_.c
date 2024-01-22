#include <stdio.h>
int factoriel (int n ){
	int i,f=1;
	for(i=1;i<=n;i++){
		f*=i;
	}
	return f;
	
}

int main(){
	int Num;
	do {
		printf("Donner un entier positif: ");
	    scanf("%d",&Num);
	}while(Num<0);
	 
	printf("%d! = %d",Num,factoriel(Num));
	
	
	
	
}
