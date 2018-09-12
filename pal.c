#include "types.h"
#include "stat.h"
#include "user.h"
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>


int main(int argc, char *argv[])
{
  if(argc < 2){
    printf(2, "usage: pal word\n");
    exit();
  }  
  int pflag = 0;
  int dflag = 0;
  int len = strlen(argv[1]);
  char *a = malloc(len+1);
  strcpy(a, argv[1]);
  int h = len-1, l = 0, m = (len+1)/2; 
  while(l < h) {
    if(a[l] != a[h]){
    	pflag = 1;
    }
    if(a[l] != a[m]){
    	dflag = 1;
    } 
    l++;
    h--;
    m++;
  }
  if(pflag==0) printf(2,"palindrome.\n");
  if(dflag==0) printf(2,"repeated.\n");
  if(pflag==1 && dflag==1) printf(2,"false.\n"); 
  exit();
}
