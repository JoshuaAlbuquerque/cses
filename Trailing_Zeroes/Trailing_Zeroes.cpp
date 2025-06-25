#include<iostream>
using namespace std;

int main(){

    unsigned long long int n,i,count;

    cin >> n;
    count=0;
    i=5;
    while(n/i>=1){
        count= count + n/i;
        i= i*5;
    }
    cout << count;
    return 0;
}