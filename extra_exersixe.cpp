// This exercise is solved base on C++
#include <iostream>
#include <iomanip>
#include <math.h>
#include <string.h>

using namespace std;

#define MEGA 1000000
#define KILO 1000

string suffixWithUnit(double number)
{
    string result;
    int temp = ((int)number) / 100;
    if (number >= 1000000)
    {
        result = to_string(number / MEGA) + " Mega";
    }
    else if (number >= 1000)
    {
        result = to_string(number / KILO);

        while ((result[result.length() - 1]) == '0')
        {
            result.pop_back();
        }
        result = result + " Kilo";
    }
    else
    {
        result = to_string(int(number));
    }
    return result;
}

int main()
{
    // test case
    cout << "OUT PUT : " << endl;
    cout << suffixWithUnit(123) << endl;
    cout << suffixWithUnit(1234) << endl;
    cout << suffixWithUnit(12345) << endl;
    cout << suffixWithUnit(1234567) << endl;
    cout << suffixWithUnit(12345678) << endl;
}
