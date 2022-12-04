
//reference- https://www.youtube.com/watch?v=9bl63TSJRlw&list=PLcNrM9WvWavJ8P0WXqLinzexvMJRGcE2g&index=17
#include <bits/stdc++.h>
#include<string>
#include<iostream>
#include<sstream>
#include<cstdio>

using namespace std;
//in this code the string that can't be converted to integer will print the message as bad string and other will print as it si=
int main()
{
    string S;
    getline(cin,S);

    int n;
    try{
        n=stoi(S); //Try to convert
    }

    catch (const invalid_argument& e){
        cout<<"Bad String"<<endl;
        return -1;
     }

     cout<<n<<endl; //otherwise print integer

     return 0;
}