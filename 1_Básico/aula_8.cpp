#include <iostream>

// Aula 8 : Estrutura Condicional ( if )

using namespace std;

int main(void){
    int dinheiro = 20, dinheiro2 = 9, numero = 10;
    bool b1 = true, b2 = false, b = 10 > 20;  // OBS: b vai receber o valor 0 ( representando false ).
    bool b3 = 10 < 20; // b irá receber o valor 1 ( representando true ).
    bool b4 = true, b5 = false;
    if(dinheiro > 10){
        cout << "\n\tM1 : Irei ao cinema!" << endl;
    }
    if(dinheiro2 > 10){
        cout << "\n\tM2 : Irei ao cinema!" << endl;
    }else{
        cout << "\n\tM2 : Não irei ao cinema!" << endl;
    }
    if(numero == 10) // A1 . == representa igual.
        cout << "\n\tNúmero é igual a 10" << endl;
        cout << "\n\tEsta mensagem não faz parte do if de A1." << endl;
    if(numero >= 10)
        cout << "\n\tNúmero é maior ou igual a 10" << endl;
    // Abaixo, temos um if aninhado ( if dentro de um outro if ).
    if(numero > 5){
        if(numero <= 10){
            cout << "\n\tNúmero maior que 5 e menor ou igual a 10" << endl;
        }
    }
    if((numero % 2 == 0) && (numero < 20))  // && é uma conjunção ( AND ).
        cout << "\n\tNúmero é par e menor do que 20." << endl;
    if((numero % 2 == 0) || (numero < 20))  // || é uma disjunção inclusiva ( OR ).
        cout << "\n\tNúmero é par ou menor do que 20." << endl;
    if(!(numero % 2 == 0)) // ! é um operador de Negação ( NOT ).
        cout << "\n\tNúmero é ímpar." << endl;
    cout << b << endl;
    if(b3)
        cout << "\n\tVerdadeiro" << endl;
    if(b3 != 0) // != representa diferente de.
        cout << "\n\tVerdadeiro ( parte 2 )" << endl;
    if(b4)
        cout << "\n\tMensagem True" << endl;
    if(b5)
        cout << "\n\tMensagem True" << endl;
    else
        cout << "\n\tMensagem False" << endl;
    return 0;
}