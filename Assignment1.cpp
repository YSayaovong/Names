// ****************************************************************
// Assignment1.cpp

// Welcome to Ideal Weight Calculation Program
// ****************************************************************

#include <iostream>
using namespace std;

int main() {

    int feet, inches;
    int weight;
    char gender;
    cout << "enter your gender m/f";
    cin >> gender;
    cout << "enter the height in feet and inches";
    cin >> feet;
    cin >> inches;
    cout << gender;
    if (gender == 'f')
    {
        if (feet == 5 && inches == 0)
        {
            weight = 100;
        }

        if (gender == 'male')
        {
            if (feet == 5 && inches == 0)
            {
                weight = 106;
            }

            cout << "weight";
            cout << weight;
        }
    }
    cout << "gender\t\t and weight\t\t";
    cout << gender;
    cout << "\t\t";

    return 0;
}