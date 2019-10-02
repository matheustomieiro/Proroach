#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

void printVector(char type, void *vet, int elem);

/*Definindo estruturas de abertura e fechamento*/
#define INICIO {
#define FIM }

/*Definindo tipos e valores*/
#define INTEIRO int
#define REAL double
#define CARACTER char
#define ENDERECO_DE &
#define COMO_PONTEIRO *
//Para palavras
#define PALAVRA char
#define DE [
#define ELEMENTOS ]
#define INICIO_CONJUNTO {
#define FINAL_CONJUNTO }

/*Definindo funcao main*/
#define INICIAR int
#define PROGRAMA_MI main(void){
#define FINALIZAR return
#define PROGRAMA_MF }
#define SEM_ERRO 0;
#define COM_ERRO 1;

/*Definindo estruturas de comparacao*/
#define SE if(
#define ENTAO ){
#define SENAO }else

/*Definindo estruturas de controle*/
#define ENQUANTO while(
#define PARA for(
#define FAZER ){

/*Definindo alocacao de tipos*/
#define ALOCAR malloc(
#define M_INTEIROS *sizeof(int))
#define M_REAIS *sizeof(float))
#define M_CARACTERES *sizeof(char))
#define M_PALAVRAS *sizeof(char*))

/*Definindo liberacao de alocacoes da memoria*/
#define LIBERAR free(
#define DA_MEMORIA )

/*Definindo operadores*/
#define RECEBE =
#define SOMADO +
#define SUBTRAIDO -
#define MULTIPLICADO *
#define DIVIDIDO /
#define ELEVADO **

#define AUTO_SOMA +=
#define AUTO_SUBTRAI -=


/*Definindo comparadores*/
#define IGUAL ==
#define MAIOR >
#define MENOR <
#define MENOR_IGUAL <=
#define MAIOR_IGUAL >=

/*Definindo funcoes de complexidade baixa*/
#define EXIBIR_VETOR printVector(
#define DE_INTEIROS 'i',
#define DE_REAIS 'r',
#define DE_CHARACTERES 'c',
#define DE_PONTEIROS 'p',
#define COM ,
#define ELEMENTOS_NA_TELA )
#define EXIBIR_LINHA printf("\n")

/*Definindo funcoes de complexidade media*/
#define EXIBIR_INTEIRO printf("%d\n",
#define EXIBIR_REAL printf("%lf\n",
#define EXIBIR_CARACTER printf("%c\n",
#define EXIBIR_PALAVRA printf("%s\n",
#define EXIBIR_PONTEIRO printf("%p\n",
#define NA_TELA )

/*Definindo chamada de funcoes de complexidade alta*/
//--


/*Funcoes utilizadas*/

void printVector(char type, void *vet, int elem){
    char mascara[6];
    if(type == 'i'){
        for(int i=0; i<elem; i++){
            printf("%d ",((int*)vet)[i]);
        }
        EXIBIR_LINHA;
    }
    else if(type == 'r'){
        for(int i=0; i<elem; i++){
            printf("%lf ",((double*)vet)[i]);
        }
        EXIBIR_LINHA;
    }
    else if(type == 'c'){
        for(int i=0; i<elem; i++){
            printf("%c ",((char*)vet)[i]);
        }
        EXIBIR_LINHA;
    }
    else if(type == 'p'){
        for(int i=0; i<elem; i++){
            printf("%p ",((int**)vet)[i]);
        }
        EXIBIR_LINHA;
    }

}