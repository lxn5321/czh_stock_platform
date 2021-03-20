//
// Created by Cao Zongheng on 3/20/21.
//

#ifndef CZH_STOCK_PLATFORM_COMPANYRANKER_H
#define CZH_STOCK_PLATFORM_COMPANYRANKER_H

#include "Investments.h"

class CompanyRanker {
public:
    double getCompanyRank(Company c, size_t a);
};

enum AccountType : size_t{
    AnchoredYoutube,  //锚定youtube老师
    Conservative,     //保守 对于大PE低容忍
    Growing,          //成长 喜欢增长率
};


#endif //CZH_STOCK_PLATFORM_COMPANYRANKER_H
