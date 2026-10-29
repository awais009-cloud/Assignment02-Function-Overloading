#include <iostream>
using namespace std;

// Four function prototypes
double fare(double km, double ratePerKm = 40.0);
double fare(double km, double ratePerKm, bool peakHour);
double fare(double km, char vehicle);
double fare(double km, char vehicle, int promoPercent);

int main() {
    cout << "fare(10) = " << fare(10) << endl;
    cout << "fare(10, 30.0) = " << fare(10, 30.0) << endl;
    cout << "fare(10, 30.0, true) = " << fare(10, 30.0, true) << endl;
    cout << "fare(8, 'B') = " << fare(8, 'B') << endl;
    cout << "fare(8, 'C') = " << fare(8, 'C') << endl;
    cout << "fare(8, 'C', 10) = " << fare(8, 'C', 10) << endl;

    // ---- Part B: write your code below this line ----

    return 0;
}

// Version 1: Base fare plus per-kilometre charge
double fare(double km, double ratePerKm) {
    return 100 + km * ratePerKm;
}

// Version 2: Add 20% during peak hours
double fare(double km, double ratePerKm, bool peakHour) {
    double total = fare(km, ratePerKm);  // Call Version 1

    if (peakHour) {
        total = total * 1.20;
    }

    return total;
}

// Version 3: Calculate fare based on vehicle type
double fare(double km, char vehicle) {
    double rate;

    if (vehicle == 'B') {
        rate = 25.0;
    } else if (vehicle == 'R') {
        rate = 35.0;
    } else if (vehicle == 'C') {
        rate = 50.0;
    } else {
        return 0;
    }

    return fare(km, rate);  // Call Version 1
}

// Version 4: Apply promotional discount
double fare(double km, char vehicle, int promoPercent) {
    double total = fare(km, vehicle);  // Call Version 3

    return total - (total * promoPercent / 100.0);
} 
