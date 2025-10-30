#include <iostream>
#include <string>
#include <algorithm>
using namespace std;


char limpiarCaracter(char c) {
    c = tolower(c);
    switch (c) { //por la tildes
        case -96: return 'a'; // á
        case -91: return 'e'; // é
        case -87: return 'i'; // í
        case -79: return 'o'; // ó
        case -77: return 'u'; // ú
        default:
            if (c >= 'a' && c <= 'z') return c;
            else return '\0'; 
    }
}

bool esPalindromo(string texto) {
    string limpio = "";

    
    for (int i = 0; i < texto.length(); i++) {
        char limpioChar = limpiarCaracter(texto[i]);
        if (limpioChar != '\0') {
            limpio += limpioChar;
        }
    }

  //comprobar al reves 
    string reverso = limpio;
    reverse(reverso.begin(), reverso.end());

    return limpio == reverso;
}

int main() {
    string frase;
    cout << "Ingrese el texto: ";
    getline(cin, frase);

    if (esPalindromo(frase)) {
        cout << " Es un palindromo." << endl;
    } else {
        cout << " No es un palindromo." << endl; //sin tildes pa que jale xd
    }

    return 0;
}
