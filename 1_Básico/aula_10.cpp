#include <iostream>

using namespace std;

// Aula 10: Comando Switch.

void chamarCalculadora(void){
     int num1, num2;
     float resultado;
     char operacao;
     cout << "-------------------------------------------------------------------------" << endl;
     cout << "\n\t\tPrograma Calculadora" << endl;
     cout << "\n\tInsira o primeiro valor: ";
     cin >> num1;
     cout << "\n\tInsira o segundo valor: ";
     cin >> num2;
     cout << "\n\tOperação: ";
     cin >> operacao;
     switch(operacao){
        case '+':
          resultado = num1 + num2;
          cout << "\n\t" << num1 << " + " << num2 << " = " << resultado << endl;
          break;
        case '-':
          resultado = num1 - num2;
          cout << "\n\t" << num1 << " - " << num2 << " = " << resultado << endl;
          break;
        case '*':
          resultado = num1 * num2;
          cout << "\n\t" << num1 << " * " << num2 << " = " << resultado << endl;
          break;
        case '/':
          if(num2 != 0){
             resultado = (float)num1 / num2;  // OBS: Ao usar o operador de conversão explícita, a variável resultado vai receber um valor float.
             cout << "\n\t" << num1 << " / " << num2 << " = " << resultado << endl;
          }else{
             cout << "\n\tO denominador da divisão não pode ser zero." << endl;
          }
          break;
        default:
          cout << "\n\tOperação não disponível." << endl;
     }
     cout << "-------------------------------------------------------------------------" << endl
     << "\n\t\tFim do Programa\n" << "-------------------------------------------------------------------------"
     << endl;
}

int main(void){
    int numero = 10;
    char op = 'Q';
    switch(numero){
        case 9:
          cout << "\n\tNúmero 9 \n";
          break;  // OBS: Se não colocar o break, vai "entrar nos cases abaixo".
        case 10:
          cout << "\n\tNúmero 10 \n";
          break;
        default: // OBS: default é opcional.
          cout << "\n\tNúmero não identificado." << endl;
    }
    switch(op){
        case 'Q':
          cout << "\n\tVocê saiu do sistema." << endl;
          break;
        case 'q':
          cout << "\n\tVocê saiu do sistema." << endl;
          break;
        default:
          cout << "\n\tComando Inexistente." << endl;
    }
    chamarCalculadora(); // Chamando o método chamarCalculadora.
    return 0;
}