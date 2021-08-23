#include <iostream>
#include <cstdio>
#include <cmath>
#include <iomanip>
#include <cstring>
#include <ctime>

#define MAX 1000

using namespace std;

class Date {
public:
  int day, month, year;
  const int monthDays[12] = {
      31, 29, 31, 30, 31, 30,
      31, 31, 30, 31, 30, 31
  };

  void setDate(int d, int m, int y){
    this->day = d;
    this->month = m;
    this->year = y;
  }

  // Count total number of days
  int diff(Date dt1, Date dt2) {
    int x = 0;
    if (dt1.month == dt2.month) {
      if (dt1.day == dt2.day)
        cout << "E natal!" << endl;
      else if (dt1.day < dt2.day)
        cout << "E vespera de natal!" << endl;
      else if (dt1.day > dt2.day)
        cout << "Ja passou!" << endl;
    } else {
      x += monthDays[dt1.month-1] - dt1.day;
      for(int i = dt1.month; i< dt2.month; i++){
        x += monthDays[i];
      }
      x += 25;
      cout << "Faltam "<< x <<" dias para o natal!" << endl;
    }
  }
  };

  class Solve {
  public:
    Date date;
    Date christmas;


    void solve(int i, int j) {
    }

    void readcase() {

    }

    int binary(char ch) {
    }

    void solvecase() {
      christmas.setDate(25, 0, 2016);
      Date::diff(date, christmas);
    }

    void printcase() {

    }
  } solve;

  int main() {
    int month, day;
    while (scanf("%d %d", &month, &day) != EOF) {
      solve.date.setDate(day, month, 2016);
      solve.date.day = day;
      solve.date.month = month;
      solve.solvecase();
    }

  }
