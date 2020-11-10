#include <stdio.h>
#include <string.h>
#include "funcoesDeImpessao.h"
#include "funcoesArq.h"
#include "fornecido.h"
#include "funcoesBusca.h"
#include "insercaoAtualizacao.h"

int main() {
    int mode;
    scanf("%d",&mode);

    char arqPessoa[256];
    char arqIndexaPessoa[256];
    char arqvEntrada[256];
    char nomeCampo[256];
    char conteudo[256];
    int valor;

    switch(mode){
        case 1:
            scanf("%s %s %s",arqvEntrada,arqPessoa,arqIndexaPessoa);
            leArqBin(arqvEntrada,arqPessoa,arqIndexaPessoa);
            binarioNaTela1(arqPessoa, arqIndexaPessoa);
            break;
        case 2:
            scanf("%s",arqPessoa);
            imprimeArqBin(arqPessoa);
            break;
        case 3:
            scanf("%s %s %s",arqPessoa, arqIndexaPessoa,nomeCampo);
            if(strcmp(nomeCampo,"idPessoa")||strcmp(nomeCampo,"idadePessoa")){
                scanf("%d",&valor);
                buscaArquivo_int(arqPessoa,nomeCampo,nomeCampo,valor);
            }
            if(strcmp(nomeCampo,"nomePessoa")||strcmp(nomeCampo,"twitterPessoa")){
                scanf("%s",conteudo);
                buscaArquivo_String(arqPessoa,nomeCampo,conteudo);
            }
            break;
        case 4:
            pre_insere();
            break;
        case 5:
            break;
    }
    return 0;
}