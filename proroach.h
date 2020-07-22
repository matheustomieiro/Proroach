#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

/*Definindo estruturas de abertura e fechamento*/
#define INICIO {
#define FIM }

/*Definindo tipos e valores*/
#define INTEIRO int
#define REAL double
#define CARACTER char
#define VAZIO void
#define ENDERECO_DE &
#define COMO_PONTEIRO *
#define PONTEIRO *

//Para vetores
#define COMO_VETOR_DE [
#define PALAVRA char
#define DE [
#define LETRAS ]
#define ELEMENTOS ]
#define INICIO_CONJUNTO {
#define FIM_CONJUNTO }

/*Definindo simbolos diversos*/
#define E_TAMBEM ,
#define ALEM_DISSO ;
#define FIM_DE_COMANDO ;

/*Definindo funcao main*/
#define COMECAR int
#define PROGRAMA main(void)
#define FINALIZAR return
#define SEM_ERRO 0;
#define COM_ERRO 1;

/*Definindo estruturas de comparacao*/
#define SE if(
#define ENTAO ){
#define SENAO }else

/*Definindo estruturas de controle*/
#define ENQUANTO while(
#define PARA for(
#define COMECANDO_EM =
#define FAZER ){

/*Definindo acesso*/
#define NA_POSICAO [
#define DO_VETOR ]

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
#define INCREMENTANDO ++

/*Definindo comparadores*/
#define IGUAL_A ==
#define MAIOR_QUE >
#define MENOR_QUE <
#define MENOR_IGUAL_A <=
#define MAIOR_IGUAL_A >=

/*Definindo funcoes*/
#define FUNCAO
#define COM (
#define COMO_ARGUMENTOS )

VAZIO printVector COM CARACTER type E_TAMBEM VAZIO COMO_PONTEIRO vet E_TAMBEM INTEIRO elem COMO_ARGUMENTOS;

/*Definindo funcoes de complexidade baixa*/
#define EXIBIR_VETOR printVector(
#define DE_INTEIROS 'i',
#define DE_REAIS 'r',
#define DE_CHARACTERES 'c',
#define DE_PONTEIROS 'p',
#define ELEMENTOS_NA_TELA )
#define QUEBRA_DE_LINHA printf("\n")
#define CONTENDO ,

/*Definindo funcoes de complexidade media*/
#define EXIBIR_INTEIRO printf("%d ",
#define EXIBIR_REAL printf("%lf ",
#define EXIBIR_CARACTER printf("%c ",
#define EXIBIR_PALAVRA printf("%s ",
#define EXIBIR_PONTEIRO printf("%p ",
#define NA_TELA )

/*Definindo chamada de funcoes de complexidade alta*/
//--


/*Funcoes utilizadas*/

VAZIO FUNCAO printVector COM CARACTER type E_TAMBEM VAZIO COMO_PONTEIRO vet E_TAMBEM INTEIRO elem COMO_ARGUMENTOS INICIO
    CARACTER mascara COMO_VETOR_DE 6 ELEMENTOS FIM_DE_COMANDO
    SE type IGUAL_A 'i' ENTAO
       PARA INTEIRO i COMECANDO_EM 0 ALEM_DISSO i MENOR_QUE elem ALEM_DISSO i INCREMENTANDO FAZER
            EXIBIR_INTEIRO ((INTEIRO COMO_PONTEIRO)vet) NA_POSICAO i DO_VETOR NA_TELA FIM_DE_COMANDO
        FIM
        QUEBRA_DE_LINHA FIM_DE_COMANDO
        FINALIZAR FIM_DE_COMANDO
    FIM
    SE type IGUAL_A 'r' ENTAO
        PARA INTEIRO i COMECANDO_EM 0 ALEM_DISSO i MENOR_QUE elem ALEM_DISSO i INCREMENTANDO FAZER
           EXIBIR_REAL ((REAL COMO_PONTEIRO)vet) NA_POSICAO i DO_VETOR NA_TELA FIM_DE_COMANDO
        FIM
        QUEBRA_DE_LINHA FIM_DE_COMANDO   
        FINALIZAR FIM_DE_COMANDO
    FIM
    SE type IGUAL_A 'c' ENTAO
        PARA INTEIRO i COMECANDO_EM 0 ALEM_DISSO i MENOR_QUE elem ALEM_DISSO i INCREMENTANDO FAZER
            EXIBIR_CARACTER ((CARACTER COMO_PONTEIRO)vet) NA_POSICAO i DO_VETOR NA_TELA FIM_DE_COMANDO
        FIM
        QUEBRA_DE_LINHA FIM_DE_COMANDO
        FINALIZAR FIM_DE_COMANDO
    FIM
    SE type IGUAL_A 'p' ENTAO
        PARA INTEIRO i COMECANDO_EM 0 ALEM_DISSO i MENOR_QUE elem ALEM_DISSO i INCREMENTANDO FAZER
           EXIBIR_PONTEIRO ((INTEIRO COMO_PONTEIRO COMO_PONTEIRO)vet) NA_POSICAO i DO_VETOR NA_TELA FIM_DE_COMANDO
        FIM
        QUEBRA_DE_LINHA FIM_DE_COMANDO
        FINALIZAR FIM_DE_COMANDO
    FIM
FIM