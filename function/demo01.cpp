#include "iostream"

using namespace std;

//typeName funtionName(parameterList);
void simple();

int main() {
    cout << "main() will call the simple() function:\n";
    simple();

    return 0;
}

/*
 * typeName funtionName(parameterList)
 * {
 *  statements
 *  return value;
 * }
 */
void simple() {
    cout << "I'm but a simple function.\n";
}