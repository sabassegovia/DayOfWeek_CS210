#include <string>
using std:: string;
#include "Day.h"


string Day::weekDays[7] = {"Monday", "Tuesday",
                             "Wednesday", "Thursday",
                             "Friday", "Saturday",
                             "Sunday"};

Day::Day()
{
  day = "Sunday";
}
Day::Day(string d)
{
  day = d;
}
string Day::getDay() const
{
  return day;
}
string Day::prevDay() const
{
  int i;
  for(i = 0; i < 7; i++)
    if(weekDays[i] == day) break;

  if(day == "Monday") return "Sunday";
  return weekDays[(i-1)];
}

string Day::nextDay() const
{
  int i;
  for(i = 0; i < 7; i++)
    if(weekDays[i] == day) break;

  if(day == "Sunday") return "Monday";
  return weekDays[i+1];
}

void Day::addDays(int nDays)
{
  int i;
  for(i = 0; i < 7; i++)
    if(weekDays[i] == day) break;

  day = weekDays[(i+nDays)%7];
}
void Day::setDay(string d)
{
 day = d;
}

Day::~Day()
{
    //dtor
}
