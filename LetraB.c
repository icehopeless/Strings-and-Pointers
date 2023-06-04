//Gabriel Agostinho da Silva
//Atividade 1 letra B
//05/03

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	system("color 0b");

	FILE *fp;
	FILE *result;
	char palavrasubs[] = " ", text[250], palavranova[] = " ";
	


	printf("Digite a palavra a ser substituida no txt: \n");
	gets(palavrasubs);

	printf("Digite a nova palavra: \n");
	gets(palavranova);

	fp = fopen("FaroesteCaboclo.txt", "r"); //abre o arquivo em modo de leitura

	//caso o arquivo nao seja criado: 
	if (fp == NULL) {
		printf("Arquivo nao encontrado!!!");
		system("pause");
		system("exit");
	}

	result = fopen("result.txt", "w"); //abre o arquivo em modo de escrita

	//caso o arquivo nao seja criado: 
	if (result == NULL) {
		printf("Novo Arquivo nao foi criado!!!");
		system("pause");
		system("exit");
	}


	while ((fgets(text, 250, fp)) != 0) { // passando o texto para uma string //tds strings que estiver em fp, sera  atribuido a text
		if (strstr(text, palavrasubs)) { //strstr = substring de uma string -> devolve um ponteiro nulo se nao for encontrado coincidencias
			strncpy((strstr(text, palavrasubs)), palavranova, strlen(palavranova));//a substring retornada sera substituida pela palavra nova
		}
		fputs(text, result); //coloca a string text no arquivo result
	}
	

	fclose(fp);
	fclose(result);
	fflush(stdin);
	printf("O resultado foi salvo no arquivo result.txt");
}
