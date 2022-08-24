#include<iostream>
#include<list>
using namespace std;

void display(list<int> &L){
list<int> :: iterator it;
for(it = L.begin();it!=L.end();it++){
    cout<<*it<<" ";
}
    cout<<endl;
}
int main()
{
    list<int> L;
    list<int> M(5); // if we initialize its size so can put element using iterator
    int size,element;

    cout<<"enter size of list:"<<endl;
    cin>>size;

    for(int i=0;i<size;i++){
        cout<<"enter element "<<i+1<<"th of list: "<<endl;
        cin>>element;
        L.push_back(element);
    }

    list<int> :: iterator ir;
    ir = M.begin();
    *ir=5;
    ir++;
    *ir = 7;
    ir++;
    *ir = 9;

    display(M);

    L.pop_back();
    // L.pop_front();

    // particular element remove krne k liye
    //L.remove(2);  if want to remove 2

    display(L);

    // for soting 
    M.sort();
    L.sort();

    display(L);
    display(M);

    // merging two list 
    L.merge(M);
    display(L);
    return 0;
}