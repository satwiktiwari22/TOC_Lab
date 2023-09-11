#include <iostream>
using namespace std;
int main() {
    string s;
    cin>>s;
    int l=s.length();
    if(l%3==0){
        cout<<"String Accepted"<<endl;
    }
    else{
        cout<<"String Rejected"<<endl;
    }

    return 0;
}
