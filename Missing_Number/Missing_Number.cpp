#include<iostream>
using namespace std;

int main(){
    unsigned long long int n,sum,temp,max_sum,answer;

    cin >> n;

    sum=0;
    for(unsigned long long int i=0;i<n-1;i++)
    {
        cin >> temp;
        sum=sum + temp;
    }

    max_sum=(n*(n+1)/2);

    answer=max_sum-sum;

    cout << answer;

    return 0;
}