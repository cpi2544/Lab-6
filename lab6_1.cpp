#include<iostream>
using namespace std;

int main(){
    int i ,even = 0 ,odd = 0;
    cout << "Enter an integer: ";
    cin >> i;
    while (i != 0)
    {
         cout << "Enter an integer: ";
         cin >> i;
         if  (i%2 == 0)
         {
             even += 1;
         }else{
             odd += 1;
         }

    }
    cout << "#Even numbers = " << even <<"\n";
    cout << "#Odd numbers = " << odd;
    return 0;
}
