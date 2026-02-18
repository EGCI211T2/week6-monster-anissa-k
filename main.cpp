#include <iostream>
using namespace std;

#include "monster.h"

int main(int argc, char* argv[]) 
{
    monster A("Mina", 100, 2);
    monster B("Kaimook");
    B+=10;
    A+=B;
    --A;
    cout<<"====The stronger monster is ====\n";
    if(A>B)
    {
        A.display();
    }
    else
    {
        B.display();
    }

}