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
    cout << "Name: ";    getline(cin, r.name);
    cout << "Address: ";   getline(cin, r.address);
    cout << "Cuisine: ";   getline(cin, r.cuisine);
    cout << "Rating (0-5): ";  cin >> r.rating;
    cout << "Price (1-5): ";   cin >> r.price;
// Poretty cool line I had to do some research on but basically clears any lacking newlines so its
// not on the same line as the next input! Will def look to use it in the future too!!
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); 

    return r;
}
// Printing the restaurant and the inputs we put in
void printRestaurant(const Restaurant& r) {
    cout << "\n---- Restaurant ----\n";
    cout << "Name:    " << r.name    << '\n'; //displaying the inputs
    cout << "Address: " << r.address << '\n';
    cout << "Cuisine: " << r.cuisine << '\n';
    cout << "Rating:  " << r.rating  << '\n';
    cout << "Price:   " << r.price   << "\n";
}
// The actual function that will run it all :)
int main() {
    vector<Restaurant> list;
    cout << "Enter 4 restaurants: \n";
    for (int i =0; i < 4; i++) { // loop to enter all 4 resturants
        list.push_back(makeRestaurant()); // adding each itteration to the list
    }

    cout << "Heres your restaurant list: \n";
    for (const auto& r : list) {
        printRestaurant(r);
    }
    return 0; // end of program
}