#include <iostream>
using namespace std;
// pass by reference for array
// int car (bool x)
// {cin >> x;
// if (x = yes)
// {
    // ++yes;
    // return x;
// }}
int main ()
{ 
     while(1 == 1){
// for each
int yes[5] = {0,0,0,0,0};
int no[5] = {0,0,0,0,0};
cout << "do i know the true value of the car?";
char cvalue;
cin >> cvalue;
if (cvalue == 'y')
{
    yes[1]++;
}
cout << "Less than 5 owners?";
cin >> cvalue;
if (cvalue)
{
    yes[2]++;
}
cout << "less than 200,000Km?";
cin >> cvalue;
if (cvalue)
{
    yes[3]++;
}
cout << "is the car free of any accidents?";
cin >> cvalue;
if (cvalue)
{
    yes[4]++;
}
cout << "Is the car road ready?";
cin >> cvalue;
if (cvalue)
{
    yes[5]++;
}
cout << "Wait while we calculate your results";
// if(c >=3){
// cout << "Buy the car!";
// }
// else if (cvalue == 'e'){
    // break;
// }




     }
return 0;
     }