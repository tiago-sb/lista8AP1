/**
Escreva uma fun��o teste na qual sejam declaradas duas vari�veis. A primeira, contador, deve
ser est�tica; e a segunda, nova, deve ser autom�tica. Ambas devem ser inicializadas com 0. A
vari�vel contador deve registrar o n�mero de vezes que a fun��o � chamada. Isto �, cada vez
que a fun��o entra em execu��o, a vari�vel deve ser incrementada (+1). Por outro lado, cada vez
que a fun��o � executada, nova deve ser incrementada de 5. Antes de retornar para main,
imprima ambas as vari�veis.
Escreva um programa em C++ que chame a fun��o teste dentro de um la�o que s� termina
quando o usu�rio digitar o valor -1.
Escreva um arquivo de cabe�alho com o prot�tipo da fun��o teste e inclua-o no seu programa
principal.
*/

#include <iostream>

using namespace std;

int teste();
int main(){
    int v;

    do {
        cout << "Insira um valor: ";
        cin >> v;
        teste();
    } while(v != -1);

    return 0;
}
int teste(){
    static int contador = 0;
    int nova = 0;
    contador++;
    nova += 5;
    cout << "contador: " << contador << endl;
    cout << "nova: " << nova << endl;
}
