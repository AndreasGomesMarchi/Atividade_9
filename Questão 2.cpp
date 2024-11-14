#include <stdio.h>

void Soma (int *a, int *b){
	int soma;
	
	soma = *a + *b;
	
	printf("A soma dos numeros e %d", soma);
}

int main(){
	int a, b;
	int *ptr1 = &a;
	int *ptr2 = &b;
	
	printf("Coloque um numero inteiro: ");
	scanf("%d", &a);
	
	
	printf("Coloque o segundo numero: ");
	scanf("%d", &b);
	
	Soma(ptr1, ptr2);
	
	return 0;
}
