//
//  main.cpp
//  Dynamic Initialization of Objects Using Constructors
//
//  Created by Shobhit Singh on 17/07/21.
//

//                                                   **Banking System For Intrest Return on Principal **


#include "iostream"
using namespace std;

class BankAccount
{
    float Principal;
    int Year;
    float RateofIntrest;
    int ReturnValue;
    
public:
    
    BankAccount(){};
    
    
    BankAccount(float p, int y, float r);
    
    
    BankAccount(float p, int y, int r);
    
    
    
    void show();
};


BankAccount::BankAccount(float p, int y, float r)
{
    Principal = p;
    Year = y;
    RateofIntrest = r;
    ReturnValue = Principal;
    for (int i = 0; i < y; i++)
    {
        ReturnValue = ReturnValue * (1+RateofIntrest);
    }
}

BankAccount::BankAccount(float p, int y, int r)
{
    Principal = p;
    Year = y;
    RateofIntrest = float(r)/100;
    ReturnValue = Principal;
    for (int i = 0; i < y; i++)
    {
        ReturnValue = ReturnValue * (1+RateofIntrest);
    }
}

void BankAccount::show()
{
    cout<<"Principal Amount was "<<Principal
    <<". Return value after "<<Year
    <<" years will be "<<ReturnValue<<endl;
}


int main(){
    BankAccount bd1, bd2, bd3;
    int p, y;
    float r;
    int R;
    
    
    cout<<"Enter the value of p y and r"<<endl;
    cin>>p>>y>>r;
    bd1 = BankAccount(p, y, r);
    bd1.show();

    cout<<"Enter the value of p y and R"<<endl;
    cin>>p>>y>>R;
    bd2 = BankAccount(p, y, R);
    bd2.show();
    return 0;
}
