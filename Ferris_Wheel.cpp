#include <iostream>
#include <algorithm>
using namespace std;
#define ll long long
 
int main(){
    ll num, max;
    cin>>num>>max;
    ll a[num];
    for(ll i = 0;i<num;++i){
        cin>>a[i];
    }
    sort(a, a + num);
    ll i1 = 0, i2 = num - 1;
    ll count = 0;
    while(i1 <= i2){
        ++count;
 
        if(i1 == i2){
            break;
        }
        if(a[i1] + a[i2] <= max){
            ++i1;
            --i2;
        }
        else{
            --i2;
        }
    }
 
    cout<<count;
 
 
}
//2 3 7 9