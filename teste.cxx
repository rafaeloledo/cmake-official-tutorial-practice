#include <iostream>
#include "teste.hpp"

using namespace std;

int main () {
    func(Teste_VERSION_MAJOR, Teste_VERSION_MINOR, Teste_VERSION_PATCH);
}

void func(int i, int i2, int i3) {
    cout << i << endl;
    cout << i2 << endl;
    cout << i3 << endl;
}