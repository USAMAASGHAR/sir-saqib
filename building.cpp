#include<iostream>
#include<vector>
using namespace std;

 class building
 {
protected:
   int offices[10];
   int N; //Max visitor capasity of building
   int Nf;//Each floor capacity
   int Ng;//ground_floor capacity
   int No;//each office capacity

public:
  building(){N=0;}
  building(int capacity)
  {
    N=capacity;
  }






 };

 class ground_floor():public building
 {
 public:
   ground_floor()
    {Ng=N/2;}
 };
class first_floor:public building
{
  first_floor()
  {Nf=N/3;}
};
class second_floor:public building
{
  second_floor()
  {Nf=N/3;}
};

class third_floor:public building
{
  third_floor()
  {Nf=N/3;}
};
class fourth_floor:public building
{
  fourth_floor()
  {Nf=N/3;}
};
class elevator:public building
{

};

int main()
{

return 0;
}
