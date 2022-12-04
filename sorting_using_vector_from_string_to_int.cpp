//reference-https://www.youtube.com/watch?v=augknUhDI6Q

#include <cmath>
#include <cstdio>
#include <limits>
#include <vector>
#include <iostream>
#include <algorithm>
#include <sstream>

//what is sstream library

//learning -while entering string in c++ we use getline and while take character we use char

//the magic ingredient to sort using vector is one line command sort(v.begin(),v.end());

//in coading test we have to take care of taking data and in visual studio code we have to avoid that thing durring debugging phase before writing final code

//input
//5
//8 6 9 2 1

//output
//12689




using namespace std;

int main(){
    string n,user_input;
    getline(cin,n);
    getline(cin,user_input);

    stringstream ss (user_input);
    
    //using vector
    vector<int> v(stoi(n));
    int v_size=v.size();

    int x;
    for(int i=0;i<v_size;i++)
    {
        ss>>x;
        v[i]=x;
    }

    //sorting receipie
    sort(v.begin(),v.end());

    for(int i=0;i<v_size;i++){
        cout<<v.at(i)<<"";
    }
    return (0);
}