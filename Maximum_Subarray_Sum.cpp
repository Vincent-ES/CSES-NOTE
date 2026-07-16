#include <iostream>
using namespace std;
#define ll long long
int main(){
    ll n;cin>>n;
    ll arr[n];
    for(ll i = 0;i<n;++i){
        cin>>arr[i];
    }
    ll max_sum = arr[0];
    for(ll i = 1;i<n;++i){
        if(max_sum<arr[i]){
            max_sum = arr[i];
        }
    }
 
 
    ll sub_sum = 0;
    for(ll i = 0;i<n;++i){
        sub_sum += arr[i];
        if(sub_sum>max_sum){
            max_sum = sub_sum;
        }
        if(sub_sum<0){
            sub_sum = 0;
        }
        
    }
    
 
    cout<<max_sum;
 
 
}
