#include<iostream>
#include<string>

using namespace std;

int main(){
    string input;
    cin >> input;

    int len= input.length();

    int count;
    int max_count=1;
    char current;

    current=input[0];
    count=0;
    for(int i=0;i<=len-1;i++)
    {
        if(current==input[i])
        {
            count++;
        }
        else
        {
           current=input[i];
            count=1;
        }   

        if(count>max_count)
        {
            max_count=count;
        }
    }

    cout << max_count;
    return 0;
}