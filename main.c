/*
ANÁLISE DE COMPLEXIDADE

Função pot():
Realiza exp multiplicações.
Logo:
T1(n) = n
Complexidade: o(n)


Função pot_eficiente():

Caso base:
T(0) = 0

Caso par:
T(n) = T(n/2) + 1

Caso ímpar:
T(n) = T(n-1) + 1


No pior caso, o algoritmo alterna entre ímpar -> par -> divisão por 2.

A cada duas operações, o valor de n é reduzido pela metade.

Logo:
T2(n) = log de dois(n)

Complexidade: o(log n)



Comparação:

n = 128
pot: 128 multiplicações
pot_eficiente: próximo7

n = 512
pot: 512
pot_eficiente: próximo9

n = 1024
pot: 1024
pot_eficiente: próximo10

n = 16384
pot: 16384
pot_eficiente: próximo14

Conclusão:
- pot() é linear: O(n)
- pot_eficiente() é logarítmica: O(log n)
- Muito mais eficiente para valores grandes
*/

#include <stdio.h>

long long pot(long long base, int exp) {
    long long resultado = 1;
    for (int i = 0; i < exp; i++)
        resultado *= base;
    return resultado;
}

long long pot_eficiente(long long base, int exp) {
    if (exp == 0)
        return 1;

    if (exp % 2 == 0) {
        long long metade = pot_eficiente(base, exp / 2);
        return metade * metade;
    } else {
        return base * pot_eficiente(base, exp - 1);
    }
}

int main() {
    long long base;
    int exp;
    scanf("%lld %d", &base, &exp);

    long long r1 = pot(base, exp);
    long long r2 = pot_eficiente(base, exp);

    printf("%lld\n%lld\n", r1, r2);
    return 0;
}
