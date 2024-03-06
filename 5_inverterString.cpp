/*
5) Escreva um programa que inverta os caracteres de um string.
IMPORTANTE:
a) Essa string pode ser informada através de qualquer entrada de sua preferência ou pode ser 
previamente definida no código;
b) Evite usar funções prontas, como, por exemplo, reverse;
*/
#include<iostream>
#include<string>

using namespace std;

int main(){

string a;
cout<<"Digite uma frase e veja ela invertida: ";
getline(cin,a);

for (int i = a.length()-1;i>=0;i-- ){ //o loop percorre a string inteira e imprime ela de tras pra frente.     
    cout<<a[i];                       //o loop começa do final e itera ate o primeiro caractere.
}

    return 0;
}