#include "iostream"
#include "fstream"
#include "cstdlib"
#include "String.h"

using namespace std;
const int ArSize = 10;
const int MaxLen = 81;

int main() {
    ifstream inFile;
    string filename = "../classWithNew/data.txt";
    inFile.open(filename);
    if (!inFile.is_open()) {
        cout << "Could not open the file " << filename << endl;
        cout << "Program terminating.\n";
        exit(EXIT_FAILURE);
    } else
        cout << "open file success" << endl;
//    string str[ArSize];
    String sayings[ArSize];
    char temp[MaxLen];
    int i;
    for (i = 0; i < ArSize; i++) {
        inFile.get(temp, MaxLen);
        while (inFile && inFile.get() != '\n')
            continue;
//        cout << !inFile << endl;
        if (temp[0] == '\0')
            break;
        else
            sayings[i] = temp;
    }
    int total = i;

    String name;
    cout << "Hi, what's your name?\n>> ";
    cin >> name;
    cout << name << ", please enter up to " << ArSize << " short sayings <empty line to quit>:\n";
    for (int j = 0; j < total; ++j) {
        cout << sayings[j] << endl;
    }
    if (total > 0) {
        int shortest = 0;
        int first = 0;
        for (int i = 0; i < total; ++i) {
            if (sayings[i].length() < sayings[shortest].length())
                shortest = i;
            if (sayings[i] < sayings[first])
                first = i;
        }
        cout << "Shortest saysing:\n" << sayings[shortest] << endl;
        cout << "First alphabetically:\n" << sayings[first] << endl;
        cout << "This program used " << String::HowMany << " String objects.Bye.\n";
    } else
        cout << "No input! Bye.n";
    return 0;
}