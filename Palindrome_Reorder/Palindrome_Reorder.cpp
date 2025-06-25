#include<iostream>
#include<string>
#include <unordered_map>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    unsigned long long int len,i,j;
    string input;
    unordered_map<char, int> alphabets;
    char temp;

    cin >> input;
    len =input.length();
    string output(len,' ');

    for(i=0;i<len;i++)
    {
        alphabets[input[i]]++;  
    }

    vector<pair<char, int>> freqList(alphabets.begin(), alphabets.end());

    sort(freqList.begin(), freqList.end(), [](const auto &a, const auto &b) {
        return a.second > b.second;
    });

    int counter=0;
    for (auto& p : freqList) {
     if(p.second%2!=0)
     {
        counter++;
        temp= p.first;
     }
    }

    if(counter>1)
    {
        cout << "NO SOLUTION";
        return 0;
    }

    if(counter==1)
    {
        output[len/2]=temp;
        for (auto& p : freqList) {
        if (p.first == temp) {
            p.second--; 
            break;
        }
    }
    }
    j=0;

    for ( i = 0; i < len/2; i++)
    {
        pair<char, int>& alphabet = freqList[j];
        
            output[i]=alphabet.first;
            output[len-i-1]=alphabet.first;

            alphabet.second=alphabet.second -2;
            
            if(alphabet.second<=0)
            {
                j++;
            }

    }
    
    cout << output;
    return 0;
}