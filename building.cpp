#include<iostream>
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
  building()
  {
    N=0;Nf=0;Ng=0;E=0;
    for (int x = 0; x < 10; x++) {
      No[x]=0;
    }
    cout<<"A new building is ready for serving citizens! \n";} //Default Constructer
  void set_capasity(int capacity) //Constructer which sets capacity of building
  {
    N=capacity;
    for (int x = 0; x < 10; x++) {
      No[x]=rand() % (Nf-1);
    }
  }
  virtual bool check_space_elevator() //Checking space in elevator, will return true if space available
  {return true;}
  virtual bool spce_check()//Checking spce on ground, will return true if space available
  {
    if(Ng<N/2)
    return true;
    else
    return false;
  }
  virtual bool check_space_floor() //Check space on floor, will return true if space available
  {if (Nf<N/3)
      return true;
  else
      return false;
  }
  virtual bool check_space_office(int office)
  {
    if(No[office]<(Nf-1))
      return true;
    else
      return false;
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

//  check_space_floor();

};
class second_floor:public building
{
public:
  second_floor()
  {Nf=rand()%N/3;}

//  check_space_floor();
};

class third_floor:public building
{
public:
  third_floor()
  {Nf=rand()%N/3;}

//  check_space_floor();
};
class fourth_floor:public building
{
public:
  fourth_floor()
  {Nf=rand()%N/3;}

//  check_space_floor();
};


int main()
{
  cout << "Enter capacity of Building" << '\n';
  int capacity;
  cin>>capacity; building obj; obj.set_capasity(capacity); //Setting building capasity
  cout<<"Enter life cycles \n";
  int L;
  cin >> L;
  for(int x=0 ; x<= L ; x++)
  {
    cout<<"Enter floor Numbr and Office Number \n";
    int floor_no,office_no;
    cin>>floor_no>>office_no;
    //Checking whre person want to go
    building *person;
    switch (floor_no)
    {
      case 0:
      {
       ground_floor f0;
         if(f0.spce_check()==true)
             {cout<<"Visitor Entered"; person=&f0;}
         else if(f0.spce_check()==false)
             {cout<<"Please,come tomorrow \n"; return 0;}
      }
      break;

      case 1:
      {
         first_floor f1;
           if(f1.spce_check()==true)
               {cout<<"Visitor Entered"; person=&f1;}
           else if(f1.spce_check()==false)
               {cout<<"Please,come tomorrow \n"; return 0;}
      }
      break;

      case 2:
      {
         second_floor f2;
           if(f2.spce_check()==true)
               {cout<<"Visitor Entered"; person=&f2;}
           else if(f2.spce_check()==false)
               {cout<<"Please,come tomorrow \n"; return 0;}
      }
      break;

      case 3:
      {
         third_floor f3;
           if(f3.spce_check()==true)
               {cout<<"Visitor Entered"; person=&f3;}
           else if(f3.spce_check()==false)
               {cout<<"Please,come tomorrow \n"; return 0;}
      }
      break;

      case 4:
      {
         fourth_floor f4;
           if(f4.spce_check()==true)
               {cout<<"Visitor Entered"; person=&f4;}
           else if(f4.spce_check()==false)
               {cout<<"Please,come tomorrow \n"; return 0;}
      }
      break;

      default:
      cout<<"Invalid Choice \n";
  }
  //Entring to the elevator
    if(person->check_space_elevator()==true)
      cout<<"Visitor in the lift \n";
    else
      {cout<<"You are not allowed to enter! \n";exit(0);}

//GOing up in elevator and checking space in floor

    if (person->check_space_floor()==true)
      cout<<"Entering floor number "<<floor_no<<endl;
    else
      {cout<<"Sorry, floor number "<<floor_no <<" is full"<<endl;exit(0);}

//Checking space in office

    if (person->check_space_office(office_no)==true)
      cout<<"Please wait outside for the office number "<<office_no<<endl;
    else
      {cout<<"Sorry, office number "<<office_no <<" is full"<<endl; exit(0);}


      cout<<"I can not believe I finished!";



 }
  return 0;
}
