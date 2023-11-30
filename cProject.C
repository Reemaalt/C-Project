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
    struct Taxi* next; // Self-referential 
};

//void addTripCar() 1

//void setTripCar (char* category, float* rate) 2

//void writeCarsInRide (char* fileName) 3

//printList() 4

int main() {
    // Declare a pointer to a linked list of struct Taxi
    struct Taxi* list = NULL;  // an empty list

    // Assign the first node to the list سويته عشان ما ننسى بس مافيه نود اصلا
    list = &taxi1; 

    // Call the function addTripCar to read the content  of the given text file: “Taxies.txt”, 
    addTripCar(&list, "Taxies.txt");

    // Call the function setTripCar with the given information
    setTripCar(list, "Business", 4.5);
    setTripCar(list, "Family", 5.0);
    setTripCar(list, "Family", 4.0);
    setTripCar(list, "standard", 3.4);
    setTripCar(list, "standard", 5.0);

    // Call the function writeCarsInRide to update the txt file with cars in trip.
    writeCarsInRide(&list, "Taxies.txt");

    // Call the function printList to print the cars information
    printList(list);

    
    return 0;
}