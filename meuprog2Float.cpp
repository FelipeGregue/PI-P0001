#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    float num1, num2;

    cout << "Digite um número inteiro: ";
    cin >> num1;
    cout << "Digite outro número inteiro: ";
    cin >> num2;

    setprecision(1);

    cout << "Soma = " << num1 + num2 << endl;
    cout << "Subtração = " << num1 - num2 << endl;
    cout << "Produto = " << num1 * num2 << endl;
    cout << "Divisão = " << num1 / num2 << endl;

    return 0;
}