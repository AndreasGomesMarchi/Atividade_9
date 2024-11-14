#include<stdio.h>

int main(){
	float *Matriz[3][3];
	
	for(int i = 0; i<3; i++){
		for(int j = 0; j<3; j++){
			printf("O endereco da Matriz[%d][%d] e %p\n\n", i, j, &Matriz[i][j]);
		}
		
	}
	
	return 0;
}
