// calcule o percentual de representação que cada estado teve dentro do valor total mensal da distribuidora.
#include <iostream>
using namespace std;
int main()
{
    float SP = 6783643, RJ = 3667866;
    float MG = 2922988, ES = 2716548;
    float outros = 1984953,total;

    cout << "Percentual de cada estado correspondendo a distribuidora: " << endl;
    total= SP+MG+RJ+ES+outros;
    cout << "Sao Paulo " << (SP/total)*100 << "%" << endl;
    cout << "Minas Gerais " << (MG/total)*100 << "%" << endl;
    cout << "Espirito Santo "  << (ES/total)*100 << "%" << endl;
    cout << "Rio de janeiro " << (RJ/total)*100 << "%" << endl;
    cout << "Outros" << (outros/total)*100 << "%" << endl;

}
