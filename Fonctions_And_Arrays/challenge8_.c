#include <stdio.h>
void Trier(int T[],int N){
	int i,j,tmp;
	for(i=0;i<N;i++){
		for(j=i+1;j<N;j++){
			if(T[i] >= T[j]){
				tmp=T[i];
				T[i]=T[j];
				T[j]=tmp;
				
			}
		}
	}
	printf("Les element de tableau en ordre croissant est: \n");
	for(i=0;i<N;i++){
		printf("T[%d] = %d\n", i,T[i]);
	}
	
	
	
}
int main(){
	int i,j,T[100],tmp,N;
	printf("Donner la taille de tableau:\n ");
	scanf("%d",&N);
	printf("Donner les element du tableau:\n ");
	for(i=0;i<N;i++){
		printf("T[%d] = ",i);
		scanf("%d",&T[i]);
	}
	Trier(T,N);
	
	
}
