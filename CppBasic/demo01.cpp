//C++简单类型常量、变量声明、赋值及访问
#include "iostream"
#include "climits"
using namespace std;

int main()
{
    //整型
    char cha='B';
    unsigned char chb;
    short si=-18;
    unsigned short usi=16;
    int i=-64;
    unsigned int ui=85;
    long li=92L;
    unsigned long uli=39UL;
    long long lli=168LL;
    unsigned long long ulli=468ULL;
    cout<<"char has "<<sizeof(char) <<" bytes"<<endl;
    cout<<"short has "<<sizeof(short) <<" bytes"<<endl;
    cout<<"int has "<<sizeof(int) <<" bytes"<<endl;
    cout<<"long has "<<sizeof(long) <<" bytes"<<endl;
    cout<<"long long has "<<sizeof(long long) <<" bytes"<<endl;
    cout << "max char is " << CHAR_MAX<<endl;
    cout << "max short is " << SHRT_MAX<<endl;
    cout << "max int is " << INT_MAX<<endl;
    cout << "max long is " << LONG_MAX<<endl;
    cout << "max long long is " << LLONG_MAX<<endl;

    cout << oct;
    cout << usi << endl;
    cout << lli << endl;
    cout << hex;
    cout << usi << endl;
    cout << lli << endl;

    cout << "Enter a char: "<< endl;
    cin >> chb;
    cout.put(chb);

    bool istrue = false;
    if (istrue)
        cout.put('d');
    else
        cout << "\nbool is false"<< endl;
    float fl = 2.78f;
    double dou = 3535.62;
    long double ld = 43245.25L;
    cout << fl << endl;
    cout << dou << endl;
    cout << ld << endl;

    return 0;
}