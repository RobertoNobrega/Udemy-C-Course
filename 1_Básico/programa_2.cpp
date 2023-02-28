#include <iostream>
/*
    C++ tem namespace (espaço de nome), que expressa um agrupamento lógico (contexto), servindo para evitar conflito(s) de nome(s). Como
    define um escopo, um identificador fora de um namespace, deve ter o nome do namespace em sua frente.
*/
int main(){
    std::cout << "\t\t Hello World 2!" << std::endl; // Aqui, vai imprimir uma mensagem na tela. cout e endl são os identificadores e o std é
    // o namespace.
    std::cout << "\t\t\tEnd\n";
    return 0;
}