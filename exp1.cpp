#include <iostream>
using namespace std;

void check(string s){
    int l=s.length();
    if(s[l-1]=='1' && s[l-2]=='0' && s[l-3]=='1'){
        cout<<"String Accepted"<<endl;
    }
    else{
        cout<<"String Rejected"<<endl;
    }
}

int main() {
    string s;
    cin>>s;
    check(s);
    return 0;
}
