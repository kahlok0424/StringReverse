#include "ReverseString.h"
#include <stdio.h>
#include <stdlib.h>

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
  char *rvs ;
  rvs = (char *)malloc(length + 1);

  length = getStringLength(str);
  //printf("length = %d",length);

  int len = length;
  for(int i = 0; i<length ; i++){
    rvs[i] = str[(len-1)];
    len--;
  }
  //printf("test = %s",rvs);
  rvs[length ] = '\0';
  return rvs;
}
