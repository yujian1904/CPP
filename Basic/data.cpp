//C++数据类型及控制语句
#include "iostream"
#include "declare.h"

using namespace std;

int main() {
    //基本数据类型声明、初始化、输入、输出
    //整型
    bool ft = true;
    char ch = 'B';
    unsigned char uch = 156;
    short si = -18;
    unsigned short usi = 16;
    int i = -64;
    unsigned int ui = 85;
    long li = 92L;
    unsigned long uli = 39UL;
    long long lli = 168LL;
    unsigned long long ulli = 468ULL;
    //浮点型
    float fl = 2.78f;
    double dou = 3535.62;
    long double ld = 43245.25L;

    cout << "基本数据类型输出:\n";
    if (ft) {
        cout << sizeof(bool) << " Byte " << "bool(True):" << ft << endl;
        ft = false;
        cout << sizeof(bool) << " Byte " << "bool(False):" << ft << endl;
        cout << sizeof(char) << " Byte " << "char:" << ch << endl;
        cout << sizeof(unsigned char) << " Byte " << "unsigned char:" << (int) uch << endl;
        cout << sizeof(short) << " Byte " << "short:" << si << endl;
        cout << sizeof(unsigned short) << " Byte " << "unsigned short:" << usi << endl;
        cout << sizeof(int) << " Byte " << "int:" << i << endl;
        cout << sizeof(unsigned int) << " Byte " << "unsigned int:" << ui << endl;
        cout << sizeof(long) << " Byte " << "long:" << li << endl;
        cout << sizeof(unsigned long) << " Byte " << "unsigned long:" << uli << endl;
        cout << sizeof(long long) << " Byte " << "long long:" << lli << endl;
        cout << sizeof(unsigned long long) << " Byte " << "unsigned long long:" << ulli << endl;
    }
    cin.get(ch);
    cout.put(ch);
//
//    cout << "char has " << sizeof(char) << " bytes" << endl;
//    cout << "short has " << sizeof(short) << " bytes" << endl;
//    cout << "int has " << sizeof(int) << " bytes" << endl;
//    cout << "long has " << sizeof(long) << " bytes" << endl;
//    cout << "long long has " << sizeof(long long) << " bytes" << endl;

    //复合数据类型声明、初始化、元素访问、遍历
    //1.基本数据类型数组及C string
    //2.结构、结构数组
    //3.指针
    //4.enum
    //5.union

    //控制语句：循环（for/while/do...while/基于范围的for)
    //遍历数组

    //分支语句：if/switch，break,continue

    //函数、实参、形参、重载、模板
}