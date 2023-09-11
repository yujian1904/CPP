#include "iostream"
#include "tabtenn.h"

int main() {
    using std::cout;
    using std::endl;
    TableTennisPlayer player1("Tara", "Boomdea", false);
    RatedPlayer rPlayer1(1140, "Mallory", "Duck", true);
    rPlayer1.Name();
    if (rPlayer1.HasTable())
        cout << ": has a table.\n";
    else
        cout << ": hasn't a table.\n";
    player1.Name();
    if (player1.HasTable())
        cout << ": has a talbe";
    else
        cout << ": hasn't a table.\n";
    cout << "Name: ";
    rPlayer1.Name();
    cout << "; Rating: " << rPlayer1.Rating() << endl;

}