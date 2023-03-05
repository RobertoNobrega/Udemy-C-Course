#include <iostream> // Importanto biblioteca de entrada e saída de dados.

using namespace std; // Usando o std padrão, para "evitar conflito(s) de namespace".

/*
                Aula 5: Declarando Variáveis
        C++ é "Case Sensitive", ou seja, distingue letras maiúsculas das minúsculas.
            OBS: int idade, Idade; // São duas variáveis, com nomes diferentes.
        Para declarar variáveis, tem que iniciar com letra ou com o underline.
*/
int main(void){
    int idade; // Declarando uma variável, de tipo inteiro.
    // int idade2, idade3; // Declarando duas variáveis, numa mesma linha de código.
    idade = 20;
    float pi = 3.14;  // Armazena um valor racional ( ou real também ).
    // double pi = 3.14;  // Armazenamento, com maior precisão.
    cout << "\n\tIdade Fornecida: " << idade << endl;
    return 0;
}