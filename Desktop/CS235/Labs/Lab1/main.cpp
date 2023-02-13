#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

//num of people fed by each pizza size
int const SMALL = 1;
int const MEDIUM = 3;
int const LARGE = 7;
const double PI = 3.14159265;
//Pizza diameters
int const SMALL_DIAMETER = 12;
int const MEDIUM_DIAMETER = 16;
int const LARGE_DIAMETER = 20;
//Pizza costs
double const SMALL_COST = 7.28;
double const MEDIUM_COST = 11.48;
double const LARGE_COST = 14.68;

int main() {
    int guests;
    cout << "Please enter how many guests to order for: ";
    cin >> guests;
    int num_guests = guests;
    int num_small = 0, num_medium = 0, num_large = 0;
    while (guests > 0) {
        if (guests >= LARGE) {
            num_large++;
            guests -= LARGE;
        }
        else if (guests >= MEDIUM) {
            num_medium++;
            guests -= MEDIUM;
        }
        else {
            num_small++;
            guests -= SMALL;
        }
    }
    cout << num_large << " large pizzas, " << num_medium << " medium pizzas, and " << num_small << " small pizzas will be needed." << endl;
    cout << endl;
    int sr = SMALL_DIAMETER / 2;
    int mr = MEDIUM_DIAMETER / 2;
    int lr = LARGE_DIAMETER / 2;
    double total_area = (num_small * (PI * (sr * sr))) + (num_medium * (PI * (mr * mr))) + (num_large * (PI * (lr * lr)));
    double area_per_guest = total_area / num_guests;
    cout << "A total of " << fixed << setprecision(2) << total_area << " square inches of pizza will be ordered (" << fixed << setprecision(2) << area_per_guest << " per guest)." << endl;
    cout << endl;
    double tip_percent;
    cout << "Please enter the tip as a percentage (i.e. 10 means 10%): ";
    cin >> tip_percent;
    double total_cost = (num_small * SMALL_COST) + (num_medium * MEDIUM_COST) + (num_large * LARGE_COST);
    double tip = total_cost * (tip_percent / 100);
    total_cost = total_cost + tip;
    int cost = round(total_cost);
    cout << "The total cost of the event will be: $" << cost << endl;

}