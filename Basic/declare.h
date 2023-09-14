//
// Created by yujian1904 on 2023/9/12.
//

#ifndef CPP_DECLARE_H
#define CPP_DECLARE_H
//C++数据类型及控制语句
#include "iostream"
#include "fstream"
#include "string"
#include "cstring"
//#include "declare.h"

using namespace std;
const int StringSize = 40;
const int ArraySize = 10;
const int StructSize = 5;
enum Sex {
    man, woman
};
enum Week {
    Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday
};
struct Name {
    string fristName;
    string lastName;
};
struct student {
    string name;
    Sex str_sex;
    int age;
};
union un {
    char a;
    int b;
    long long ll;
};

//template<typename T>
//void m_swap(T &a, T &b);

template<typename T>
void m_swap(T &a, T &b) {
    T temp;
    temp = a;
    a = b;
    b = temp;
}

//显式具体化
template<>
void m_swap<student>(student &sa, student &sb);


void displayStudent(const student *);


char *testCharArray(const char *ptr);

void estimate(int lines, double (*pf)(int));

double betsy(int);

double pam(int);

#endif //CPP_DECLARE_H
