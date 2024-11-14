#include <stdio.h>
#include <stdlib.h>


int main(){
	int var1, var2;
	
	printf("Variavel 1: %d\n", &var1);
	printf("Variavel 2: %d\n\n", &var2);
	
	if(&var1 > &var2){
		printf("A variavel %d e maior", &var1);
	}else{
		printf("A variavel %d e maior", &var2);
	}
	
	
	return 0;
}
