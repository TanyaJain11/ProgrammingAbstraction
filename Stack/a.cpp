#include<iostream>
using namespace std;
class nStack
{
    public:
   int *arr;
   int *top;
   int *next;
   int n, s;
   int space; 
   
public:
   
   nStack(int N, int S)
   {
       n = N;
       s = S;
       arr = new int[s]; 
       top = new int[n];
       next = new int[s];
       
      
       for(int i=0; i<n; i++) { 
           top[i] = -1;  
       }
       

       for(int i=0; i<s; i++) {
           next[i] = i+1;
       }
      
       next[s-1] = -1;
     
       space = 0; 
   }

   
   bool push(int x, int m) 
   {
      
       if(space == -1) {
           return false;  
       }
       
    
       int index = space; 
       
    
       arr[index] = x; 
       
     
       space = next[index]; 
      
     
       next[index] = top[m-1]; 
       top[m-1] = index;
       
       return true;
   }

   
   int pop(int m)
   {
      
       if(top[m-1] == -1) {
           return -1;
       }
       
       int index= top[m-1];
       
       top[m-1] = next[index];
       
       next[index] = space;
       
       space = index;
       
       return arr[index];
   }
};


int main(){
    
    int N,S;
    cin>>N>>S;

    nStack a(N,S);
    a.push(15,2);
    a.push(45,2);

    a.push(17,1);
    a.push(12,1);


    a.push(11,0);
    a.push(10,0);


    cout<<"element popped from stack2 is"<<a.pop(2)<<endl;
    cout<<"element popped from stack1 id"<<a.pop(1)<<endl;
    cout<<"element popped from stack0 is"<<a.pop(0)<<endl;
    
    return 0;
}