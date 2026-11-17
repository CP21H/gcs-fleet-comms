// Leverage specifications from: https://starwars.fandom.com/wiki/TIE/ln_space_superiority_starfighter/Legends
// Extend the starfighter.c struct 

#ifndef TIE_FIGHTER_H
#define TIE_FIGHTER_H

#include "starfighter.h"

typedef struct TIEFighter {
    Starfighter starfighter;
    int booster_charge;             // percentage of booster charge
} TIEFighter;

#endif