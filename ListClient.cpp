#include <iostream>
#include "List.h"

using namespace std;

int main()
{

 List L1, L2;
 
 
 L1.insert(25,1);
 L1.insert(14,2);
 L1.insert(23,3);
 L2.insert(82,1);
 L2.insert(11,2);

 cout<<endl;
 cout<<"Element int list 1 at position 2 is ";
 cout<<L1.getAt(2)<<endl<<endl;

 
 //Do some stuff with L1, L2, ...
 // ...

}
