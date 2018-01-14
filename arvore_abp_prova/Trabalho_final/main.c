// gcc -Wall -Wextra -g main.c  -o exe
//  Universidade de Brasília - UnB
//  Faculdade de Engenharias do Gama - FGA
//  Estruturas de Dados e Algoritmos - EDA
//  Exercício Prático de Listas Encadeadas
//
//  PROBLEMA:
//
//  main.c
//
//  Created by Nilton Correia da Silva on 01/05/17.
//  Copyright © 2017 Nilton Correia da Silva. All rights reserved.
//
//  Aluno: JOÃO HENRIQUE PEREIRA DE ALMEIDA
//  Matrícula: 150132042
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct folha{
        char titulo[50];
        int line;
        struct folha* esquerda;
        struct folha* direita;
};

typedef struct folha Folha;

struct video {
        char codigo[50];
        char titulo[50];
        char midia[50];
        char preco[50];
        char genero[50];
        int   line;
};
typedef struct video Video;

//Função para inserir na estrutura de arvore ABP
Folha* inserir(Folha* raiz, Video* video);
//Função para listar todos elementos da arvore em ordem
void listarFilmes(Folha* raiz, char* url);
//Função de buscar um nó na arvore passando o arquivo que deve ser lido
void buscar(Folha* raiz, char* url, char* titulo);
//Função para buscar um registro na arvore ABP
Folha* buscarArvore(Folha* raiz, char* titulo);
//Função para ler informação do filme a partir da linha
Video* lerInformacao(char* url,int line);
//Função para exibir informações sobre o filme
void exibirInfo(Video* video);
//Função para contar o total de nós em uma arvore ABP
int contarNos(Folha* raiz);
//Função para buscar o maior elemento da arvore ABP
Folha* maiorElemento(Folha* raiz);
//Função para buscar o menor elemento da arvore ABP
Folha* menorElemento(Folha* raiz);
//Função para criar uma Arvore ABP a partir do arquivo
Folha* criarArvore(Folha* raiz, char* url);
//Função para desalocar a memória das esturutras utilizadas
void limparMemoria(Folha* arvore, Folha* tamanho, Video* video);


int main(){
        int opcao,total;
        char url[100];
        char busca[100];
        Folha* arvore = NULL;
        Folha* tamanho = (Folha *)malloc(sizeof(Folha));
        Video* video = (Video *)malloc(sizeof(Video));

        do{

            printf("\n\n\t\t\t---------- Registro de filmes ---------- \n");
            printf("\n\t1. Ler arquivo com as informações ");
            printf("\n\t2. Listar todos os titulo");
            printf("\n\t3. Buscar registro");
            printf("\n\t4. Contar os registros");
            printf("\n\t5. Nó com menor valor código");
            printf("\n\t6. Nó com maior valor código");
            printf("\n\t0. Sair");
            printf("\n\nDigite sua opcao: ");
            scanf("%d", &opcao);

            switch(opcao)
            {
                    case 1:
                            printf("\nInforme o arquivo: ");
                            scanf("%s",url);
                            arvore = criarArvore(arvore,url);
                            break;
                    case 2:
                            if (arvore == NULL) {
                              printf("\t\t------------------------------\n");
                              printf("\t\tCatalogo vazio\n");
                              printf("\t\t------------------------------\n");
                            }else{
                              listarFilmes(arvore,url);
                            }
                            break;
                    case 3:
                            if (arvore == NULL) {
                              printf("\t\t------------------------------\n");
                              printf("\t\tCatalogo vazio\n");
                              printf("\t\t------------------------------\n");
                            }else{
                              printf("Informe a busca: ");
                              scanf("%s",busca);
                              buscar(arvore,url,busca);
                            }
                            break;
                    case 4:
                            if (arvore == NULL) {
                              printf("\t\t------------------------------\n");
                              printf("\t\tCatalogo vazio\n");
                              printf("\t\t------------------------------\n");
                            }else{
                              printf("\nContar total de nós \n");
                              total = contarNos(arvore);
                              printf("%d\n", total);
                            }
                            break;
                    case 5:
                            if (arvore == NULL) {
                              printf("\t\t------------------------------\n");
                              printf("\t\tCatalogo vazio\n");
                              printf("\t\t------------------------------\n");
                            }else{
                              printf("\nMenor Elemento \n");
                              tamanho = menorElemento(arvore);
                              buscar(arvore,url,tamanho->titulo);
                            }
                            break;
                    case 6:
                            if (arvore == NULL) {
                              printf("\t\t------------------------------\n");
                              printf("\t\tCatalogo vazio\n");
                              printf("\t\t------------------------------\n");
                            }else{
                              printf("\nMaior Elemento \n");
                              tamanho = maiorElemento(arvore);
                              buscar(arvore,url,tamanho->titulo);
                            }
                            break;
                    case 0:
                            limparMemoria(arvore, tamanho, video);
                            exit (0);
                    default:
                            printf("Opcao invalida! Digite novamente.");
            }

        }while (opcao != 0);
        return 0;
}

