#include <iostream>
#include <string>

using namespace std;

//Macros
#define ll long long

int main(){
    ll int n, sum(0), values, missing, total;

    cin>>n;
    for(int i =0; i<n - 1; i++){
        cin>> values;
        sum +=values;
    }

    total = n * (n+1)/2;
    missing = total - sum;
    cout<< missing<< endl;
    return 0;
}
