#include<iostream>
using namespace std;

int main(){
    unsigned long long int n,ans,base;

    cin >> n;
    ans=1;
    base=2;
    
     while (n > 0) {
        if (n % 2 == 1) {
            ans = (ans * base) % 1'000'000'007;
        }
        base = (base * base) % 1'000'000'007;
        n = n / 2;
    }
    cout << ans;
    return 0;
}