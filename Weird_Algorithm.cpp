#include <iostream>
using namespace std;


int answer(int n){
    if(n==1)
        return 1;
    else if(n%2==0)
        return n/2;
    else
        return 3*n+1;
}
int main(){
    int n;
    cin>>n;

    while(n!=1)
    {
        cout << n << " ";
        n=answer(n);
    }
    cout << n << " ";
    return 0;
}
