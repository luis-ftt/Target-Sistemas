/* Dado um vetor que guarda o valor de faturamento diário de uma distribuidora, faça um programa, na linguagem que desejar, que calcule e retorne:
• O menor valor de faturamento ocorrido em um dia do mês;
• O maior valor de faturamento ocorrido em um dia do mês;
• Número de dias no mês em que o valor de faturamento diário foi superior à média mensal. */
#include <iostream>
using namespace std;
struct dados
{
    float valor_diario;
};


int main()
{
    int i;
    dados vetA[4];
    float menor_valor,maior_valor,media_mensal,fat_mensal=0;
    int dias=0;


    maior_valor=0;
    for (i = 0; i < 4 ; i++){
        cout << "Informe o faturamento do dia: ";
        cin >> vetA[i].valor_diario;
        fat_mensal+=vetA[i].valor_diario;
        if(i == 0){
            menor_valor=vetA[i].valor_diario;
        }
        if(vetA[i].valor_diario > maior_valor){
                maior_valor = vetA[i].valor_diario;
        }
        if(vetA[i].valor_diario < menor_valor){
                menor_valor = vetA[i].valor_diario;
        }
    }
        media_mensal=fat_mensal/4;
        for (i = 0; i < 4 ;i++){
            if(vetA[i].valor_diario > media_mensal)
                dias++;
        }

    cout << "Faturamento mensal : " << fat_mensal << endl;
    cout << "Menor faturamento" << menor_valor << endl;
    cout << "Maior faturamento" << maior_valor << endl;
    cout << "Vezes que o faturamento diario passou a media mensal: " << dias << "x";
}


