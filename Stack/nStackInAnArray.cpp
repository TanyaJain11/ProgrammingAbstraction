#include<iostream>
using namespace std;
class NStack
{
    public:
   int *arr;
   int *top;
   int *next;
   //Number of stack
   int n, s;
    //Size of Array
   int freespot; 
   
public:
   
   NStack(int N, int S)
   {
       n = N;
       s = S;
       arr = new int[s]; //this is the array with size S
       top = new int[n];//It is the element which stores the top element of every stack
       next = new int[s];////It will take the next element or free space
       
       //top initialise
       for(int i=0; i<n; i++) { //It will go till size number of Stacks
           top[i] = -1;  //first array is pointing to -1
       }
       
       //next initialise
       for(int i=0; i<s; i++) {
           next[i] = i+1;
       }
       //update last index value to -1
       next[s-1] = -1;
       
       //initialise freespot
       freespot = 0; //It is store the starting index of free list in a variable
       
   }

   // Pushes 'X' into the Mth stack. Returns true if it gets pushed into the stack, and false otherwise.
   bool push(int x, int m) //x is the element and m is the stack
   {
       //check for overflow
       if(freespot == -1) {
           return false;  //Means if we do not have any free space then it will Overflow.
       }
       
       //find index
       int index = freespot; //WhenEver we have free spot then find that index.
       
       //insert element into array
       arr[index] = x; 
       
       //update freespot
       freespot = next[index];  //Now freespot take the next freespace from next
      
       //update next;
       next[index] = top[m-1]; //
       
       //update top
       top[m-1] = index;
       
       return true;
   }

   // Pops top element from Mth Stack. Returns -1 if the stack is empty, otherwise returns the popped element.
   int pop(int m)
   {
       //check underflow condition
       if(top[m-1] == -1) {
           return -1;
       }
       
       int index= top[m-1];
       
       top[m-1] = next[index];
       
       next[index] = freespot;
       
       freespot = index;
       
       return arr[index];
   }
};


int main(){
    //n number of stack 
    //S size of Array
    int N,S;
    cin>>N>>S;

    NStack A(N,S);
    A.push(15,2);
    A.push(45,2);

    A.push(17,1);
    A.push(12,1);

    //Let us put some in stack number 0

    A.push(11,0);
    A.push(10,0);


    cout<<"Popped element from stack2 is"<<A.pop(2)<<endl;
    cout<<"Popped element from stack1 id"<<A.pop(1)<<endl;
    cout<<"Pooped element from stack0 is"<<A.pop(0)<<endl;
    
    return 0;
}
