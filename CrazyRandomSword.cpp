/* 
 * File:   CrazyRandomSword.cpp
 * Author: Elion Sickler
 * 
 * Now implementing Crazy Random Sword, after implementing SimpleHammer.
 * Date implemented: 1/29/2019
 */

#include "CrazyRandomSword.h"


double CrazyRandomSword::hit(double armor)
{
    // Gets a third of the armor -- maximum that CRS can penetrate. 
    int thirdOfArmor = armor / 3;

    /* Adds 2 at the lower bound, then modulo thirdOfArmor - 2, to offset
       so the total penetration doesn't exceed 1/3 of the armor value. */

    int randomPen = 2 + ( rand() % ( thirdOfArmor - 2 ) );

    double damage = hitPoints - (armor - randomPen);

    if (damage < 0){
        return 0;
    }
    
    return damage;
}