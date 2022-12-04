#include<iostream>
using namespace std;
int main()
{
    int n=5;
    cout<<"Enter the decimal number"<<endl;
    //cin>>n;
    int divide;
   int i=0;
   int bin[5];

    divide=n;
    while(divide!=0 && i<=5)
    {
        bin[i]=divide%2;
        divide=(n/2);
        n=divide;
        i++;
        
    }
    if(n<4)
    cout<<"binary sequence is"<<bin[1]<<bin[0]<<endl;
    if(5<=n<=8)
    cout<<"binary sequence is"<<bin[2]<<bin[1]<<bin[0]<<endl;

    


    return 0;
}


