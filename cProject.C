#include <stdio.h>

// Define the Taxi structure
struct Taxi {
    int id;
    char driver[20];
    char category[20];
    char plate[7];
    char color[20];
    float rate;
    float minCharge;
    char state; // 'A' for available, 'R' for in a ride
    struct Taxi* next; // Self-referential structure pointer
};