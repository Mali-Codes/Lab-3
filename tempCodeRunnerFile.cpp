// the packages were gonna use
#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct Restaurant {
    string name;
    string address;
    string cuisine;
    double rating; //double for decimal ratings
    int price;     //price level from 1 to 5
};

// Making one REsturant
Restaurant makeRestaurant() {
    Restaurant r; // makes the restuarant into an object
    cout << "\nName: ";    getline(cin, r.name);
    cout << "Address: ";   getline(cin, r.address);
    cout << "Cuisine: ";   getline(cin, r.cuisine);
    cout << "Rating (0-5): ";  cin >> r.rating;
    cout << "Price (1-5): ";   cin >> r.price;
    return r;
}