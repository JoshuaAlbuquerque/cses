#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    unsigned long long int * arr = (unsigned long long int *)malloc(n*sizeof(unsigned long long int));
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    unsigned long long int steps=0;
    for(int i=1;i<n;i++)
    {
        if(arr[i]<arr[i-1])
        {
            steps= steps + (arr[i-1]-arr[i]);
            arr[i]=arr[i-1];
        }
    }
    cout << steps;
    
    return 0;
}