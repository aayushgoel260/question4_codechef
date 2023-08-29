#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int count=0;
        int cnt=0;
        int t;
        cin>>t;
        string s;
        for(int i=0;i<t;i++){
            cin>>s;
            if(s[0]=='S'){
                count++;
            }
            else{
                cnt++;
            }
        }
        cout<<count<<" "<<cnt<<endl;
    }
    
	
	return 0;
}