/* 
 * File:   Weapon.cpp
 * Author: Javier <jrescobara@gmail.com>
 *  
 */ 

#include "Weapon.h"

std::string Weapon::getName() {
    return name;
}

Weapon::Weapon()
{
    
}

double Weapon::hit() {
    return hitPoints;
}