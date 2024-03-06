/*2) Dado a sequência de Fibonacci, onde se inicia por 0 e 1 e o próximo valor sempre será a soma dos 2 valores 
anteriores (exemplo: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34...), escreva um programa na linguagem que desejar onde, 
informado um número, ele calcule a sequência de Fibonacci e r
etorne uma mensagem avisando se o número informado pertence ou não a sequência.
*/
#include <iostream>

using namespace std;

bool pertenceFibonacci(int n) {
    int primeiroTermo = 0;          //primeiros termos da sequencia
    int segundoTermo = 1;

    if (n == 0 || n == 1) {
        return true;
    }

    int proximoTermo = primeiroTermo + segundoTermo;      //0...1  0+1=1  /  1...1  1+1=2  /  2...1  2+1=3
    while (proximoTermo < n) {
        primeiroTermo = segundoTermo;
        segundoTermo = proximoTermo;
        proximoTermo = primeiroTermo + segundoTermo;
    }

    return (proximoTermo == n);
}

int main() {
    int maximo;
    cout << "Quantos numeros a sequencia devera ter? ";
    cin >> maximo;

    int primeiroTermo = 0;
    int segundoTermo = 1;

    cout << primeiroTermo << "\t" << segundoTermo;

    int i = 2;          //começa no  terceiro termo = 1 , 0 1 1*    
    while (i < maximo) { 
        int proximoTermo = primeiroTermo + segundoTermo;        
        cout << "\t" << proximoTermo;
        i++;                                            
        primeiroTermo = segundoTermo;                     
        segundoTermo = proximoTermo;
    }

    int n;
    cout << "Digite um numero para verificar se ele pertence a sequencia de fibonacci: ";
    cin >> n;

    if (pertenceFibonacci(n)) {
        cout << n << " esta incluido na sequencia de fibonacci." << endl;
    } else {
        cout << n << " nao esta incluido na sequencia de fibonacci." << endl;
    }
    return 0;
}
