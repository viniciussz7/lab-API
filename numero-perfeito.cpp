#include <iostream>
using namespace std;

bool ePositivo (int);
int somaDivisores (int);
bool ePerfeito (int, int&);

int main() {
    int soma = 0;
    int numero;
    cout << "Digite um numero inteiro positivo: \n";
    cin >> numero;

    while (ePositivo(numero) == false) {
            cout << "Dado invalido. Digite um numero inteiro positivo: \n";
            cin >> numero;
    }
    
    if (ePositivo(numero) == true) {
        if (ePerfeito(numero, soma) == true) {
            cout << numero << " e perfeito!\n";
        } else {
            cout << numero << " nao e perfeito. A soma de seus divisores e igual a " << soma << endl;
        }
    }
}

bool ePositivo(int inteiro) {
    if (inteiro > 0) {
        return true;
    } else {
        return false;
    }
}

int somaDivisores(int i) {
    int somaDiv = 0;
    int cont = 1;
    while (cont < i) {
        if (i%cont == 0) {
            somaDiv = somaDiv + cont;
        }
        cont++;
    }
    return somaDiv;
}

bool ePerfeito (int inter, int& soma) {
    if (somaDivisores(inter) == inter) {
        return true;
    } else {
        soma = somaDivisores(inter);
        return false;
    }
}