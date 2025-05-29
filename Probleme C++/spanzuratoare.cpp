#include <iostream>
#include <string>
#include <vector>
using namespace std;
void afiseazaCuvant(const string& cuvant, const vector<bool>& ghicite) {
    for (int i = 0; i < cuvant.length(); ++i) {
        if (ghicite[i]) {
            cout << cuvant[i] << " ";
        } else {
            cout << "_ ";
        }
    }
    cout << endl;
}
int main() {
    string cuvant = "programare"; 
    int incercari = 6; 
    vector<bool> ghicite(cuvant.length(), false); 
    string litereGhicite = ""; 
    char ghicire;
    bool gasit;
    cout << "Bine ai venit la jocul Spânzurătoarea!" << endl;
    while (incercari > 0) {
        afiseazaCuvant(cuvant, ghicite);
        cout << "Incercari ramase: " << incercari << endl;
        cout << "Litere ghicite: " << litereGhicite << endl;
        cout << "Alege o litera: ";
        cin >> ghicire;
        if (litereGhicite.find(ghicire) != string::npos) {
            cout << "Ai mai ghicit aceasta litera!" << endl;
            continue;
        }
        litereGhicite += ghicire;
        gasit = false;
        for (int i = 0; i < cuvant.length(); ++i) {
            if (cuvant[i] == ghicire) {
                ghicite[i] = true;
                gasit = true;
            }
        }
        if (!gasit) {
            incercari--; 
            cout << "Litera nu este in cuvant!" << endl;
        }
        bool castig = true;
        for (bool g : ghicite) {
            if (!g) {
                castig = false;
                break;
            }
        }
        if (castig) {
            cout << "Felicitari! Ai ghicit cuvantul: " << cuvant << endl;
            break;
        }
    }
    if (incercari == 0) {
        cout << "Ai pierdut! Cuvantul era: " << cuvant << endl;
    }
    return 0;
}
