#ifndef TTONE_H_
#define TTONE_H_

#include <string>

class Account
{
private:
    std::string name;
    std::string account;
    double money;
public:
    Account(std::string name = "no name", 
            std::string account= "no account", double money = 0.0);
    ~Account();
    void show() const;
    void addMoney(long add);
    void subMoney(long sub);
};

#endif