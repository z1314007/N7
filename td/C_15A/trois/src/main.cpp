#include <iostream>
#include <math.h>
#include "factorielle.h"
#include "puissance.h"
#include "sinus.h"
#include "squareroot.h"

using namespace std;

int main() {{{
    int choix=0;
    float nombre=0;
    int limite=0;
    float calculee=0;
    float mathh=0;
    int n=0;
    int m=0;
    bool fin=false;

    cout << endl << "\tBienvenue dans ce programme 'TD de C n°3'" << endl;
    while (not fin) {
        cout << endl;
        cout << "Que voulez-vous faire ?" << endl;
        cout << "1 : Rien." << endl;
        cout << "2 : Obtenir la racine carrée d'un nombre réel quelconque." << endl;
        cout << "3 : Calculr la factorielle d'un nombre entier naturel." << endl;
        cout << "4 : Obtenir la puissance entière d'un nombre entier." << endl;
        cout << "5 : Calculer le sinus d'un nombre entier." << endl;
        cout << "==> ";
        cin >> choix;
        cout.precision(10);
        switch (choix) {
            case 1:
                cout << "Ok." << endl;
                cout << "En voilà un programme qu'il est utile... " << endl;
                fin=true;
                break;
            case 2:
                cout << "Quel nombre ?" << endl << "==> ";
                cin >> nombre;
                cout << "Combien d'itérations (-1 pour auto) ?" << endl << "==> ";
                cin >> limite;
                calculee = squareroot(nombre, limite);
                mathh = sqrt(nombre);
                cout << "La racine carrée calculée de " << nombre << " après " << limite << " itérations est " << calculee << endl;
                cout << "Alors que math.h donne '" << mathh << "', soit une erreur de '" << fabs(mathh-calculee) << "'." << endl;
                break;
            case 3:
                cout << "Quel nombre ?" << endl << "==> ";
                cin >> nombre;
                cout << nombre << "! = " << factorielle(nombre) << endl;
                break;
            case 4:
                cout << "Quel nombre ?" << endl << "==> ";
                cin >> n;
                cout << "Quel puissance ?" << endl << "==> ";
                cin >> m;
                cout << n << "^" << m << " = " << puissance(n,m) << endl;
                break;
            case 5:
                cout << "Quel nombre ?" << endl << "==> ";
                cin >> nombre;
                calculee = sinus(nombre);
                mathh = sin(nombre);
                cout << "Le sinus calculé de " << nombre << " est " << calculee;
                cout << " et celui de math.h est " << mathh << " ; soit une erreur de " << fabs(mathh-calculee) << endl;
                break;
            default:
                cout << "Un message d'erreur." << endl;
                cout << "Tant pis, on recommence... " << endl;
                break;
        }
    }
    cout << "Fin." << endl << endl;
    return 0;
}}}

//vim:set foldmethod=marker:
