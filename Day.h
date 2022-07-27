#ifndef DAY_H
#define DAY_H
#include <string>
using std::string;

class Day
{
  private:
      string day; //This will hold the objects current day
  public:
    Day(); //Default ctor will set to SUNDAY
    Day(string d);
    ~Day();
    static string weekDays[7]; //This will give us the day we are on
    string getDay() const; // retreives the day
    string prevDay() const;
    string nextDay() const;
    void addDays(int nDays); // nDays is how many days we will shift
    void setDay(string d);

};

#endif // DAY_H
