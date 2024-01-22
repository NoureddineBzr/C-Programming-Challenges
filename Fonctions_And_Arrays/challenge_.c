#include <stdio.h>
void bonjour(char nom[]){
	printf("Bonjour %s",nom);
	
}
int main(){
	char name[20];
	printf("Entrer votre nom: ");
	scanf("%s",name);
	bonjour(name);
}
