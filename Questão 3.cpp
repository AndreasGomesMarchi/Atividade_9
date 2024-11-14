#include <stdio.h>

void troca (int *ptr1, int *ptr2){
	int aux;
	
	aux = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = aux;
	
	printf("\n\nDepois:\n");
	printf("O primeiro valor agora vale: %d\n", *ptr1);
	printf("O segundo valor agora vale: %d", *ptr2);	
}

int main(){
	int a, b;
	int *ptr1 = &a;
	int *ptr2 = &b;
	
	printf("Coloque o primeiro valor: ");
	scanf("%d", &a);
	
	printf("Coloque o segundo valor: ");
	scanf("%d", &b);
	
	printf("\nAntes:\n");
	printf("O primeiro valor vale: %d\n", *ptr1);
	printf("O segundo valor vale: %d", *ptr2);
	
	troca(ptr1, ptr2);
}
