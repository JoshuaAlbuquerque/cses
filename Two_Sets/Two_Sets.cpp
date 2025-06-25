#include<iostream>
#include <stack>

using namespace std;

int main(){
    unsigned long long int i,n,len1,len2,sum1,sum2,sum;
    
    stack<unsigned long long int> st1,st2;
    cin >> n;


    if(n<=2)
    {
        cout << "NO";
        return 0;
    }

    sum=n*(n+1)/2;

    if(sum%2!=0){
        cout<< "NO";
        return 0;
    }

    sum1=sum2=0;
    len1=len2=0;
    for(i=n;i>=1;i--)
    {
        if(sum1<=sum2)
        {
            st1.push(i);
            sum1=sum1+i;
            len1++;
        }
        else{
            st2.push(i);
            sum2=sum2+i;
            len2++;
        }
    }


     if(sum1!=sum2)
     {
        cout << "NO";
     }
     else
     {
        cout << "YES" << "\n";
        cout << len1 << "\n";
        while(!st1.empty())
        {
            cout << st1.top() << " ";
            st1.pop();
        }
        cout << "\n" <<len2 << "\n";
        while(!st2.empty())
        {
            cout << st2.top() << " ";
            st2.pop();
        }
     }
    return 0;
}