// Essa string pode ser informada atrav�s de qualquer entrada de sua prefer�ncia ou pode ser previamente definida no c�digo;
// Evite usar fun��es prontas, como, por exemplo, reverse;

#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;
int main()
{
    char frase[100];
    int i;

    cout << "Informe a string para ser invertida:"<<endl;
    gets(frase);
    for ( i = strlen(frase); i>=0; i-- ){
        cout << frase[i];
    }
}
