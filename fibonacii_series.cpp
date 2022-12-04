#include<iostream>
#include<vector>

using namespace std;



int main()
{
    int n=7;
    //cin>>n;
    vector<int>a;

    for(int i=0;i<n;i++){
        if((i==0) || (i==1)){
            if(i==0 || n==0)
            {
            a.push_back(0);
            cout<<a[i];
            
            continue;
            }
            else if(i==1 || n==1)
            {
            a.push_back(1);
            cout<<a[i];
            
            continue;
            }
        }
        a.push_back(a[i-1]+a[i-2]);
        cout<<a[i];
    }
    return 0;
}

/*
int main()
{
    int n=7;
    //cin>>n;

    vector<int> a;



   // a[0]=0;  //https://stackoverflow.com/questions/2346806/what-is-a-segmentation-fault
    //to fix above situation u need to write

    a[0].push_back(0);


    a[1]=1;

    if(n==0){cout<<n<<endl;}
    if(n==1){cout<<(n-1)<<""<<n<<endl;}
    else{
        for(int i=0;i<n;i++){
            a[i]=a[i-1]+a[i-2];
            cout<<a[i];
        }
    }

return (0);
}*/