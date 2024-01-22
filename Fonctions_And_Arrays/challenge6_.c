#include <stdio.h>

void Afficher_carre(int tab[], int n){
	int i;
	for (i=0;i<n;i++){
		printf(" %d x %d = %d\n", tab[i],tab[i],tab[i]*tab[i]);
	}	
	
}

void carre(int N){
	printf("%d x %d = %d \n",N,N,N*N);

}
int main(){
	int T[100],i,N;
	printf("Donner la taille du tableau: ");
	scanf("%d",&N);
	printf("Remplir les cases de tableau:\n ");
	for(i=0;i<N;i++){
		printf("Donner T[%d] = ",i+1);
		scanf("%d",&T[i]);
	}
	printf("En utlisant la fonction affiche_carre: \n");
	Afficher_carre(T,N);
	printf("En utlisant la fonction affiche: \n");
	for(i=0;i<N;i++){
		carre(T[i]);
	}		
}
