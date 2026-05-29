#include <iostream>
#include <algorithm>
using namespace std;
#define ll long long
 
ll pot(ll n){
    if(n == 0){
        return 1;
    }
    if(n == 1){
        return 2;
    }
    ll half = pot(n/2);
    return half*half*pot(n%2);
}
 
string tobinary(ll num, ll n){
    string s = "";
    ll a = num;
    while(a != 0){
        s += (a%2) + '0';
        a /= 2;
    }
    while((ll)s.length()<n){
        s += '0';
    }
    reverse(s.begin(), s.end());
    return s;
}
 
int main(){
    ll n;
    cin>>n;
    for(ll i = 0;i<pot(n);++i){
        int a = i ^ (i >> 1);
        cout<<tobinary(a, n)<<'\n';
    }
}