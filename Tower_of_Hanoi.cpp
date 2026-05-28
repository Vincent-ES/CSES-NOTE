#include <iostream>
using namespace std;
#define ll long long

ll pot(ll a){
    if(a == 0){
        return 1;
    }
    if(a == 1){
        return 2;
    }
    ll half = pot(a/2);
    return half*half*pot(a%2);
}

void hanoi(ll n, int a, int b,int c){
    if(n == 1){
        cout<<a<<" "<<c<<'\n';
        return;
    }

    hanoi(n-1, a, c, b);
    hanoi(1, a, b, c);
    hanoi(n-1, b, a, c);
}

int main(){
    ll a;
    cin>>a;
    cout<<pot(a)-1<<'\n';
    hanoi(a, 1, 2, 3);
}