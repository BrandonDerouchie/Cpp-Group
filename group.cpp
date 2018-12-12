#include <iostream>
using namespace std;
 int car (int x) {
 cin >> x;
 std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
 return x;
}
int main (){
int x, y, n;

int yes[5] = {0,0,0,0,0};
int no[5] = {0,0,0,0,0};
cout << "welcome to how to buy a car.\n select your answers with 0, 1, 2.\n";
cout << " 0 = no\n 1 = yes\n 2 = exit\n";
cout << "do i know the true value of the car?\n";
int result = car(x);
if(result == 2){
    return 0;
}
else if(result == 1){
   yes[0] = 1;
}
else if(result == 0){
    no[0] = 1;
}
cout << "Less than 5 owners?\n";
result = car(x);
if(result == 1) {
   yes[1] = 1; 
}
else if(result == 0){
    no[1] = 1;
}
cout << "less than 200,000Km?\n";
result = car(x);
if(result == 1) {
    yes[2] = 1; 
}
else if(result == 0){
    no[2] = 1;
}
cout << "is the car free of any accidents?\n";
result = car(x);
if(result == 1) {
   yes[3] = 1; 
}
else if(result == 0){
    no[3] = 1;
}
cout << "Is the car road ready?\n";
result = car(x);
if(result == 1) {
   yes[4] = 1; 
}
else if(result == 0){
    no[4] = 1;
}
cout << "Here are your results\n";
cout << "..\n..\n..\n..\n..\n..\n..\n..\n..\n..\n..\n..\n..\n";
y = yes[0] + yes[1] + yes[2] + yes[3] + yes[4];
n = no[0] + no[1] + no[2] + no[3] + no[4];
 if(y >=3){
    cout << "Buy the car!\n";
 }
 if(n >=3){
    cout << "Don't buy the car!\n";
 }

return 0;
    }