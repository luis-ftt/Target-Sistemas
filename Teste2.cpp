// Dado a sequência de Fibonacci, onde se inicia por 0 e 1 e o próximo valor sempre será a soma dos 2 valores anteriores (exemplo: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34...),
// escreva um programa na linguagem que desejar onde, informado um número, ele calcule a sequência de Fibonacci e retorne uma mensagem avisando se o número informado pertence ou não a sequência.

#include <iostream>
#include <locale.h>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int num=0,aux=1,x=1,soma;
    int i;

    cout << "Informe um número para saber se pertence a sequência de fibonacci: ";
    cin >> x;
    for (i = 1; aux < x; i++){
        soma = num + aux;
        num = aux;
        aux = soma;
        cout << aux << " ";
    }
    cout << endl;
    if(x == aux)
        cout << "Esse número pertence a sequência de fibonacci: ";
    else
        cout << "Não pertence a sequência de fibonacci:";

}
