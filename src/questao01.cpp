/**
Escreva uma fun��o gerador, que receba por par�metro um n�mero inteiro positivo n e gere um
n�mero inteiro positivo no intervalo [0, n] e retorne esse n�mero.
Fa�a um programa que solicite ao usu�rio um n�mero inteiro positivo e mostre o n�mero gerado
pela fun��o gerador ao receber o n�mero fornecido.
Compile os arquivos criados acima em um �nico projeto.
*/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void linha();
int gerador(int);
int main(){
    int n;

    do {
        cout << "Insira um valor positivo: ";
        cin >> n;
    } while(n < 0);

    linha();
    cout << "resposta: " << gerador(n) << endl;
    linha();

    return 0;
}
void linha(){
    cout << "------------------------------" << endl;
}
int gerador(int nN){
    srand(time(0));
    nN++;
    return rand() % nN;
}
