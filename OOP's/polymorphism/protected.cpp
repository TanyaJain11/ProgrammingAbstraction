//2010991747
//Tanya Jain

#include<iostream>
using namespace std;
class shape{
   protected:
   int length;
   int width;
   public:
   
   void getData(){
      cin>>length>>width;
   }
     shape(int l,int w){
    this->length=l;
    this->width=w;
   }

   virtual void Area()=0;

   
};

class triangle:public shape{
      public:
      
      triangle(int a,int b):shape(a,b){}
   
     void Area(){
        cout<<"Area of triangle="<<length*width/2<<endl;
      }
      

};

class rectangle:public shape{
         public:
      rectangle(int a,int b):shape(a,b){}
   
      void Area(){
        cout<<"Area of triangle="<<length*width<<endl;
      }
      
};
int main()
{
  
    triangle t(10,20);
    rectangle r(30,40);

    shape *shapeptr;
    shapeptr=&r;
    shapeptr->Area();
    

    shapeptr=&t;
    shapeptr->getData();
    shapeptr->Area();
    return 0;
}