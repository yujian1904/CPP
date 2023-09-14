#include "declare.h"
#include "iostream"


//显式实例化
template void m_swap<int>(int &a, int &b);

//显式具体化
template<>
void m_swap<student>(student &sa, student &sb) {
    int temp_i;
    temp_i = sa.age;
    sa.age = sb.age;
    sb.age = temp_i;
}

void displayStudent(const student *pstu) {
    cout << pstu->name << " is " << pstu->str_sex << ". ";
    if (pstu->str_sex == man)
        cout << "His age is " << pstu->age << endl;
    else
        cout << "Her age is " << pstu->age << endl;
}


char *testCharArray(const char *ptr) {
    char *str = new char[40];
    int length = strlen(ptr);
    strncpy(str, ptr, length);
    str[length] = '\0';//strncpy()不会在字符串末尾自动添加'\0'
    char str2[20] = " hello yujian";
    strncat(str, str2, strlen(str2));
    cout << str2 << endl;

    return str;
}

double betsy(int lns) {
    return 0.05 * lns;
}

double pam(int lns) {
    return 0.03 * lns + 0.0004 * lns * lns;
}

void estimate(int lines, double (*pf)(int)) {
    using namespace std;
    cout << lines << " lines will take ";
    cout << (*pf)(lines) << " hour(s)\n";
}