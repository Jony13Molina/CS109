#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <stdio.h>
#include  <cstdio>
using namespace std;

#include "classrom.h" 
#include "Hash.h"
Classrom::Classrom()
{
   numSeats = 0;
   Shead = NULL;
   
}
Student_N::Student_N(int A , int B)

{
   //numSeats = 0;
   id = A;
   st_Num = B;
   next_student = NULL;
}

//Number of Seats

int Classrom::Num_Seats()
{  
   printf(" Seats:");
   printf("%d\n", numSeats); 
   //return numSeats;
   
  
}

int Classrom::studentloc(int st_Num)
{
  Student_N* temp;
 
  temp = Shead;
   
  while(temp != nullptr){

     if(temp->st_Num == st_Num){
        
         printf("%d\n", ( temp->st_Num));
          return temp->st_Num;   
     }
     temp = temp->next_student;
  } 
}
//enter class 
void Classrom::in_class(int id, int st_Num)
{
  
  Student_N* stu_in;
  if(studentloc(id) != 0){
     printf("Student is already in Class\n");
  }
   else{
     if(Shead  == nullptr){
      stu_in = new Student_N(id,st_Num);
      Shead = stu_in;
      numSeats++;
      }else{
      stu_in = new Student_N(id, st_Num);
      stu_in->next_student = Shead;
      Shead = stu_in;
      numSeats++;
     }
        
  } 

 
}
//student leaves class 
void Classrom::exit_C(int id){
   int st_Num;
   Student_N* ex_stu;
   Student_N* stu;
 
    
   if(studentloc(id) == 0){
      printf("Non Existent Student Can't leave Class\n");  
   }
   
   if(Shead->id = id){
      //Shead = Shead->next_student;
      ex_stu = Shead;
      Shead  = ex_stu->next_student;
      //delete(ex_stu); 
    } 
      stu = Shead;
      ex_stu = Shead->next_student;      
      while(ex_stu != nullptr){
         if(ex_stu->id == id){

          stu->next_student = ex_stu->next_student;
          // if(ex_stu = stu->next_student){
              ex_stu->next_student = nullptr; 
          // }
         
         }
      
       stu = ex_stu;
       ex_stu = ex_stu->next_student;
      } 
   
     numSeats--;
     
 
}

void Classrom::showAttendence()
{
    printf("Attendence\n");
    
    Student_N *attendence;
    attendence = Shead;
  
    while(attendence != nullptr){
       cout<<"Student id:"<< attendence->id << endl;
       cout<<"Seat Number:" << attendence->st_Num << endl;
       
       attendence = attendence->next_student;
    }
} 

//destructor for classroom
Classrom::~Classrom()
{
   if(Shead != nullptr){
     free(Shead); 
   }
}
//destructor for student
Student_N::~Student_N()
{
  if(next_student != nullptr){
     free(next_student);
  }
}
