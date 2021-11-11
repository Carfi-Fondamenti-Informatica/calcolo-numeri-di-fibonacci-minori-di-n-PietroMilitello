#include <iostream>
using namespace std;
int main() {
    int a=0, b=1,c=0,n=0;
    cin >> n;
    //creo la variabile per cui il numero inserito debba essere un numero intero positivo
    if (n>=1) {
        cout << "1" << endl; // strampo il primio numero di fibonacci
    } //chiudo la variabile if e procedo inserendo il ciclo for
        for (int i=1; i>0; i++) {
        c = a + b;
        if (c <= n) { // all'interno del ciclo inserisco la variabile if, con cui definisco se il ciclo si deve ripetere o se deve terminare
            cout << c << endl;
        } else {
            return 0;
        } //impongo le uguaglianze per permettere al programma di procedere con la scrittura dell'elenco di numeri di Fibonacci
        a = b;
        b = c;
    }
    return 0;
} // fine del codice
