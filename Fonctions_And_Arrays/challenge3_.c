	#include <stdio.h>
void Permuter (float *a, float *b){
	float n;
	n=*a;
	*a=*b;
	*b=n;
	
}
 int main(){
 	float x,y;
 	printf("Donner la valeur de x et y: \n");
 	scanf("%f%f",&x,&y);
 	printf("x=%f et y=%f\n",x,y);
 	Permuter(&x,&y);
 	printf("Apres la permutation: x=%f et y=%f\n",x,y);
 }

