#include <iostream>

/*
        Aula 7: Caracter do tipo char.
*/

using namespace std;

int main(void){
    /*
    int numero1 = 20;
    int numero2 = -numero1; // OBS: O sinal de menos aqui é um operador unário; ou seja, que requer apenas um operando.
    cout << numero2; // Irá imprimir o valor -20
    int numero3 = -10;
    int numero4 = -numero3;
    cout << numero4; // Vai imprimir o valor 10
    int numero5 = 2, numero6 = 7;
    cout << numero5++; // Aqui, vai imprimir o valor 2, pois o incremento (sufixal) irá acontecer depois do valor de
    // numero5 ser exibido em cout.
    cout << ++numero6; // Aqui, vai exibir o valor 8, pois o incremento (prefixal) ocorre primeiro, antes de ser exibido
    // na tela.
    int numero7 = 4;
    int numero8 = numero7++;
    cout << numero8; // Aqui, vai exibir o valor 4.
    int numero9 = 10;
    int numero10 = ++numero9;
    cout << numero10; // Vai exibir o valor 11.
    */
    char caracter = 'a'; // Para armazenar caracter, é preciso colocar entre apóstrofo.
    char caracter1 = 'a', caracter2 = 'b';
    int soma = caracter1 + caracter2; // Aqui, a operação de soma irá somar o valor ASCII de caracter1 com caracter2.
    char caracter3 = '\'';
    cout << caracter << "\n"; // Vai exibir a letra a.
    cout << (int)caracter << "\n"; // Vai exibir o valor da letra a, associado a codificação ASCII. Ou seja, 97 é o valor associado
    // ao caracter a.
    cout << soma << "\n";
    cout << caracter3 << "\n";
    return 0;
}