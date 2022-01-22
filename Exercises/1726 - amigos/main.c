#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void uniao(char *conj_A, char *conj_B);
void intersecsao(char conj_A, char conj_B);
void diferenca(char conj_A, char conj_B);
char *tratamento(char *conj);


int main(){
    char conj_A[27] = {};
    char conj_B[27] = {};
    char troca[27] = {};

    printf("Entre com o conjunto A: ");
    fflush(stdin);
    fgets(conj_A, 27,stdin);
    strcpy(troca,tratamento(conj_A));
    conj_A = {};
    strcpy(conj_A, troca);
    printf(conj_A);

    fflush(stdin);
    printf("Entre com o conjunto B: ");
    fgets(conj_B, 27,stdin);
    strcpy(conj_B, tratamento(conj_B));
    printf(conj_B);

 //   uniao(conj_A,conj_B);

    return 0;
}

char *tratamento(char *conj){
    char novo_conj[27];
    for(int i=0; i<=27; i++){
        for(int j=0; j<=27; j++){
            if(conj[i]!=conj[j]){
                novo_conj[i] = conj[j];
                i++;
            }else if(conj[i] == conj[j]){
                novo_conj[i] = conj[i];
                i++;
            }
        }
    }
    return *novo_conj;
}

void uniao(char *conj_A, char *conj_B){
    char conj_unido[27] = {};
    strcat(conj_unido,conj_A);
    strcat(conj_unido,conj_B);
    tratamento(conj_unido);
    printf(conj_unido);
}
void intersecsao(char conj_A, char conj_B){

}
void diferenca(char conj_A, char conj_B){

}
