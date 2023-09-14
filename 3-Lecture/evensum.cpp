#include<iostream>
using namespace std;

int main(){
    int i = 2;
    int sum = 0;

    int n;
    cout << "Enter the value of n" << endl;
    cin >> n;
    cout << "The Value of n is : " << n << endl;
    cout << "Sum of all even numbers before loop is : " << sum << endl;

    while(i<=n)
    {
        sum = sum + i;
        i = i + 2;
    }

    cout << "Sum of all even numbers after loop is : " << sum << endl;

    return 0;
}