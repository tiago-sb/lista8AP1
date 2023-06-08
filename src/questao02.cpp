/**
Altere a fun��o gerador da quest�o anterior de modo que ela receba por par�metros dois n�meros
inteiros positivos m e n e gere um n�mero no intervalo [m, n].
Do mesmo modo, altere o programa da quest�o anterior para que solicite ao usu�rio dois n�meros
inteiros positivos e mostre o n�mero gerado pela fun��o gerador ao receber esses n�meros.
Compile os arquivos criados acima em um �nico projeto.
*/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void linha();
int gerador(int, int);
int main(){
    int m, n;

    do {
        cout << "Insira o primerio valor..: ";
        cin >> m;
    } while(m < 0);

    do {
        cout << "Insira o segundo valor...: ";
        cin >> n;
    } while(n < 0);

    linha();
    cout << "resultado: " << gerador(m, n) << endl;
    linha();

    return 0;
}
void linha(){
    cout << "---------------------------" << endl;
}
int gerador(int nM, int nN){
	srand(time(0));
    if(nM > nN){
        return (rand() % (nM - nN + 1)) + nN;
    }
    else{
        return (rand() % (nN - nM + 1)) + nM;
    }
}
