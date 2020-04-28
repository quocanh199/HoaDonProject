//
// Created by quocanh on 28/04/2020.
//

#ifndef HOADONPROJECT_DATE_H
#define HOADONPROJECT_DATE_H
#include <string>
using namespace std;

class Date
{
private:
    int month,day,year;
public:
    Date();
    Date(int month, int day, int year);
    void setDate(void);
    void setDate(int month, int day, int year);
    int getMonth() const;
    int getDay() const;
    int getYear() const;
    bool isEqual(const Date& d) const;
    bool isLess( const Date& d) const;
    bool isLeapYear(int year);
    const string& asString() const;
    void print(void) const;
    void userInput();
    bool ValidDate(int month,int day,int year);
};
#endif //HOADONPROJECT_DATE_H
