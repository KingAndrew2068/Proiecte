#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    
    srand(time(0));

    int numarAles = rand() % 100 + 1;
    int ghicire;
    int incercari = 0;

    cout << "Bine ai venit la jocul 'Ghicește numărul'!" << endl;
    cout << "Am ales un număr între 1 și 100. Încearcă să-l ghicești!" << endl;
   
    do {
        cout << "Introduceți numărul: ";
        cin >> ghicire;
        incercari++;

        if (ghicire > numarAles) {
            cout << "Numărul este mai mic! Încearcă din nou." << endl;
        } else if (ghicire < numarAles) {
            cout << "Numărul este mai mare! Încearca din nou." << endl;
        } else {
            cout << "Felicitari! Ai ghicit numărul " << numarAles << " în " << incercari << " încercari." << endl;
        }
    } while (ghicire != numarAles);

    return 0;
}
