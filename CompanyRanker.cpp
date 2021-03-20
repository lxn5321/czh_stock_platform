//
// Created by Cao Zongheng on 3/20/21.
//

#include "CompanyRanker.h"


double CompanyRanker::getCompanyRank(Company c, size_t a){
    //目前的思路是 根据不同的账户：
    //1 保守型账户，倾向于市盈率高的股票
    //2 成长型账户，倾向于 高利润增长率，高收入增长率，较低的市盈率。
    //rank根据 一个组合函数 除以目前的市值得到倍数。对于市值小的公司有惩罚效应
    return 0.0;
}
