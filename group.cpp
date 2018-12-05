#include <iostream>
using namespace std;
// pass by reference for array
 int car (int x) {
    //  int x;
//  for(int i=0; i<5; i++)
// cin >> x;
return x; }
int main ()
{ 
     while(1 == 1){
// for each
int x;

int yes[5] = {0,0,0,0,0};
int no[5] = {0,0,0,0,0};
cout << "do i know the true value of the car?";
// char cvalue;
cin >> x;
if(x == 1) {
   car(x) = yes[1]; 
}
cout << "Less than 5 owners?";
if(x == 1) {
   car(x) = yes[2]; 
}
cout << "less than 200,000Km?";
if(x == 1) {
   car(x) = yes[3]; 
}
cout << "is the car free of any accidents?";
if(x == 1) {
   car(x) = yes[4]; 
}
cout << "Is the car road ready?";
if(x == 1) {
   car(x) = yes[5]; 
}
cout << "Wait while we calculate your results";
// if(c >=3){
// cout << "Buy the car!";
// }
// if (cvalue == 'e'){
    // break;
// }




     }
return 0;
     }