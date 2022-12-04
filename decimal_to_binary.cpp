#include<iostream>
using namespace std;



//in this program we are converting decimal to binary 
//step 1-in any code we make we have to first understand the concept as in this it was understanding decimal to binary conversion
//step 2-then second step is to make a pattern on pen and paper what is the output needed and what input is available based on  how you would have solve that equation
//step 3-then ideally it is to understand other ways of calculating same which would be efficient soulution
//step 4-then it is about trying implementing that strategy due to mix and match of your logic in code
//step 5- then it is about understanding best technology available in market available today and implementing that -> serving that in industry

//caution - below code doesnt take care of bits 
int main()
{
    int n=5;
    int fix_n=5;
    cout<<"Enter the decimal number"<<endl;
    //cin>>n;  //cin is comment out as its input command and we need to understand the code in debugger mode
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

    // their is a pattern 

    if(fix_n<4)
    cout<<"binary sequence is"<<bin[1]<<bin[0]<<endl;
    if(5<=fix_n<=8)
    cout<<"binary sequence is"<<bin[2]<<bin[1]<<bin[0]<<endl;

    


    return 0;
}


