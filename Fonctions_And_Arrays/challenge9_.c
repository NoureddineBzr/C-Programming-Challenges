#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char * Reserver(int n)
{
     char *p;
     p=(char *)malloc(n*sizeof(char));
     return p;
}
int main()
{
    char *s;
    int n;
    printf("Entrez une taille maximale pour la chaine: ");
    scanf("%d",&n);
    getchar();
    s=Reserver(n);
    printf("Entrer une chaine de caracteres:\n");
    gets(s);
    printf("La chaine de caracteres entree est: ");
    puts(s);
    free(s);
    return 0;
}
