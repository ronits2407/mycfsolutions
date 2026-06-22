#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int count1=0;
        int count2=0;
        for(int j=0;j<s.size();j++){
            if(s[j]==')') {
                count1++;
            }
 
            else{
                count2++;
            }
        }
        if(count1==count2){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}