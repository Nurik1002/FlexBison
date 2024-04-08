#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;

int IsLeapYear(int y){
    if ((y % 4 == 0 && y % 400 == 0) || (y % 4 == 0 && y % 100 !=0)) return 1;
    else return 0;
}

bool MonthDays(int k, int m, int y){

    int leapyear = IsLeapYear(y);
   
    if (1 <= m <= 12)
        {
        if ( m==2 )
        {   
            
            return 1 <= k <= 28 + leapyear;
        }
        else if ( m == 4 || m == 6 || m == 9 || m == 11)
        {
            return 1 <= k <= 30;
        }
        else if ( m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12) {
            return 1 <= k <=31;
        }
        else {
            return false;
        }

    }
    else return false;
}

void NextDate(int dd, int mm, int yy){
    int leapYear = IsLeapYear(yy);
    bool mdays = MonthDays(dd, mm, yy);
    if (mdays)
    {
        dd += 1;
        if (mm == 2 && dd > 28 + leapYear)
        {
            mm += 1;
            dd %=(28+leapYear);
        }
        else if ((mm == 4 || mm == 6 || mm == 9 || mm == 11) && dd > 30)
        {
            mm += 1;
            dd %= 30;
        }
        else if (dd > 31){
            if (mm == 12)
            {
                mm = 1;
                yy += 1;
            }
            else
            {
                mm +=  1;
            }
            dd %= 31;
        }
    cout << "Next date is : " << dd << "/" << mm << "/" << yy << endl;
    }
    else cout <<  "The date entered is incorrect!\n";

}

int main()
{
    int dd, mm, yy;

    cout << "Day : "; cin >> dd;
    cout << "Month : "; cin >> mm;
    cout << "Year : "; cin >> yy;

   // NextDate(dd, mm, yy);
    cout << MonthDays(dd, mm, yy) << endl;

    return 0;
}