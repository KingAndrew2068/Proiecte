#include <iostream>
#include <string>
using namespace std;

class ContBancar {
private:
    string numeClient;
    double sold;

public:
    
    ContBancar(string nume, double soldInitial) {
        numeClient = nume;
        sold = soldInitial;
    }

    
    void depune(double suma) {
        if (suma > 0) {
            sold += suma;
            cout << "Ai depus " << suma << " lei. Soldul actual: " << sold << " lei." << endl;
        } else {
            cout << "Suma trebuie sa fie pozitiva!" << endl;
        }
    }

    
    void retrage(double suma) {
        if (suma > 0 && suma <= sold) {
            sold -= suma;
            cout << "Ai retras " << suma << " lei. Soldul actual: " << sold << " lei." << endl;
        } else if (suma > sold) {
            cout << "Fonduri insuficiente!" << endl;
        } else {
            cout << "Suma trebuie sa fie pozitiva!" << endl;
        }
    }

    
    void afiseazaSold() {
        cout << "Soldul contului pentru " << numeClient << " este: " << sold << " lei." << endl;
    }
};

int main() {
    
    ContBancar cont1("Ion Popescu", 1000.0);
    cont1.afiseazaSold();
    cont1.depune(500);
    cont1.retrage(200);
    cont1.afiseazaSold();

    return 0;
}
