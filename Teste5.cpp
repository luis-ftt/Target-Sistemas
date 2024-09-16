// Essa string pode ser informada através de qualquer entrada de sua preferência ou pode ser previamente definida no código;
// Evite usar funções prontas, como, por exemplo, reverse;

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
