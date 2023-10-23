#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]){

	int oper, opcao;
	float numero1, numero2, total;

	opcao=0;
	while(opcao==0){
		printf ("digite  o numero correspondente da operacao desejada:\n 1- adicao\n 2- subtracao\n 3- multiplicacao\n 4- divisao\n");
		scanf ("%d", &oper);
		printf ("digite um numero:\n");
		scanf ("%f", &numero1);
		printf ("digite outro numero:\n");
		scanf ("%f", &numero2);

		switch (oper){
			case 1:
				total = numero1 + numero2;
			break;

			case 2:
				total = numero1 - numero2;
			break;

			case 3:
				total = numero1 * numero2;
			break;

			case 4:
				total = numero1 / numero2;
			break;

}
		printf ("o resultado do seu calculo foi de: %.2f\n", total);
		printf ("escolha o numero 0 se quiser realizar outro calculo\n digite o numero 1 se quiser sair");
		scanf ("%d",&opcao);


}

return 0;

}

