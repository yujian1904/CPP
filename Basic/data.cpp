//C++数据类型及控制语句
#include "iostream"
#include "string"
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

void displayStudent(const student *);

template<typename T>
void swap(const T &a, const T &b);

int main() {
    //基本数据类型声明、初始化、输入、输出
    bool ft = true;
    char ch = 'B';
    unsigned char uch = 156;
    short si = -18;
    unsigned short usi = 16;
    int m_i = -64;
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
        cout << sizeof(int) << " Byte " << "int:" << m_i << endl;
        cout << sizeof(unsigned int) << " Byte " << "unsigned int:" << ui << endl;
        cout << sizeof(long) << " Byte " << "long:" << li << endl;
        cout << sizeof(unsigned long) << " Byte " << "unsigned long:" << uli << endl;
        cout << sizeof(long long) << " Byte " << "long long:" << lli << endl;
        cout << sizeof(unsigned long long) << " Byte " << "unsigned long long:" << ulli << endl;
        ios_base::fmtflags fmtflags = cout.setf(ios_base::fixed, ios_base::floatfield);
        streamsize sz = cout.precision(3);
        cout << sizeof(float) << " Byte " << "float:" << fl << endl;
        cout << sizeof(double) << " Byte " << "double:" << dou << endl;
        cout << sizeof(long double) << " Byte " << "long double:" << ld << endl;
        cout.setf(fmtflags, ios_base::floatfield);
        cout.precision(sz);

    }
//    cin.get(ch);
//    cout.put(ch);

    //复合数据类型声明、初始化、元素访问、遍历
    //1.基本数据类型数组及C string
    int i_array[ArraySize] = {81, 89, 24, 60, 87, 20, 41, 24, 71, 60};
    char m_string[StringSize] = "Hello World!";
    //2.结构、结构数组
    Name my_name = {"yu", "jian"};
    student stu[StructSize] = {
            {"yujian",     man,   20},
            {"baicai",     woman, 30},
            {"yanan",      woman, 27},
            {"xukaixin",   man,   30},
            {"huozhihang", man,   29}
    };
    //3.指针
    Name *pn = &my_name;
    student *pstu = stu;
    //4.enum
    Week dayOfWeek = Saturday;
    //5.union
    un my_union;
    my_union.ll = 324;
    cout << sizeof(my_union) << endl;
    //控制语句：循环（for/while/do...while/基于范围的for)
    //遍历数组
    cout << ArraySize << " items of array(use for{}):\n";
    for (int i = 0; i < ArraySize; ++i) {
        cout << i_array[i] << "   ";
        if ((i + 1) % 5 == 0)
            cout << "\n";
    }
    cout << ArraySize << " items of array(use while{}):\n";
    int count = 0;
    while (count < ArraySize) {
        cout << i_array[count] << "   ";
        if ((count + 1) % 5 == 0)
            cout << "\n";
        count++;
    }
    cout << ArraySize << " items of array(use do...while{}):\n";
    count = 0;
    do {
        cout << i_array[count] << "   ";
        if ((count + 1) % 5 == 0)
            cout << "\n";
        count++;
    } while (count < ArraySize);
    cout << ArraySize << " items of array(use for(type x : array){}):\n";
    count = 0;
    for (int x: i_array) {
        cout << "[" << count << "]:" << x << "   ";
        if ((count + 1) % 5 == 0)
            cout << "\n";
        count++;
    }
    //遍历结构数组
    for (student s: stu) {
        displayStudent(&s);
    }

    //分支语句：if/switch，break,continue

    //函数、实参、形参、重载、模板
}

void displayStudent(const student *pstu) {
    cout << pstu->name << " is " << pstu->str_sex << ". ";
    if (pstu->str_sex == man)
        cout << "His age is " << pstu->age << endl;
    else
        cout << "Her age is " << pstu->age << endl;
}

template<typename T>
void swap(const T &a, const T &b) {
    T temp;
    temp = a;
    a = b;
    b = temp;
}