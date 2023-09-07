//
// Created by dcfhospitalcgb on 2023/9/7.
//

#ifndef CPP_STOCK00_H
#define CPP_STOCK00_H

#include "string"

class Stock {
private:
    std::string company;
    long shares;
    double share_val;
    double total_val;

    void set_tot() { total_val = shares * share_val; }

public:
    void acquire(const std::string &co, long n, double pr);

    void buy(long num, double price);

    void sell(long num, double price);

    void update(double price);

    void show();
};


#endif //CPP_STOCK00_H
