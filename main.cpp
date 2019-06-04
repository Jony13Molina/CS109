#include <iostream>
#include <vector>
#include <string>
#include <cstdio>
//#include <common.h>
using namespace std;

void print_by_ref (vector <int> &v) {
  //if ( v == NULL) return; // if v is NULL abort.
   for (int i = 0 ; i < v.size(); i ++) {
     cout<<v[i]<<endl;

     v[i] = i;
   }
}
int main () {
// Initialize vectors
 vector <int> v1 (10); // Small
 //vector <int> v2 (100000); // Very large
 /* Do some initialization here */
 print_by_ref(v1);
 // print_by_ref(&v2);
  /* This will print new values being set inside print_by_ref */
 print_by_ref(v1);
   // print_by_ref(&v2);
    // print_by_ref(NULL); // This should return right away
     //return 0;
}





 
