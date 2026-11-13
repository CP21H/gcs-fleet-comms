# GCS-Fleet Comms

Ground Control Station (GCS) server in C that acts as a tactical tracking relay for a fleet of drones or simulated starfighters (X-Wings, TIE-Fighters). Server listens for incoming UDP/TCP packets containing telemetry data (pitch, roll, yaw, battery/fuel levels, shield status, and 3D coordinates) disguised as Imperial/Rebel flight data packets.