/**
Escreva uma fun��o gabarito multiplos, com tipo de retorno void que recebe tr�s par�metros:
soma, x, e n. Os dois primeiros par�metros devem ter o mesmo tipo, o qual ser� definido na
chamada da fun��o (um coringa). O terceiro par�metro ser� sempre inteiro. soma � passado por
refer�ncia e os demais argumentos, por valor. Essa fun��o ir� computar:

soma = 1 + x + 2x + 3x + � + nx
Escreva um programa que chame a fun��o passando para ela os seguintes argumentos. O
programa deve imprimir o valor de soma para cada caso.
Caso 1. x 1 = 2, n 1 = 10 (soma = 111)
Caso 2. x 2 = 3.5, n 2 = 15 (soma = 421)
*/

#include <iostream>
#include <locale>

using namespace std;

template <class t, class s>
t multiplos(t &soma, t x, s n){
    for(int i = 1; i <= n; i++){
        soma += x * i;
    }
}
void linha();
int main(){
    setlocale(LC_ALL,"portuguese");
    float soma = 1, x;
    int n;
    cout << "Insira um valor(real ou inteiro): ";
    cin >> x;
    cout << "Insira um valor(inteiro): ";
    cin >> n;
    multiplos(soma, x, n);
    linha();
    cout << "soma: " << soma << endl;
    linha();

    return 0;
}
void linha(){
    cout << "----------------------------------" << endl;
}
