// twoswap.cpp -- specialization overrides a template
#include <iostream>

template<typename T>
void Swap(T &a, T &b);

struct job {
    char name[40];
    double salary;
    int floor;
};

// explicit specialization
template<>
void Swap<job>(job &j1, job &j2);

void Show(job &j);

template
void Swap<char>(char &, char &);

int main() {
    using namespace std;
    cout.precision(2);
    cout.setf(ios::fixed, ios::floatfield);
    int i = 10, j = 20;
    cout << "i, j = " << i << ", " << j << ".\n";
    cout << "Using compiler-generated int swapper:\n";
    Swap(i, j); // generates void Swap(int &, int &)
    cout << "Now i, j = " << i << ", " << j << ".\n";

    job sue = {"Susan Yaffee", 73000.60, 7};
    job sidney = {"Sidney Taffee", 78060.72, 9};
    cout << "Before job swapping:\n";
    Show(sue);
    Show(sidney);
    Swap(sue, sidney); // uses void Swap(job &, job &)
    cout << "After job swapping:\n";
    Show(sue);
    Show(sidney);

    char ch1 = 'g';
    char ch2 = 'e';

    Swap(ch1, ch2);
    cout << "ch1 = " << ch1 << endl;
    cout << "ch2 = " << ch2 << endl;


    // cin.get();
    return 0;
}

template<typename T>
void Swap(T &a, T &b) // general version
{
    T temp;
    temp = a;
    a = b;
    b = temp;
}

// swaps just the salary and floor fields of a job structure

template<>
void Swap<job>(job &j1, job &j2) // specialization
{
    double t1;
    int t2;
    t1 = j1.salary;
    j1.salary = j2.salary;
    j2.salary = t1;
    t2 = j1.floor;
    j1.floor = j2.floor;
    j2.floor = t2;
}

void Show(job &j) {
    using namespace std;
    cout << j.name << ": $" << j.salary
         << " on floor " << j.floor << endl;
}
