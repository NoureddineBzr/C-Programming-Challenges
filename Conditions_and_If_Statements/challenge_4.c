int main() {
	
  int a,b,somme,produit;
  
  printf("Entrer le premier nombre: ");
  scanf("%d",&a);
  
  printf("Entrer le deuxieme nombre: ");
  scanf("%d",&b);
  
  somme=a+b;
  produit=a*b;
  
  printf("La somme est : %d\n", somme);
  printf("Le produit est : %d\n", produit);
  
  if(somme > 0){
  	printf("La somme est positive.\n");
  }
  else if(somme<0){
  	 printf("La somme est négative.\n");
  }
  else{
  	printf("La somme est nulle.\n");
  }
  
  if (produit > 0) {
        printf("Le produit est positif.\n");
    } else if (produit < 0) {
        printf("Le produit est négatif.\n");
    } else {
        printf("Le produit est nul.\n");
    }
  

  
	

	return 0;
}
