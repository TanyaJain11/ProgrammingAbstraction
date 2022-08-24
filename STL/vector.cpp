#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
vector<int>vec;


 void display(int size){
        cout<<"vector is :"<<endl;
        for(int i=0;i<size;i++){
             cout<<vec[i]<<endl;
        }
        cout<<endl;
    }
int main()
{
   
    int size,element;

    //enter size of vector
 
    
    cout<<"Enter size of vector  :";
    cin>>size;
    
    for(int i=0;i<size;i++){
        cout<<"Enter element"<<i<<"of vector"<<endl;
        cin>>element;
        vec.push_back(element);
    }

display(size);


//use of iterator
vector<int>::iterator v=vec.begin();
while(v!=vec.end()){
    cout<<"Value of v ="<<*v<<endl;
    v++;
}

//begin() //It will point the first element in the vector
//cout<<vec.begin()<<endl;

//end()//it will point the last element at the vector
//cout<<vec.end()<<endl;

//resize()
vec.resize(5);

//use of cbegin() and cend()
for(auto i=vec.cbegin();i!=vec.end();i++){
    cout<<*i<<" ";
}
  cout<<*max_element(vec.begin(),vec.end());


    return 0;
}