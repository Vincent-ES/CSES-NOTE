#include <iostream>
#include <algorithm>
using namespace std;
#define ll long long
 
int main(){
    ll t;
    cin>>t;
    ll arr[t];
    for(int i = 0;i<t;++i){
        cin>>arr[i];
    }
    sort(arr, arr + t);
 
    int count = 1;
    for(int j = 1;j<t;++j){
        if(arr[j] != arr[j-1]){
            ++count;
        }
    }
    cout<<count;
}