/*
Fazer uma fun��o que retorna a raz�o entre dois n�meros. A fun��o deve retornar pelo comando
return o valor 1, se a opera��o foi poss�vel; e o valor 0, se a opera��o n�o foi poss�vel (divis�o
por zero, por exemplo). O resultado da divis�o deve ser retornado por um par�metro passado
por refer�ncia.
Escreva um programa que chame a fun��o.
*/

#include <iostream>
#include <locale>
#include <iomanip>

using namespace std;

void linha();
int divide(float &, float);
int main(){
    setlocale(LC_ALL,"portuguese");
    float m, n;
    linha();
    cout << "Insira o valor 1: ";
    cin >> m;
    cout << "Insira o valor 2: ";
    cin >> n;
    //resultados
    linha();
    cout << "Tipo de divis�o: \n[0] - Divis�o Imposs�vel\n[1] - Divis�o Poss�vel " << endl;
    linha();
    cout << "Tipo da divis�o: " << divide(m, n) << endl;
    cout << fixed << setprecision(2);
    if(n != 0){
        cout << "Resultado: " << m << endl;
    }
    else{
        cout << "Indertemina��o Matem�tica! " << endl;
    }
    linha();

    return 0;
}
void linha(){
    cout << "--------------------------------" << endl;
}
int divide(float &nM, float nN){
    if(nN == 0){
        return 0;
    }
    else{
        nM = nM / nN;
        return 1;
    }

}
