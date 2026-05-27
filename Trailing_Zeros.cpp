#include <iostream>
using namespace std;

long long func(long long num){
    long long sum = 0;
    long long five = 5;
    while(num/five){
        sum += num/five;
        five *= 5;
    }
    return sum;
}

int main(){
    long long a;
    cin>>a;

    cout<<func(a);






}