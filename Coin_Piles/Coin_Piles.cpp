#include<iostream>
using namespace std;

int max(unsigned long long int a,unsigned long long int b){
    return (a>b)? a:b;
}

int min(unsigned long long int a,unsigned long long int b){
    return (a<b)? a:b;
}

int main(){
    unsigned long long int t,a,b,total;

    cin >> t;
    while(t>0)
    {
        cin >> a >> b;
        total = a+b;
        if((total%3==0) && (max(a,b) <= 2* min(a,b)))
        {
            cout << "YES" << "\n";
        }  
        else
            cout << "NO" << "\n";

        t--;
    }
    return 0;
}