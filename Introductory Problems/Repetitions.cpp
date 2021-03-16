#include <iostream>
#include <string>

using namespace std;

int main(){
    int num, counter(1), maxi = 0;
    string str;
    cin>>str;
    num = str.length();

    for(int i =0; i<num; i++){
        if (str[i]!= str[i+1])
        {
           maxi = max(counter, maxi);
           //cout<<maxi<<endl;
           counter = 0;
        }
        counter++;
        //cout<<counter<<endl;
    }
    maxi = max(counter, maxi);
    cout<< maxi;
    return 0;
}
