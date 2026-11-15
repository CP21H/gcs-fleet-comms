#ifndef STARFIGHTER_H
#define STARFIGHTER_H

#include "drone.h"

typedef struct Identification {
    int id;
    char* faction;        // Rebel, Empire
    char* model;          // Incom Corporation, Sienar Fleet Systems, Kuat Drive Yards
} Identification;

typedef struct FlightStatus {
    float megalight_per_hour;   // speed in space
    float atmospheric_speed;    // speed in atmosphere, ground-speed equivalent
    float roll;
    float pitch;
    float yaw;
} FlightStatus;

typedef struct DefenseStatus {
    int hull_integrity;             // percentage of hull integrity
    int hyperdrive_charge;          // percentage of hyperdrive charge
    int astromech_status;   // 0 = offline, 1 = online
    int countermeasures_status;     // 0 = offline, 1 = online
} DefenseStatus;

typedef struct Starfighter {
    int status;
    Identification identification; 
    Location location;
    FlightStatus flight_status;
    DefenseStatus defense_status;
} Starfighter;

#endif