#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
#define ll long long

int main(){
    string s;
    cin>>s;
    sort(s.begin(), s.end());
    //cout<<s<<'\n';
    ll len = s.length();
    char c = s[0];
    ll count = 1;
    ll single = 0;
    ll flag = -1;
    string s1 = "";
    s += ' ';
    for(ll i = 1;i<len+1;++i){
        if(c == s[i]){
            ++count;
        }
        else{
            single += count%2;
            for(ll j = 0;j<count/2;++j){
                s1 += s[i-1];
                //cout<<s1<<'\n';
            }
            if(count%2){
                flag = i-1;
            }
            c = s[i];
            count = 1;
        }
    }
    // single += count%2;
    // cout<<single;
    if(single>1){
        cout<<"NO SOLUTION";
    }
    else if(single == 1){
        // if(s[0] == s[len-1]){
        //     cout<<s;
        // }
        // else if(len%2 == 1){
            string s2 = "";
            s2 += s1 + s[flag];
            reverse(s1.begin(), s1.end());
            s2 += s1;
            cout<<s2;
        // }
        // else{
        //     cout<<"NO SOLUTION";
        // }
    }
    else{
        string s2 = "";
            s2 += s1;
            reverse(s1.begin(), s1.end());
            s2 += s1;
            cout<<s2;
    }

}