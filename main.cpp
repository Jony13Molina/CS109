#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <stdio.h>

#include "classrom.cpp"
using namespace std;
int maxOccupancy(Classrom one, int seats){

if(one.Num_Seats() > 256){
  printf("This Classroom can't have more then 256 seats\n");

}
 else{
  printf("%dThere are still spaces left" , 256 - one.numSeats);
 }
}

int StudentinClass(Classrom one, Classrom two, int id1, int id2){

  if(one.studentloc(id1)== two.studentloc(id2)){


      printf("Student can't Exist ins two classes");
  }else{
      return 0;
  } 
}
int main(int argc, char *argv[]){

Classrom Math,Physics,CS, English, Writing, Music, Art, PE;
int mathid[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
int mathsn[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
int physicsid[] = {17,18,19,20,21,22,23,24,25,26,27,28,29,30};
int physicssn[] = {17,18,19,20,21,22,23,24,25,26,27,28,29,30};
int CSid[] = {31,32,33,34,35,36,37,38,39,40,41,42,43};
int CSsn[] = {31,32,33,34,35,36,37,38,39,40,41,42,43};
int Englishid[] = {44,45,46,47,48,49,50,51,52,53,54,55};
int Englishsn[] = {44,45,46,47,48,49,50,51,52,53,54,55};
int Writingid[] = {56,57,58,59,60,61,62,63,64};
int Writingsn[] = {56,57,58,59,60,61,62,63,64};
int Musicid[] = {65,66,67,68,69,70,71,72,74};
int Musicsn[] = {65,66,67,68,69,70,71,72,74};
int Artid[] = {75,76,77,78,79,80,81,82,83,84};
int Artsn[] = {75,76,77,78,79,80,81,82,83,84};
int PEid[] =  {85,86,87,88,89,90,91,92,93,94};
int PEsn[] =  {85,86,87,88,89,90,91,92,93,94};
int j,k;
//Classrom* Math;
  for(int i = 0; i < 16; i++){
     Math.in_class(mathid[i], mathsn[i]);
     if(i == 15){
       Math.showAttendence();
       Math.Num_Seats();
     }
  }
//  for(int h = 0; h < 5; h++){
  Math.exit_C(13);
  printf("Student left class");
  printf(":\n");
  Math.exit_C(5);
  printf("Student left class");
  printf(":\n");
 
  //  if(h == 4){  
  Math.showAttendence();
    //}
 // }
 //Math.exit_C(mathid[15]);
// printf("Student left class!!!!!\n");
  
// Math.showAttendence(); 
       
 Math.Num_Seats(); 
}
