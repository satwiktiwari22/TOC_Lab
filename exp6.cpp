#include <iostream>
using namespace std;

void check(string s){
    int l=s.length();
    int m=0,n=0;
    for(int i=0;i<l;i++){
        if(s[i]=='1')
        m++;
        else
        n++;
    }
    cout<<"No. of 1's: "<<m<<endl;
    cout<<"No. of 0's: "<<n<<endl;
    
}

int main() {
    string s;
    cin>>s;
    check(s);
    return 0;
}
