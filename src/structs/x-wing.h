// Leverage specifications from: https://starwars.fandom.com/wiki/T-65B_X-wing_starfighter
// Extend the starfighter.c struct 

#ifndef X_WING_H
#define X_WING_H

#include "starfighter.h"

typedef struct XWing {
    Starfighter starfighter;
    int shield_strength;            // percentage of shield strength
} XWing;

#endif