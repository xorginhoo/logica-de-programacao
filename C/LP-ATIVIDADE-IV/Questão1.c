#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct registros{
    char nome [200];
    char email [200];
    char tel[200];
};

void Pesquisa(struct registros contato[], char* buscaDesejada){
    int i;
    for (i = 0; i < 3; i++){
    if(strcmp(contato[i].nome, buscaDesejada) == 0){
        printf("\nTelefone de %s: %s", contato[i].nome, contato[i].tel);
    break;
    }
 }
}

int main(){

struct registros contatos[3];
int i;
char buscaDesejada[200];

printf("======LISTA DE CONTATOS======\n");
    for(i = 0; i < 3; i++){
        printf("CONTATO (%d)\n", i + 1);
        printf("Nome do contato: ");
        gets(contatos[i].nome);
        
        printf("Informe o email: ");
        gets(contatos[i].email);
        
        printf("Informe o numero do telefone: ");
        gets(contatos[i].tel);
        
        printf("\n");
        
        
    }
    printf("Digite o nome do contato que deseja buscar: ");
    gets(buscaDesejada);
    
    Pesquisa(contatos, buscaDesejada);
    
    return 0;
}
