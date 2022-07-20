#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,x;
    cin>>n>>x;

    int sum=0;
    for(int i=1;i<=x;i+=2){
        int power= pow(n,i);
        sum=sum+power;
    }

    cout<<sum;
    return 0;
}