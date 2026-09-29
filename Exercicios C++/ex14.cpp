#include <iostream>
#include <string>

int main () {
    string nome;
    int nivel;
    cout << "Nível: ";
    getline(cin, nome);
    cout << "Nível: ";
    cin >> nivel;

    cout << "JOGADOR CADASTRADO \n";
    cout << "Nome: " << nome << "\n";
    cout << "Nível: " << nivel << "\n";

    return 0;
}