/**
Simple ATM withdrawal with max withdrawal of $500.
Number withdrawal is $300.
If withdrawal is between $301 - $499; there is 4% service charge.

*/

#include <iostream>

using namespace std;

int main()
{
    double  withDrawal = 0.0, serviceCharge = 4, maxWithDrawal = 500;
    double availableBalance = 0.0;

    double startingBalance = 1000;
    double currentBalance = 1000, povertyTaxes = 25;
    string name = "Joseph";

    serviceCharge = serviceCharge / 100;



    cout << "Welcome, "<<name<<" "<< "$"<<availableBalance<<endl;
    cout<<"How much would you like to with draw today?: ";
    cin>>withDrawal;


    if (withDrawal > 300 && withDrawal < 500)
    {
        //serviceCharge of 4%
        currentBalance = currentBalance -((withDrawal * serviceCharge));
        cout<<"Current Balance is: "<<"$"<<currentBalance;

    }

    else if (withDrawal >= maxWithDrawal)
    {
        //withDrawal up to $500
        cout<< "Sorry, our max is: "<<"$"<<maxWithDrawal<<endl;
    }


    else
    {

        cout<<"Number should be greater than 300!"<<endl;
    }

    return 0;
}
