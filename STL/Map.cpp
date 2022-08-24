#include<iostream>
#include<map>
#include<string>
using namespace std;
int main()
{
    map<string,int> Student_Id;

    Student_Id["A"]=1;
    Student_Id["B"]=1;
    Student_Id["C"]=1;

    map<string,int>::iterator it;
    for(it =Student_Id.begin();it!=Student_Id.end();it++){
        cout<<(*it).first<<" "<<(*it).second<<endl;
    }
    return 0;
}