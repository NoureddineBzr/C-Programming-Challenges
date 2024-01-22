#include <stdio.h>

int main() {
   int N;
   printf("Entrer un entier: ");
   scanf("%d",&N);
   if(N%2==0){
   	printf("%d est un nombre paire.\n",N);
   }else {
        printf("%d est un nombre impair.\n", N);
    }
   

    return 0;
}
