#include <iostream>
#include <iomanip> //para usar setw()
#include <cstdlib>
#include <ctime>

using namespace std;

char jogo();
int jogadaComputador();
void placar(char);

int main() {
    char again;
    srand(time(0));
    do {
        cout << "-------------------------------------- \n";
        placar(jogo());
        cout << "Mais uma rodada? (S/N) \n\n";
        cin >> again;
    } while ((again == 'S') || (again == 's'));
    cout << "==============FIM DO JOGO=================";
}

char jogo() {
    int jogadaJogador, jogadaDoComputador;
    
    do {
        cout << "Pedra-Papel-Tesoura? \n";
        cout << "1 para pedra \n";
        cout << "2 para papel \n";
        cout << "3 para tesoura \n";
        cin >> jogadaJogador;

        jogadaDoComputador = jogadaComputador();

        cout << "----------------------------------------" << endl;
        cout << "Sua jogada: " << jogadaJogador << endl;
        cout << "Jogada do computador: " << jogadaDoComputador << endl;
    } while (jogadaJogador == jogadaDoComputador);        
        
    if (((jogadaJogador == 1) && (jogadaDoComputador == 3)) || ((jogadaJogador == 2) && (jogadaDoComputador == 1)) || ((jogadaJogador == 3) && (jogadaDoComputador == 2))) {
        return 'j';
    } else {
        return 'c';
    }
}

int jogadaComputador() {
    return (1 + rand()%3);
}

void placar(char ganhador) {
    static int contJogador, contComputador;
    if (ganhador == 'j') {
        cout << "Vencedor da rodada: voce \n";
        contJogador = contJogador + 1;        
    } else {
        cout << "Vencedor da rodada: computador \n";
        contComputador = contComputador + 1;
    }

    cout << endl;
    cout << "================PLACAR================= \n";
    cout << "Voce: " << contJogador << "                   " << "Computador: " << contComputador << endl;
    cout << "======================================= \n\n";
}    
    