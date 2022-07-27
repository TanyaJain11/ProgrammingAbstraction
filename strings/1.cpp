#include<iostream>
#include<cstring>
using namespace std;

int main(){
    string s="gas";
    char a[3]="he";
    char b[3];
    strcpy(b,a);
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<strlen(a)<<endl;
    cout<<strcat(a,b)<<endl;
    char ca[3]="ss";
    b[1]='w';
    cout<<b;
    cout<<strcmp(a,b);
}