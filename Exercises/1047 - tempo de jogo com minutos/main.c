#include <stdio.h>

int main(){

    const int dia = 24;
    const int min = 60;
    int h_inicial = 0;
    int m_inicial = 0;
    int h_final = 0;
    int m_final = 0;
    int tempo_de_jogo[2];

    scanf("%d",&h_inicial);
    scanf("%d",&m_inicial);
    scanf("%d",&h_final);
    scanf("%d",&h_final);

    if(h_final < h_inicial){
        tempo_de_jogo[0][0] = dia - h_inicial + h_final;
    }else{
        tempo_de_jogo[0][0] = h_final - h_inicial;
    }

    if(m_final < m_inicial){
        tempo_de_jogo[1][0] = min - m_inicial + m_final;
    }else{
        tempo_de_jogo[1][0] = m_final - m_inicial;
    }

    printf("Tempo de jogo: %d horas %d minutos", tempo_de_jogo[0][0], tempo_de_jogo[1][0])

    return 0;
}
