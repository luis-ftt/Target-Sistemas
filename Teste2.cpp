// Dado a sequ�ncia de Fibonacci, onde se inicia por 0 e 1 e o pr�ximo valor sempre ser� a soma dos 2 valores anteriores (exemplo: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34...),
// escreva um programa na linguagem que desejar onde, informado um n�mero, ele calcule a sequ�ncia de Fibonacci e retorne uma mensagem avisando se o n�mero informado pertence ou n�o a sequ�ncia.

#include <iostream>
#include <locale.h>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int num=0,aux=1,x=1,soma;
    int i;

    cout << "Informe um n�mero para saber se pertence a sequ�ncia de fibonacci: ";
    cin >> x;
    for (i = 1; aux < x; i++){
        soma = num + aux;
        num = aux;
        aux = soma;
        cout << aux << " ";
    }
    cout << endl;
    if(x == aux)
        cout << "Esse n�mero pertence a sequ�ncia de fibonacci: ";
    else
        cout << "N�o pertence a sequ�ncia de fibonacci:";

}
