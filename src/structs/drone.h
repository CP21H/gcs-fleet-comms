#ifndef DRONE_H
#define DRONE_H

typedef struct Location {
    float longitude;
    float latitude;
    float altitude;
} Location;


typedef struct Drone {
    int id;
    int status;
    float ground_speed;
    float air_speed;
    Location location;
    float roll;
    float pitch;
    float yaw;
    float battery_level;
} Drone;

#endif