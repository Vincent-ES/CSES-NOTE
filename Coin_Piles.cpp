#include <iostream>
using namespace std;

bool func(long long a, long long b){
    if(a == b && a == 0){
        return 1;
    }
    if(a == 0 || b == 0){
        return 0;
    }
    if(a > b*2 || b > a*2){
        return 0;
    }
    a %= 3;
    b %= 3;
    if(a == b*2 || b == a*2){
        return 1;
    }
    return 0;
}

int main(){
    long long t;
    cin>>t;
    while(t--){
        long long a, b;
        cin>>a>>b;

        if(func(a, b)){
            cout<<"YES";
        }
        else{
            cout<<"NO";
        }
        cout<<'\n';
    }


}