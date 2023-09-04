// travel.cpp -- using structures with functions
#include <iostream>
#include "cmath"

struct travel_time {
    int hours;
    int mins;
};
const int Mins_per_hr = 60;
struct polar {
    double distance;      // distance from origin
    double angle;         // direction from origin
};
struct rect {
    double x;             // horizontal distance from origin
    double y;             // vertical distance from origin
};

// prototypes
void rect_to_polar(const rect *pxy, polar *pda);

void show_polar(const polar *pda);

travel_time sum(travel_time t1, travel_time t2);

void show_time(travel_time t);

int main() {
    using namespace std;

    rect rplace;
    polar pplace;

    travel_time day1 = {5, 45};    // 5 hrs, 45 min
    travel_time day2 = {4, 55};    // 4 hrs, 55 min

    travel_time trip = sum(day1, day2);
    cout << "Two-day total: ";
    show_time(trip);

    travel_time day3 = {4, 32};
    cout << "Three-day total: ";
    show_time(sum(trip, day3));
    // cin.get();

    cout << "Enter the x and y values: ";
    while (cin >> rplace.x >> rplace.y) {
        rect_to_polar(&rplace, &pplace);    // pass addresses
        show_polar(&pplace);        // pass address
        cout << "Next two numbers (q to quit): ";
    }
    cout << "Done.\n";

    return 0;
}

travel_time sum(travel_time t1, travel_time t2) {
    travel_time total;

    total.mins = (t1.mins + t2.mins) % Mins_per_hr;
    total.hours = t1.hours + t2.hours +
                  (t1.mins + t2.mins) / Mins_per_hr;
    return total;
}

void show_time(travel_time t) {
    using namespace std;
    cout << t.hours << " hours, "
         << t.mins << " minutes\n";
}

void show_polar(const polar *pda) {
    using namespace std;
    const double Rad_to_deg = 57.29577951;

    cout << "distance = " << pda->distance;
    cout << ", angle = " << pda->angle * Rad_to_deg;
    cout << " degrees\n";
}

void rect_to_polar(const rect *pxy, polar *pda) {
    using namespace std;
    pda->distance =
            sqrt(pxy->x * pxy->x + pxy->y * pxy->y);
    pda->angle = atan2(pxy->y, pxy->x);
}

