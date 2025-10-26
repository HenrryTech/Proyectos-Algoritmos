#include <iostream>
using namespace std;

int main() {
    int num;
    int binario[32];
    int i = 0;
    
    cout << "Numero decimal: ";
    cin >> num;
    
    if (num == 0) {
        cout << "Binario: 0" << endl;
        return 0;
    }
    
    // Dividir entre 2 y guardar residuos
    while (num > 0) {
        binario[i] = num % 2;
        num = num / 2;
        i++;
    }
    
    // Imprimir al rev�s
    cout << "Binario: ";
    for (int j = i - 1; j >= 0; j--) {
        cout << binario[j];
    }
    cout << endl;
    
    return 0;
}
