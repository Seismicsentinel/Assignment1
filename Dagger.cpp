/* 
 * File:   Dagger.cpp
 * Author: Elion Sickler
 * 
 * Creating Dagger weapon class as my own weapon last.
 * 
 */

#include "Dagger.h"
#include <iostream>

using namespace std;

double Dagger::hit(double armor)
{

    double damage;

    srand(time(NULL));
    int critChance = ( rand() % 4 );    // 1 in 4 chance to ignore armor
    
    if (critChance) damage = hitPoints - armor; // True for 1, 2, and 3 - Armor is calculated into damage
    else
    {
         std::cout << " --CRIT!!-- ";
         damage = hitPoints;                    // True for 0 - ignores all armor
    }
    if (damage < 0){
        return 0;
    }

    return damage;
}