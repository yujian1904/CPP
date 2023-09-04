#include "iostream"
#include "ctime"
#include "cctype"

#define ArSize  20
using namespace std;
enum {
    red, orange, yellow, green, blue, violet, indigo
};
const int Max = 5;

int main() {
    /*
    int array[ArSize];
    srand(time(nullptr));
    for (int i = 0; i < ArSize; ++i) {
        array[i] = rand() % 100;
    }
    int count = 0;
    while (count < ArSize) {
        cout << "array[" << count << "] is: " << array[count] << endl;
        count++;
    }
    cout << "____________________________________" << endl;
    do {
        cout << "array[" << count - 1 << "] is: " << array[count - 1] << endl;
        count--;
    } while (count > 0);
    cout << "---------------------------------" << endl;
    for (int x: array) {
        cout << x << endl;
    }
         int golf[Max];
    cout << "Please enter your golf scores.\n";
    cout << "You must enter " << Max << " rounds.\n";
    int i;
    for (i = 0; i < Max; i++) {
        cout << "round #" << i + 1 << ": ";
        while (!(cin >> golf[i])) {
            cin.clear();     // reset input
            while (cin.get() != '\n')
                continue;    // get rid of bad input
            cout << "Please enter a number: ";
        }
    }
    for (int x: golf) {
        cout << x << endl;
    }

    const int Fave = 27;
    int n;
    do {
        cin >> n;
        if (n < Fave)
            cout << "Too low -- guess again: ";
        else if (n > Fave)
            cout << "Too high -- guess again: ";
        else
            cout << Fave << " is right!\n";
    } while (n != Fave);

    char ch;
    int whitespace = 0;
    int digits = 0;
    int chars = 0;
    int punct = 0;
    int others = 0;
    do {
        cin.get(ch);
        if (isalpha(ch))
            chars++;
        else if (isspace(ch))
            whitespace++;
        else if (isdigit(ch))
            digits++;
        else if (ispunct(ch))
            others++;
    } while (ch != '@');
    cout << chars << " letters, " << whitespace << " whitespace, "
         << digits << " digits, "
         << punct << " punctuations, "
         << others << " others.\n";

    int a, b;
    cin >> a >> b;
    cout << "The larger of " << a << " and " << b;
    int c = a > b ? a : b;
    cout << " is " << c << endl;

    cout << "Enter color code (0-6): ";
    int code;
    cin >> code;
    while (code >= red && code <= indigo) {
        switch (code) {
            case red     :
                cout << "Her lips were red.\n";
                break;
            case orange  :
                cout << "Her hair was orange.\n";
                break;
            case yellow  :
                cout << "Her shoes were yellow.\n";
                break;
            case green   :
                cout << "Her nails were green.\n";
                break;
            case blue    :
                cout << "Her sweatsuit was blue.\n";
                break;
            case violet  :
                cout << "Her eyes were violet.\n";
                break;
            case indigo  :
                cout << "Her mood was indigo.\n";
                break;
        }
        cout << "Enter color code (0-6): ";
        cin >> code;
    }
    cout << "Bye\n";
*/

    return 0;
}
