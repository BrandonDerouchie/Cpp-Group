#include <iostream>
using namespace std;
// pass by reference for array
 int car (int x) {
    //  int x;
//  for(int i=0; i<5; i++)
 cin >> x;
return x; }
int main (){
// for each
int x, y, n;

int yes[5] = {0,0,0,0,0};
int no[5] = {0,0,0,0,0};
cout << "do i know the true value of the car?\n";
if(car(x) == 2){
    return 0;
}
if(car(x) == 1){
   yes[0] = x;
}
else if(car(x) == 0){
    no[0] = x;
}
cout << "Less than 5 owners?\n";
if(car(x) == 1) {
   yes[1] = x; 
}
else if(car(x) == 0){
    no[1] = x;
}
cout << "less than 200,000Km?\n";
if(car(x) == 1) {
    yes[2] = x; 
}
else if(car(x) == 0){
    no[2] = x;
}
cout << "is the car free of any accidents?\n";
if(car(x) == 1) {
   yes[3] = x; 
}
else if(car(x) == 0){
    no[3] = x;
}
cout << "Is the car road ready\n?";
if(car(x) == 1) {
   yes[4] = x; 
}
else if(car(x) == 0){
    no[4] = x;
}
cout << "Wait while we calculate your results\n";
y = yes[0] + yes[1] + yes[2] + yes[3] + yes[4];
n = no[0] + no[1] + no[2] + no[3] + no[4];



 if(y >=3){
    cout << "Buy the car!\n";
 }
 else if (n >=3){
    cout << "Don't buy the car!\n";
 }

return 0;
     }