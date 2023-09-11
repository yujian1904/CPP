//
// Created by yujian1904 on 2023/9/11.
//

#ifndef CPP_BRASS_H
#define CPP_BRASS_H

#include "string"

class Brass {
private:
    std::string fullname;//客户姓名
    long acctNum;//账号
    double balance;//当前余额
public:
    Brass(const std::string &s = "Nullbody", long an = -1, double bal = 0.0);

    void Deposit(double amt);

    virtual void Withdraw(double amt);

    double Banlance() const;

    virtual void ViewAcct() const;

    virtual ~Brass() {}
};

class BrassPlus : public Brass {
private:
    double maxLoan;//最高透支额度
    double rate;//透支贷款利率
    double owesBank;//当前透支额度
public:
    BrassPlus(const std::string &s = "Nullbody", long an = -1, double bal = 0.0, double ml = 500, double r = 0.11125);

    BrassPlus(const Brass &ba, double ml = 500, double r = 0.11125);

    virtual void ViewAcct() const;

    virtual void Withdraw(double amt);

    void ResetMax(double m) { maxLoan = m; }

    void ResetRate(double r) { rate = r; }

    void ResetOwes() { owesBank = 0; }
};

#endif //CPP_BRASS_H
