#include <iostream>
#include <string>

using namespace std; 

int main(){
char Arep;
char repY = 'y';
 do{ 
   cout << "What is your name" << endl;
   string userN;
   cin >> userN;  
   cout<< "Hello, " << userN <<" "<< "this is my first C++ program "<< endl;
   
   cout<<"Do you want to restart the program"<< endl;
   cin>> Arep; 
 }while(Arep == repY);


}

