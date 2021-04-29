#include <iostream>
#include <locale.h>
#include <string>
using namespace std;

float soma (float,float);
float sub (float,float);
float mult (float,float);
float div (float,float);

int main(){
    float a, b, res;
    char op;
        
    cout << "Informe o primeiro valor: \n";
    cin >> a;
    cout << "Informe o segundo valor: \n";
    cin >> b;
    cout << "Agora, informe a operaçao que deseja executar: \n";
    cin >> op;
    
    switch (op)
        {
        case '+':
            cout << soma(a,b); 
            break;

        case '-':
            cout << sub(a,b);
            break;

        case '*':
            cout << mult(a,b);
            break;

        case '/':
            cout << div(a,b);
            break;
        
        default:
            cout << "Operaçao inválida. Digite +(somar), -(subtrair), *(multiplicar), /(dividir)";
            break;
        }
}

float soma (float a, float b) {
    return a+b;
}

float sub (float a, float b) {
    return a-b;
}

float mult (float a, float b) {
    return a*b;
}

float div (float a, float b) {
    return a/b;
}
