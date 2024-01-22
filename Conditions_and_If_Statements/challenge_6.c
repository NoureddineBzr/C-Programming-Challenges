#include <stdio.h>
int main(){
	int age;
	printf("Entrer l'age de l'enfant: ");
	scanf("%d",&age);
	if(age>=6 && age <=7) printf("pupille");
	else if (age >= 8 && age <= 9) printf("Pupille");
    else if (age >= 10 && age <= 11) printf("Minime");
    else if (age >= 12) printf("Cadet");
    else printf("Hors categorie\n");
	
	
	 
	
	return 0;
}
  
