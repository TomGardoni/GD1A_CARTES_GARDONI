#include <iostream>
#include <vector>
#include <string>
#include "Monstre.cpp"
using namespace std;

int main()
{
    Monstre Spectre;
    Monstre Zombie ("Zombie",25, 75,true);

    Spectre.Affichage();
    Zombie.Affichage();
    
    Spectre.Attaque(Zombie);
    Zombie.Attaque(Spectre);

    Spectre.Affichage();
    Zombie.Affichage();

    return 0;
}