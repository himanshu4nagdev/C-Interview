#include<vector>
#include<iostream>

using namespace std;
int solution(vector<int> &S) {
    int max_sum = 0;
    int current_sum = 0;
    int positive = 0;
    for (size_t i = 0; i < S.size(); ++i) {
        int item = S[i];
        if (item < 0) {
            if (max_sum < current_sum) {
                max_sum = current_sum;
                current_sum = 0;
            }
        } else {
            positive = 1;
            current_sum += item;
        }
    }
    if (current_sum > max_sum) {
        max_sum = current_sum;
    }
    if (positive) {
        return max_sum;
    }
    return -1;
}


int main()
{
    vector<int>vect;
    vect.push_back(10);
    vect.push_back(20);
    vect.push_back(-1000);
    vect.push_back(70);
    vect.push_back(1000);
    vect.push_back(1000000);
    int max_sum;
    max_sum=solution(vect);
    cout<<max_sum;
    return 0;
}