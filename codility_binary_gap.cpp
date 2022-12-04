//you can try this test at link https://app.codility.com/programmers/lessons/1-iterations/

//you can read about concept of binary gap on that challenge only

//you can watch the explaination from the video Code Traiding- Binary Gap in Python and c++ codility solution lesson 1

//what is vector in c++
//it is the dynamic array that is flexible you dont need to mention size of it in advance
//it has its own library vector
//it is introduced in 2011 and is a part of standard libarary template (STL)
//it is also get print in same way as for loop

#include<vector>
#include<iostream>

using namespace std;

int solution(int N){

    vector<int> v;
    //converting decimal to binary using vector
    while(N>0)
    {
        v.push_back(N%2);
        N/=2;
    }

    int b=0,maxb=0;  // b is the count for binary gap between numbers

    for(int i=v.size()-1;i>=0;i--)
    {
        if(v[i]==0) 
            b++;
        else if(v[i]==1){
            maxb=max(maxb,b);b=0;}
    }

return (maxb);
}


int main()
{
    int max_number;
    max_number=solution(67);
    cout<<"maximum number of binary gap is"<<max_number<<endl;
    
}