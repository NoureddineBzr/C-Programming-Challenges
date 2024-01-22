#include <stdio.h>
int main(){
	int num;
	
	printf("Entrer le numero de mois: ");
	scanf("%d",&num);
	
	switch(num){
	case 1:
			printf("Janvier");
	case 2:
			printf("Febrier");
	case 3:
			printf("Mars");
	case 4:
			printf("Avrile");
	case 5:
            printf("Mai");
            break;
        case 6:
            printf("Juin");
            break;
        case 7:
            printf("Juillet");
            break;
        case 8:
            printf("Aout");
            break;
        case 9:
            printf("Septembre");
            break;
        case 10:
            printf("Octobre");
            break;
        case 11:
            printf("Novembre");
            break;
        case 12:
            printf("Decembre");
            break;
        default:
            printf("Numero de mois invalide");
    }	
	return 0;
}
