#include <stdio.h>
#include <stdlib.h>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int av1, av2, av3, avd, media;
	int qtd_aulas, qtd_faltas, porcento_faltas;
	 
	
	printf("Digite a nota AV1: ");
	scanf("%d", &av1);
	
	printf("Digite a nota AV2: ");
	scanf("%d", &av2);
	
	
	if (av1 < 4 || av2 < 4){
		printf("Digite a nota AV3: ");
		scanf("%d", &av3);
	}
	
	printf("Digite a nota AVD: ");
	scanf("%d", &avd);
	
	printf("Quantidade de aulas ministradas(16 ou 18): ");
	scanf("%d", &qtd_aulas);
	
	printf("Digite a quantidade de faltas: ");
	scanf("%d", &qtd_faltas);
	
	
	// calculando média
	if ((av3 > av1) && (av2 > av1)){
		media = (av3 + av2 + avd) / 3;
	}else{
		if ((av1 > av3) && (av2 > av3)){
			media = (av1 + av2 + avd) / 3;
		}else{
			media = (av3 + av1 + avd) / 3;
		}
	}
	
	if (media < 6){
		printf("ALUNO REPROVADO");
	}else{
		if (qtd_faltas <= (qtd_aulas / 4)){
				printf("ALUNO APROVADO");
			}else{
				printf("ALUNO REPROVADO");
			}
	}
			
	 
	return 0;
}

