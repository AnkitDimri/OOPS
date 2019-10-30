#include<iostream>
using namespace std;
class person
{
    protected:
    int age=20;
    public:
   virtual void show()
    {
        cout<<"person"<<endl;
        cout<<age<<endl;
    }
};
class student: public person   
{                               
    int marks=10;

    public:
   int  age=50;
   void show()
    {
       cout<<"student"<<marks<<endl;
    }
};
class employee:public person
{
   int salary=100;
   public:
  void show()
{
   cout<<"Employee"<<salary<<endl;
}
};
int main()
{
  employee e;
   person *r=&e;
   person &k=e;
   r->show();
   k.show();
}
