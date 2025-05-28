#include <iostream>
using namespace std;

int main() {
              

#include <iostream>
#include <ctime> 

using namespace std;

int main() {
    const int N = 20;
    int vettore[N];
    int i = 0;

   
    srand(time(0));
    while (i < N) {
        vettore[i] = rand() % 100;
        i = i + 1;
    }

    
    int j = 0;
    i = 0;
    while (i < N - 1) {
        j = 0;
        while (j < N - i - 1) {
            if (vettore[j] > vettore[j + 1]) {
                int temp = vettore[j];
                vettore[j] = vettore[j + 1];
                vettore[j + 1] = temp;
            }
            j = j + 1;
        }
        i = i + 1;
    }

    
    cout << "Vettore ordinato: ";
    i = 0;
    while (i < N) {
        cout << vettore[i] << " ";
        i = i + 1;
    }
    cout << endl;

   
    int valore;
    cout << "Inserisci un valore da cercare: ";
    cin >> valore;

   
    i = 0;
    int posseq = -1;
    int controlli_seq = 0;

    while (i < N) {
        controlliseq = controlliseq + 1;
        if (vettore[i] == valore) {
            pos_seq = i;
            i = N;
        } else {
            i = i + 1;
        }
    }

    // Ricerca binaria
    int inizio = 0;
    int fine = N - 1;
    int medio;
    int pos bin = -1;
    int controllibin = 0;

    while (inizio <= fine) {
        medio = (inizio + fine) / 2;
        controlli_bin = controlli_bin + 1;

        if (vettore[medio] == valore) {
            pos_bin = medio;
            inizio = fine + 1;
        } else {
            if (vettore[medio] < valore) {
                inizio = medio + 1;
            } else {
                fine = medio - 1;
            }
        }
    }

    // Risultati
    if (pos_seq != -1) {
        cout << "Ricerca sequenziale: trovato alla posizione " << posseq << " con " << controlliseq << " controlli." << endl;
    } else {
        cout << "Ricerca sequenziale: valore non trovato con " << controlliseq << " controlli." << endl;
    }

    if (pos_bin != -1) {
        cout << "Ricerca binaria: trovato alla posizione " << posbin << " con " << controlli_bin << " controlli." << endl;
    } else {
        cout << "Ricerca binaria: valore non trovato con " << controlli bin << " controlli." << endl;
    }

    































































}

//LEGGERE LE ISTRUZIONI NEL FILE README.md