//Função para inserir na estrutura de arvore ABP
Folha* inserir(Folha* raiz, Video* video){

  if (raiz == NULL) {
      raiz = (Folha *) malloc(sizeof(Folha));
      raiz->esquerda = NULL;
      raiz->direita = NULL;
      raiz->line = video->line;
      strcpy(raiz->titulo,video->titulo);
    }
  else if ( strcmp(video->codigo,raiz->titulo) < 0){// Se o dado a ser inserido for menor que o nó atual, recursividade à esquerda
        raiz->esquerda = inserir(raiz->esquerda,video);
    }
    else if (strcmp(video->codigo,raiz->titulo) > 0){ // Se o dado a ser inserido for menor que o nó atual, recursividade à direita
        raiz->direita = inserir(raiz->direita, video);
      }
   return raiz;
}


//Função para listar todos elementos da arvore em ordem
void listarFilmes(Folha* raiz, char* url){


  if(raiz == NULL){
      return;
    }
      buscar(raiz,url,raiz->titulo);
      listarFilmes(raiz->esquerda,url);
      listarFilmes(raiz->direita,url);
}



//Função de buscar um nó na arvore passando o arquivo que deve ser lido
void buscar(Folha* arvore, char* url,char* titulo){

  Folha* aux = (Folha *) malloc(sizeof(Folha));
  aux = buscarArvore(arvore,titulo);

  if ( aux == NULL) {
    printf("\n\n\t\t------------------------------\n");
    printf("\t\tFilme não catalogado\n");
    printf("\t\t------------------------------\n\n\n\n");

  }
  else{
      Video* video = (Video *)malloc(sizeof(Video));
      video = lerInformacao(url,aux->line);
      exibirInfo(video);
  }
}

//Função para buscar um registro na arvore ABP
Folha* buscarArvore(Folha* arvore, char* titulo){

     Folha* achou;

     if (arvore == NULL){
       return NULL;
     }
     if (strcmp(arvore->titulo,titulo) == 0) return arvore;
         achou = buscarArvore(arvore->esquerda, titulo);
     if ( achou == NULL)
         achou = buscarArvore(arvore->direita, titulo);
     return achou;
}

//Função para ler informação do filme a partir da linha
Video* lerInformacao(char* url,int line){

    FILE* parq;

    int num=1;
    Video* video;
    video = (Video *)malloc(sizeof(Video));

    parq = fopen(url, "r");

    if(parq==NULL)
        printf("arquivo");
     else{

   		while( (fscanf(parq,"%s %s %s %s %s \n", video->codigo, video->titulo, video->midia, video->preco, video->genero))>0 ){

        if (num ==line) {
          return video;
        }
        num ++;
      }
    }
    return video;
    fclose(parq);
  }

//Função para exibir informações sobre o filme
void exibirInfo(Video* video){
    printf("Título: %s\n",video->titulo );
    printf("Código: %s\n",video->codigo );
    printf("Mídia; %s\n",video->midia );
    printf("Preço: %s\n",video->preco );
    printf("Gênero:%s\n",video->genero );
    printf("----------\n");
}



//Função para contar o total de nós em uma arvore ABP
int contarNos(Folha* raiz){
   if(raiz == NULL)
        return 0;
   else
        return 1 + contarNos(raiz->esquerda) + contarNos(raiz->direita);
}

//Função para buscar o maior elemento da arvore ABP
Folha* maiorElemento(Folha* raiz){// procura o nó com valor máximo
  if(raiz == NULL){
     return NULL;
  }else{
        if( raiz->direita == NULL){
            return raiz;
        }else{
            return maiorElemento(raiz->direita);
        }
      }
}
//Função para buscar o menor elemento da arvore ABP
Folha* menorElemento(Folha* raiz){// procura o nó com valor mínimo
    if(raiz == NULL){
       return NULL;
    }else{
          if( raiz->esquerda == NULL){
              return raiz;
          }else{
              return menorElemento(raiz->esquerda);
          }
    }
}

//Função para criar uma Arvore ABP a partir do arquivo
Folha* criarArvore(Folha* raiz, char* url)
{
    FILE* parq;
    int num=1;
    Video* video;
    video = (Video *)malloc(sizeof(Video));

    parq = fopen(url, "r");

    if(parq==NULL)
        printf("arquivo");
     else
   		while( (fscanf(parq,"%s %s %s %s %s \n", video->codigo, video->titulo, video->midia, video->preco, video->genero))>0 ){

        if (num > 1) {
          video->line = num;
          raiz =  inserir(raiz,video);
        }
        num ++;
      }
    fclose(parq);
    return raiz;
  }


//Função para desalocar a memória das esturutras utilizadas
void limparMemoria(Folha* arvore, Folha* tamanho, Video* video){

      free(arvore);
      free(tamanho);
      free(video);
      printf("\n\n\t\t------------------------------\n");
      printf("\t\tMemória Limpa com Sucesso\n");
      printf("\t\t------------------------------\n\n\n\n");
  }
