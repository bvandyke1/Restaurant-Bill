/* Restaurant Bill.cpp
*  Brandon VanDyke
*  Date last updated: 02/04/2019
* Purpose: Display the cost of a meal, plus tax and tip
*/

#include <iostream>

using namespace std;

int main()
{
    float MealCharge = 25.67; //declare MealCharge as float, assign value
    float TaxCharge = MealCharge * 0.0675; //declare TaxCharge as float, assign value
    float TipCharge = (MealCharge + TaxCharge) * 0.20; //declare TipCharge as float, assign value
    float TotalCharge = MealCharge + TaxCharge + TipCharge; //declare TotalCharge as float, assign value
    
    cout << "The meal costs $" << MealCharge << endl; //display cost of meal
    cout << "The tax is $" << TaxCharge << endl; //display tax charges
    cout << "The tip is $" << TipCharge << endl; //display after-tax tip
    cout << "Your total is $" << TotalCharge << endl; //display the total bill

    return 0;
}


