/*
    Calculadora
    Operações permitidas:
    + -> adição
    - -> subtração
    * -> multiplicação
    / -> divisão
*/

#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    float numero1, numero2, resultado;
    char op; // operação

    cout << "Digite o primeiro numero: " << endl;
    cin >> numero1;
    cout << "Digite o segundo numnero: " << endl;
    cin >> numero2;
    cout << "Digite a operacao: " << endl;
    cin >> op;

    switch(op)
    {
        case '+':
            resultado = numero1 + numero2;
            cout << "Soma: " << resultado << endl;
            break;
        case '-':
            resultado = numero1 - numero2;
            cout << "Subtracao: " << resultado << endl;
            break;
        case '*':
            resultado = numero1 * numero2;
            cout << "Multiplicacao: " << resultado << endl;
            break;
        case '/':
            if(numero2 != 0){
                resultado = numero1 / numero2;
                cout << "Divisao: " << resultado << endl;
            } else {
                cout << "Divisao por zero! " << endl;
            }
            break;
        default:
            cout << "Operacao inexistente. " << endl;
            break;
    }

    return 0;
}
