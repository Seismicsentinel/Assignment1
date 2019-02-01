/* 
 * File:   Dagger.h
 * Author: Elion Sickler
 * 
 * Header file for the Dagger weapon
 * Created on 1/31/2019.
 * 
 */

#include <string>
#include <cstdlib>
#include "Weapon.h"

#ifndef DAGGER_H
#define DAGGER_H

// Took the frame of this object from SimpleHammer. 

class Dagger : public Weapon {
public:

    Dagger()
    {
        name = "Dagger";
        hitPoints = 40;
    }

    virtual ~Dagger() {};

    virtual double hit(double armor);

};

#endif /* DAGGER_H */

