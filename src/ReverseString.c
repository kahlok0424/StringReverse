#include "ReverseString.h"
#include <stdio.h>

int getStringLength(char *str){
  int i = 0;

  while( *(str + i) != '\0'){
    i++;
    //str++;
  }
  return i;
}

char *ReverseString(char *str){
  int length = 0;
  int end =0;
  end = length;
  char *begin,*end, temp;

  length = getStringLength(str);

  for (int i = 0; i < length - 1; i++){
    temp = *str;
  }


for (i = 0; i < length/2; i++)
{
   temp   = *end;
   *end   = *begin;
   *begin = temp;

   begin++;
   end--;
}

}
