int main() {
	int N;
	int count=0;
	printf("Entrer un entier N= ");
	scanf("%d",&N);
	while(N != 0){
		N=N/10;
		count++;
		
	}
	
	printf("Le nombre de chiffres est: %d",count);
	

	return 0;
}
