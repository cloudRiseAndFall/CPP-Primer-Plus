#include "10-10-1.h"
#include <iostream>
#include <string>

Account::Account(std::string name, std::string account, double money)
{
    this -> name = name;
    this -> account = account;
    this -> money = money;
}
Account::~Account(){}

void Account::show() const
{
    std::cout << "Name: " << name << std::endl
              << "Account: " << account << std::endl
              << "Money: " << money << std::endl;
}
void Account::addMoney(long add)
{
    money += add;
}
void Account::subMoney(long sub)
{
    if (money - sub < 0)
        std::cout << "Money didn't below 0.\n";
    else
        money -= sub;
}