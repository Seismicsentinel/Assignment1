/* 
 * File:   CrazyRandomSword.h
 * Author: Elion Sickler
 * 
 * Header file for the CrazyRandomSword weapon
 * Created on 1/29/2019.
 * 
 */

#include <string>
#include <cstdlib>  // for Rand function

#include "Weapon.h"

#ifndef CRAZYRANDOMSWORD_H
#define CRAZYRANDOMSWORD_H

// Took the frame of this object from SimpleHammer. 

class CrazyRandomSword : public Weapon {
public:

    CrazyRandomSword()
    {
        srand(time(NULL));
        name = "Crazy Random Sword";
        hitPoints = 7 + ( rand() % 94 );    // Sets damage somewhere from 7 to (7 + 93)
    } 


    virtual ~CrazyRandomSword() {};

    virtual double hit(double armor);

};

#endif /* CRAZYRANDOMSWORD_H */

