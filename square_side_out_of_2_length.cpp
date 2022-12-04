// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

#include<iostream>
#include<algorithm>

using namespace std;

int solution(int A, int B) {
    // write your code in C++14 (g++ 6.2.0)
    int square_side=0;
    square_side=max(square_side,B/4);

    if(A>=(B/3))
       square_side=max(square_side,B/3); 
    

     if(A>=2*(B/2))
       square_side=max(square_side,B/2);

    if(B>=(A/3))
       square_side=max(square_side,A/3);


    square_side=max(square_side,A/4);

    return square_side;

    }

int main(){

int max_length;
max_length=solution( 13, 11);

cout<<max_length;

    return 0;
}


