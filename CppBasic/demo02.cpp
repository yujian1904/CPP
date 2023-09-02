#include <iostream>
#include "cstring"
#include "ctime"

using namespace std;

struct inflatable {
    string name;
    float volume;
    double price;
};

int main() {
    /*
    //array : typeName arrayName[arraySize];
    int yams[3] = {20, 30, 5};
    cout << yams[0] + yams[0] + yams[0] << endl;
    cout << sizeof(yams) << endl;
    cout << sizeof(yams[1]) << endl;

    //string
    const int Arsize = 20;
    char name[Arsize];
    char dessert[Arsize];
    char charr[Arsize];
    string str;

    cout << "Enter your name:" << endl;
    cin.getline(name, Arsize);//benjamin einsten
    cout << "Enter your favorite dessert:" << endl;
    cin.get(dessert, Arsize).get();//Chocolate Mousse
    cout << "I have some delicious " << dessert << " for you " << name << endl;

    cout << "Length of string in charr before input: "
         << strlen(charr) << endl;
    cout << "Length of string in str before input: "
         << str.size() << endl;
    cout << "Enter a line of text:\n";
    cin.getline(charr, 20);     // peanut butter
    cout << "You entered: " << charr << endl;
    cout << "Enter another line of text:\n";
    getline(cin, str);          // blueberry jam
    cout << "You entered: " << str << endl;
    cout << "Length of string in charr after input: "
         << strlen(charr) << endl;
    cout << "Length of string in str after input: "
         << str.size() << endl;
    */

    //struct
    inflatable guest = {
            "Glorious Gloria",
            1.88,
            29.99
    };
    inflatable pal = {
            "Audacious Arthur",
            3.12,
            32.99
    };
    cout << "guest.name: " << guest.name;
    cout << "\npal.name" << pal.name << "!\n";

    cout << "You can have both for $";
    cout << guest.price + pal.price << "!\n";

    inflatable guests[2] = {
            {"Bambi",    0.5,  21.99},
            {"Godzilla", 2000, 565.99}
    };

    cout << "The guests " << guests[0].name << " and " << (guests + 1)->name << endl;

    union one4all {
        int int_val;
        long long_val;
        double double_val;
    };
    one4all pail;
    pail.int_val = 15;
    cout << pail.int_val << endl;
    pail.double_val = 1.38;
    cout << pail.double_val << endl;

    enum spectrum {
        red, orange, yellow, green, blue, violet, indigo, ultraviolet
    };
    spectrum bran = orange;
    cout << bran + 1 << endl;

    int *p_int = new int;
    *p_int = 128;
    cout << *p_int << endl;
    delete p_int;
    double *p_double = new double[10];
    srand(time(nullptr));
    //arrayname[i] == *(arrayname+i)
    //pointername[i] == *(pointername+i)
    for (int i = 0; i < 10; i++) {
        *(p_double + i) = (double) (rand() % 100) / 10;
    }
    for (int i = 0; i < 10; i++) {
        cout << *(p_double + i) << endl;
    }
    cout << p_double[2] << endl;
    cout << sizeof(p_double) << endl;
    delete[] p_double;

    inflatable *ps = new inflatable; // allot memory for structure
    ps->name = "Fabulous Frodo";
    (*ps).price = 27.99;
    ps->volume = 1.4;
    cout << "Name: " << (*ps).name << endl;              // method 2
    cout << "Volume: " << ps->volume << " cubic feet\n"; // method 1
    cout << "Price: $" << ps->price << endl;             // method 1
    delete ps;

    //github test44

    return 0;
}