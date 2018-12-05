#include <iostream>
using namespace std;
// pass by reference for array
 int car (int x) {
    //  int x;
//  for(int i=0; i<5; i++)
 cin >> x;
return x; }
int main ()
{ 
// for each
int x;

int yes[5] = {0,0,0,0,0};
int no[5] = {0,0,0,0,0};
cout << "do i know the true value of the car?";
// char cvalue;
if(car(x) == 1){
   yes[1] = x;
}
cout << "Less than 5 owners?";
if(car(x) == 1) {
   yes[2] = x; 
}
cout << "less than 200,000Km?";
if(car(x) == 1) {
    yes[3] = x; 
}
cout << "is the car free of any accidents?";
if(car(x) == 1) {
   yes[4] = x; 
}
cout << "Is the car road ready?";
if(car(x) == 1) {
   yes[5] = x; 
}
cout << "Wait while we calculate your results";
// if(c >=3){
// cout << "Buy the car!";
// }
// if (cvalue == 'e'){
    // break;
// }

return 0;
     }