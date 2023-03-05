#include <iostream>

/*
            Aula 6: Operadores
*/

using namespace std;

int main(){
    int n1, n2, resultado, resultado2, resultado3, resultado4;
    float resultado5, resultado6;
    n1 = 20;
    n2 = 10;
    resultado = n1 + n2;
    resultado2 = n1 - n2;
    resultado3 = n1 * n2;
    resultado4 = n1 / n2;
    resultado5 = n2 / n1;
    resultado6 = (float)n2 / n1;  // () é o operador de Conversão Explícita. Nesse caso, está informando que n2 será convertido para float.
    int r1 = 10, r2 = 30, r3 = r1 % 2;
    int r4 = 10 + 20 / 2;  // Aqui, a divisão será aplicada, para depois aplicar a soma e armazenar na variável r4.
    cout << "\n\tSoma: " << resultado << "\n\tSubtração: " << resultado2 << "\n\tMultiplicação: " << resultado3 << "\n\tDivisão: " << resultado4;
    cout << "\n\n\tDivisão 1: " << resultado5 << "\n\tDivisão 2: " << resultado6;
    r1++;
    ++r2;
    cout << "\n\n\tIncremento 1: " << r1 << "\n\tIncremento 2: " << r2;
    r1--;
    --r2;
    cout << "\n\n\tDecremento 1: " << r1 << "\n\tDecremento 2: " << r2;
    r1 += 1; // É o mesmo que r1 = r1 + 1;
    // r1 -= 1; 
    // r1 *= 1;
    // r1 /= 1;
    cout << "\n\tIncremento 1 novamente: " << r1;
    cout << "\n\tResto da Divisão de 10 por 2: " << r3;
    cout << "\n\tResultado de r4: " << r4;
    return 0;
}