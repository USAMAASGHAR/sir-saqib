#include<iostream>
#include<vector>
using namespace std;

 class building
 {
protected:
   static int N; //Max visitor capasity of building
   int Nf;//Each floor capacity
   int Ng;//ground_floor capacity
   int No[10];//each office capacity
   int E;
public:
  building(){N=0; cout<<"A new building is ready for serving citizens! \n"}
  void set_capasity(int capacity)
  {
    N=capacity;

  }

 };

 class ground_floor:public building
 {
 public:
   ground_floor()
    {Ng=N/2;}
};
class first_floor:public building
{
public:
  first_floor()
  {Nf=rand()%(N/3);}

};
class second_floor:public building
{
  second_floor()
  {Nf=rand()%N/3;}
};

class third_floor:public building
{
  third_floor()
  {Nf=rand()%N/3;}
};
class fourth_floor:public building
{
  fourth_floor()
  {Nf=rand()%N/3;}
};
class elevator:public building
{

};

int main()
{
  cout << "Enter capacity of Building" << '\n';
  int capacity;
  cin capacity; building obj(); obj.set_capasity(capacity);

  return 0;
}
