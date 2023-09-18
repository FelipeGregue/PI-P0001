#include <iostream>

using namespace std;

int main(){
    int num1, num2;

    cout << "Digite um número inteiro: ";
    cin >> num1;
    cout << "Digite outro número inteiro: ";
    cin >> num2;

    cout << "Soma = " << num1 + num2 << endl;
    cout << "Subtração = " << num1 - num2 << endl;
    cout << "Produto = " << num1 * num2 << endl;
    cout << "Divisão = " << num1 / num2 << endl;
    cout << "Resto da divisão = " << num1 % num2 << endl;

    return 0;
}