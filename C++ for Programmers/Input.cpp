#include <iostream>
#include <string>

using namespace std;
 int main(void)
 {
     string name;
     cout<<"Please enter your name.";
     getline(cin,name);
     cout<<"Your name is %s",name;
     return 0;
 }
