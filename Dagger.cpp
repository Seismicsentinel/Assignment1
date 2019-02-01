/* 
 * File:   Dagger.cpp
 * Author: Elion Sickler
 * 
 * Creating Dagger weapon class as my own weapon last.
 * 
 */

#include "Dagger.h"


double Dagger::hit(double armor)
{

    double damage;

    int critChance = ( rand() % 4 );    // 1 in 4 chance to ignore armor
    
    if (critChance) damage = hitPoints - armor; // True for 1, 2, and 3 - Armor is calculated into damage
    else damage = hitPoints;                    // True for 0 - ignores all armor

    if (damage < 0){
        return 0;
    }

    return damage;
}