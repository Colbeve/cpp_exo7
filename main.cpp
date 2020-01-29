#include <iostream>

using namespace std;

/*
Exercice 7
Je demande un nombre et j’affiche le carré de ce nombre.
*/

double carre(double x)
{
    double resultat;
    resultat = x*x;
    return resultat;
}
int main()
{
    double nombre, carreNombre;
    cout << "entrer un nombre: " << endl;
    cin >> nombre;

    carreNombre = carre(nombre);//on utilise la fonction

    cout << "le carre de " << nombre << " est: " << carreNombre << endl;
    return 0;
}
