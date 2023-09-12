//
// Created by dcfhospitalcgb on 2023/9/12.
//

#ifndef CPP_ACCTABC_H
#define CPP_ACCTABC_H

#include "iostream"
#include "string"

class AcctABC {
private:
    std::string fullName;
    long acctNum;
    double balance;
protected:
    struct Formatting {
        std::ios_base::fmtflags flag;
        std::streamsize pr;
    };

    const std::string &getFullName() const { return fullName; }

    long getAcctNum() const { return acctNum; }

    Formatting SetFormat() const;

    void Restore(Formatting &f) const;

public:
    AcctABC(const std::string &s = "Nullbody", long an = -1, double bal = 0.0);

    void Deposit(double amt);

    virtual void Withdraw(double amt) = 0;

    double getBalance() const { return balance; }

    virtual void ViewAcct() const = 0;

    virtual ~AcctABC();
};

class Brass : public AcctABC {
private:

public:
    Brass(const std::string &s = "NullBody", long an = -1, double bal = 0.0) : AcctABC(s, an, bal) {}

    virtual void WithDraw(double amt);

    virtual void ViewAcct() const;

    virtual ~Brass();
};

class BrassPlus : public AcctABC {
private:
    double maxLoan;
    double rate;
    double owesBank;

public:
    BrassPlus(const std::string &s = "Nullbody", long an = -1, double bal = 0.0, double ml = 500, double r = 0.10);

    BrassPlus(const Brass &ba, double ml = 500, double r = 0.1);

    virtual void ViewAcct() const;

    virtual void Withdraw(double amt);

    void ResetMax(double m) { maxLoan = m; }

    void ResetRate(double r) { rate = r; }

    void ResetOwer() { owesBank = 0; }
};


#endif //CPP_ACCTABC_H
