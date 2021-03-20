//
// Created by Cao Zongheng on 3/20/21.
//

#ifndef CZH_STOCK_PLATFORM_INVESTMENTS_H
#define CZH_STOCK_PLATFORM_INVESTMENTS_H

#include <string>
#include "CompanyRanker.h"

using namespace std;


//投资对象 比如某一个股票  某一个bonds
class Investments {
public:
    string name;
    double unit_price;  //单位价格
    double hold;  //持有数

    Investments(string x, double y, double z): name(x), unit_price(y), hold(z){}
    Investments(){}

};

class Company{
public:

    Company(string name, double cap, double pro, double ass, double rg, double pe = 0.0,
            double eps = 0.0, int risk = -1): company_name(name), market_cap(cap), profit(pro),
            assets(ass), PE(pe), revenue_growth(rg),eps(eps), risk_rank(risk)
    {
        if(PE == 0.0){
            PE = market_cap / profit;
        }
        if(eps == 0.0){
            eps = assets / market_cap;
        }
        if(risk_rank == -1){   //risk可以如何定义?

        }
    }

    Company(){}

    string company_name;
    double market_cap;   //市值
    double profit;   //盈利
    double assets;   //资产总额
    double PE;  //市盈率
    double revenue_growth;  //收入增长
    double eps;  //每股收益
    int risk_rank;  //风险等级

};

class Stock : public Investments{
public:
    Company company;

    Stock(Company company1, string invest_name, double price, double hold) :
    company(company1), Investments(invest_name, price, hold){}

    Stock(){}
};

class Bonds : public Investments{
public:
    string bonds_name;
};

class Coin : public Investments{
public:
    string coin_name;
};


#endif //CZH_STOCK_PLATFORM_INVESTMENTS_H
