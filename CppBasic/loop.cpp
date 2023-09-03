#include "iostream"
#include "ctime"

#define ArSize  20
using namespace std;

int main() {
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
    return 0;
}
