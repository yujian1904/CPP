//C++数据类型及控制语句
#include "iostream"
#include "declare.h"

using namespace std;

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

    cout << "---------基本数据类型----------:\n";
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

    //复合数据类型声明、初始化、元素访问、遍历
    //1.基本数据类型数组及C string
    int i_array[ArraySize] = {81, 89, 24, 60, 87, 20, 41, 24, 71, 60};
    char m_string[StringSize] = "Hello World!";

    char *m_ptr = new char[StringSize];
    cout << "please enter a string:\n";
    ifstream inFile;
    inFile.open("../Basic/data.txt");
    if (!inFile.is_open())  // failed to open file
    {
        cout << "Could not open the file " << endl;
        cout << "Program terminating.\n";
        // cin.get();    // keep window open
        exit(EXIT_FAILURE);
    }
    inFile.get(m_ptr, StringSize).get();
    //cin.get(m_ptr, StringSize).get();
    //cin.get();
    cout << "your string is: " << m_ptr << endl;
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
    cout << "------使用循环遍历数组--------" << endl;
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
    count = 0;
    cout << "------遍历结构数组--------" << endl;
    for (student s: stu) {
        //displayStudent()接受一个const student *，所以应传递一个地址
        displayStudent(&s);
    }
    //ar2[r][c] == *(*(ar2+r)+c);
    for (int k = 0; k < StructSize; ++k) {
        cout << (pstu + k)->name << " is a " << (pstu + k)->age << " years old" << (pstu + k)->str_sex << endl;
    }

    //分支语句：if/switch，break,continue
    int choice = 0;
    cout << "Please enter a number(between 1-5):\n";
    cin >> choice;
    while (choice != 5) {
        switch (choice) {
            case 1:
                cout << "Your choice is 1" << endl;
                break;
            case 2:
                cout << "Your choice is 2" << endl;
                break;
            case 3:
                cout << "Your choice is 3" << endl;
                break;
            case 4:
                cout << "Your choice is 4" << endl;
                break;
            default:
                cout << "That's not a choice.\n";
        }
        cout << "Please enter a number(between 1-5):\n";
        cin >> choice;
    }
    //函数、实参、形参、重载、模板
    cout << "------函数、模板--------" << endl;
    char ch1 = 'G';
    char ch2 = 'D';
    m_swap(ch1, ch2);
    cout << "before swap(): ch1 = G, ch2 = D.\n";
    cout << "After swap(): ch1 = " << ch1 << ", ch2 = " << ch2 << endl;
    m_swap(stu[0], stu[1]);
    for (student s: stu) {
        //displayStudent()接受一个const student *，所以应传递一个地址
        displayStudent(&s);
    }
    int m_a = 11;
    int m_b = 22;
    m_swap(m_a, m_b);
    cout << "m_a is " << m_a << ", m_b is " << m_b << endl;

    char *str = testCharArray(m_string);
    cout << str << endl;
    inFile.close();
    ofstream outFile;
    outFile.open("../Basic/data.txt");
    outFile << "outfile test!" << endl;
    outFile.close();
    delete str;

    int code;
    //函数指针
    cout << "How many lines of code do you need? \n";
    cin >> code;
    cout << "Here's Betsy's estimate:\n";
    estimate(code, betsy);
    cout << "Here's Pam's estimate:\n";
    estimate(code, pam);

    return 0;
}

