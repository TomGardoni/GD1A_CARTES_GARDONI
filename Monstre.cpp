#include "monstre.h"

using namespace std;

Monstre::Monstre() : name("Spectre"), att(20), hp(100), currentState(true){
}
Monstre::Monstre(std::string nom, int pv, int degats, bool etat) : name(nom), hp(pv), att(degats), currentState(etat){

}
void Monstre::Affichage(){
    cout << name << " : Attaque de " << att << " Points de vie restants : " << hp << endl;
    if (hp == 0){
        cout << name << " nous a quitté " << endl ;
    }
}
void Monstre::Attaque(Monstre &cible){
    if (currentState){
        cible.recevoirDamage(getDamage());
    }
    else{
        cout << name << " Deja fait ! " << endl;
    }
}
void Monstre::recevoirDamage(int nbDegats){
    hp -= nbDegats;

    if (hp < 0)
    {
        hp = 0;
    }
}
int Monstre::getDamage() const{
    return att;
}