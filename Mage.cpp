#ifndef MAGE_CPP
#define MAGE_CPP

#include <iostream>
#include <string>
#include <vector>
#include "Mage.h"

Mage::Mage(): _name("Mage"), _hp(150){
    Monstre test = Monstre();
    _board.push_back(test);
}
void Mage::Affichage(){
    std::cout << "Nom : " << _name << " Points de vie : " << _hp  << std::endl << " Votre board :" << std::endl;
    for (int i = 0; i < _board.size(); i++){
        _board[i].Affichage();
    }
}
void Mage::addMonster(Monstre monster){
    _board.push_back(monster);
}
#endif