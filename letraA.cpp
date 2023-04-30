//Gabriel Agostinho da Silva
//Atividade 1 letra A
//05/03

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	system("color 0b");

	FILE *fp;
	char palavra[]=" ", text[250];
	int cont;


	printf("Digite a palavra a ser procurada no txt: \n");
	gets(palavra);

	fp = fopen("FaroesteCaboclo.txt", "r");

	if (fp == NULL) { //caso arquivo nao seja encontrado , 
		printf("Arquivo nao encontrado");
		system("exit");
	}


   						   
	while ((fgets(text,250,fp))!= 0){ // passando o texto para uma string //td que estiver em fp, sera atribuido a text
		if (strstr(text,palavra) != 0) { //substring de uma string -> devolve um ponteiro nulo se nao for encontrado coincidencias
			cont++;
		}
	}

	fclose(fp);
	fflush(stdin);
	printf("O numero de vezes que a palavra foi encontrada eh: %d", cont);
}


