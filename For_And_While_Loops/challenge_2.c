#include <stdio.h>
#include <stdio.h>
int main() {
    int lignes,i,j;

    printf("Entrer le nombre de lignes : ");
    scanf("%d", &lignes);

    for ( i = 0; i < lignes; i++) {
        for ( j = 0; j < lignes; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
