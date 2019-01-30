/* 
 * File:   SimpleHammer.h
 * Author: Elion Sickler
 * 
 * Header file for the SimpleHammer weapon
 * Created on 1/29/2019.
 * 
 */

#include <string>
#include "Weapon.h"

#ifndef SIMPLEHAMMER_H
#define SIMPLEHAMMER_H

// Took the frame of this object from CommonSword. 

class SimpleHammer : public Weapon {
public:

    SimpleHammer() : Weapon("Simple Hammer", 25.0){} //Calls Weapon(name, hitpoints) constructor with values Simple Hammer and 25.0


    virtual ~SimpleHammer() {};

    virtual double hit(double armor);

};

#endif /* SIMPLEHAMMER_H */

