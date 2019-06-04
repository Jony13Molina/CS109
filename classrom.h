#ifndef classrom_h
#define classrom_h


class Student_N;

class Classrom{
public:
       Student_N *Shead;



      int numSeats;
//constructor for Student/
       Classrom();
//-------Methods For Classroom--------//
//bool empty(int id);
//check number of seat in a classroom
       int Num_Seats();
//------Methods For Student----------
//this is like lookup
//check location of student
       int studentloc(int st_Num);
//student enters class
       void in_class(int id, int st_Nnum);
//student leaves clas
       void exit_C(int id);
//Print List 
       void showAttendence();
       
//destructor
       ~Classrom();
};

class Student_N{
//manipulate Student_N with Classrom
       friend class Classrom;
public:
       int id;
       int st_Num;
       //int numSeats;
       Student_N* next_student;
public:
       Student_N();
       Student_N(int A, int B);
       //int Num_Seats();

                                             
       ~Student_N();
};

#endif
                                                                                                           
