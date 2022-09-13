#include<iostream>
using namespace std;

void toh(int n,char source,char aux,char des){
    if(n==0){
        return;

    }

    toh(n-1,source,des,aux);
    cout<<"Move disks "<<n<<" from "<<source<<" to "<<des<<endl;

    toh(n-1,aux,source,des);
}
int main()
{
    int num_disks;
    cout<<"Enter number of disks \n";
    cin>>num_disks;
    toh(num_disks,'a','b','c');

    return 0;
}