#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>

#include "Hash.h"
const int HashT = 256;
unsigned int shift(unsigned int id, int is_shift){
int sizeInBits = 8*sizeof(unsigned int);
is_shift = is_shift&(sizeInBits-1);
if(is_shift == 0)
    return id;
    return(id <<is_shift) | (id >> (sizeInBits - is_shift)); 



}

unsigned int P_Hashing(char* inId){
   unsigned int result = 0xBAE86554;
   while(*inId){
      result ^= *inId++;
      result = shift(result, 5);

   }
   return result;

int hash(char* id){

return P_Hashing(id)%HashT;


}

