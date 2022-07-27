/** Chapter 1 Access
 *
 *  This program will set the day for the user.
 *  Program will then attempt to add an amount of
 *  days and figure out the new day!
 *
 *  By: Sabas Segovia
 *  ID: 1264184
 */

//We will be using 2cpp libraries and our Day header
#include <iostream>
using std::cout;
using std::endl;

#include <string>
using std::string;

#include "Day.h"

int main()
{
  //We assign a day to myDay, yourDay
  Day myDay("Monday");
  Day yourDay("Sunday");

  cout << "Testing PREV day and NEXT day: " << endl << endl;

  //Tests myDay for current, previous,  next days
  cout << "My day is: " << myDay.getDay() << endl;
  cout << "The yesterday of  my day is: " << myDay.prevDay() << endl;
  cout << "The tomorrow of my day is: " << myDay.nextDay() << endl;
  cout << endl;

  //Tests yourDay for current, previous, next
  cout << "Your day is: " << yourDay.getDay() << endl;
  cout << "The yesterday of your day is: " << yourDay.prevDay() << endl;
  cout << "The tomorrow of your day is: " << yourDay.nextDay() << endl;
  cout << endl;

  //We will begin to test the method where we add an amount of days
  //to each of myDay and yourDay
  cout << "*****************************************" << endl;
  cout << "=============TESTING ADD DAY=============" << endl;
  cout << "*****************************************" << endl;

  cout << "Adding 4 to my day, which is Monday.\nI expect Friday...";
  myDay.addDays(4);
  cout << "...result: My day is " << myDay.getDay() << endl;
  cout << endl;

  cout << "Adding 9 to your day which is Sunday, I expect Tuesday...";
  yourDay.addDays(9);
  cout << "...result: My day is " << yourDay.getDay() << endl;


}
