#include<iostream>
using namespace std;

int main(){
    string st;
    getline(cin,st);

    int s=0,e=st.length()-1;
    string str = st;

    while(s<e){
        if(st[s++]!=st[e--]){
            cout<<"not a palindrome";
            return 0;
        }
    }
   cout<<"its palindrome";
   return 0;
}