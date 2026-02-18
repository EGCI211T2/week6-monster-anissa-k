#include <iostream>
using namespace std;

#include "thanos.h"

int main(int argc, char* argv[]) 
{
  
  int n;
  cout<<"How many nonster?";
  cin>>n;

  monster *m= new monster[n];

  cout<<"----------------------" <<endl;
  for(int i=0;i<n;i++)
  {
      m[i].display(); 
  }

  for(int i=0; i<n-1; i++)
  {
    m[i].Attack(m[i+1]);
  }
  m[n-1].Attack(m[0]);

  for(int i=0; i<n; i++)
  {
    m[i].heal();
    m[i].display(); //if the hp=0, you dont display
  }

  Thanos T;
  ++T;
  ++T;
  T.snap_finger(m,n)
  ++T;
  ++T;
  T.snap_finger(m,n);
  ++T;
  ++T;
  T.snap_finger(m,n)

 //2 other monster
  for(int i=0; i<n; i++)
  {
    m[i].display();
  }

  delete [] m;
  
}//call des for A
  
  
