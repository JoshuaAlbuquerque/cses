#include<iostream>
using namespace std;

int main(){
    unsigned long long int n;

    cin >> n;

    if(n==1)
    cout << 1;
    else if (n==2 || n==3)
    cout << "NO SOLUTION";
    else
    {
        for(unsigned long long int i=2;i<=n;i=i+2)
        {
            cout<<i << " ";
        }
        for(unsigned long long int i=1;i<=n;i=i+2)
        {
            cout<<i << " ";
        }
        
    } 
    return 0;
}