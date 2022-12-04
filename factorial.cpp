//factorial = 5 x 4 x 3 x 2 x1 = 1x2x3x4x5
/**
#include<iostream>
using namespace std;

int main()
{
    int factorial , n;
    cout<<"Enter the factorial you want to solve"<<endl;
    cin>>n;
    factorial=1;
    for(int i=1;i<factorial<=n;n--)
    {
        factorial=factorial*i;
        cout<<"%d x %d"<<&factorial<<&i<<endl;
    
    }
    return 0;
}*/


#include <iostream>
using namespace std;

int main() {
    int n;
    long factorial = 1.0;

    cout << "Enter a positive integer: "<<ends;
    cin >> n;

    if (n < 0)
        cout << "Error! Factorial of a negative number doesn't exist.";
    else {
        for(int i = 1; i <= n; ++i) {
            factorial *= i;
        }
        cout << "Factorial of " << n << " = " << factorial;    
    }

    return 0;
}