#include<iostream>
using namespace std;

bool checkPalindrome(string st,int s,int e){

    if(s==e){
        return true;
    }
    if(st[s]!=st[e]){
            return false;
        }
     
   if(s<e){
   return checkPalindrome(st,s+1,e-1);
   }
    
    return true;
}

int main(){
    string st;
    getline(cin,st);

   if(checkPalindrome(st,0,st.length()-1)){
    cout<<"string is a palindrome";
   }else{
    cout<<"string is not a palindrome";
   }
   return 0;
}