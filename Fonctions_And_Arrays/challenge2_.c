#include <stdio.h>
int Max_2(int a, int b){
	if (a>b){
		return a;
	}else{
		return b;
	}
}

int Max_4(int a,int b,int c,int d){
	if(Max_2(a,b) > Max_2(c,d)){
		return Max_2(a,b); 
		
	}
	else {
		return Max_2(c,d);
	}
}

int main(){
	int a,b,c,d;
	printf("Donner 4 valeur a,b,c et d: \n");
	scanf("%d %d %d %d",&a,&b,&c,&d );
	printf("Le max = %d",Max_4(a,b,c,d));
	
}
