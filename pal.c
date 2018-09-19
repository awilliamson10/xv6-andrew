/*
 * Author: Andrew Williamson
 * Date: 9/13/18
 *
 * Description: Develop a program that accepts a string as a command line argument and determines whether the string is a palindro			me duplicated. Works as intended within XV6.
 *
 * */

#include "types.h"
#include "stat.h"
#include "user.h"
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>


int main(int argc, char *argv[])
{
  if(argc < 2){   //Checking that a word was given as an argument
    printf(2, "usage: pal word\n");
    exit();
  }  
  int pflag = 0; //flag to determine if a palindrome
  int dflag = 0; //flag to determine if duplicated
  int len = strlen(argv[1]); //saving length of word
  char *a = malloc(len+1); //allocating space to copy the string
  strcpy(a, argv[1]); //copying the word to a new location
  int h = len-1, l = 0, m = (len+1)/2; //setting count variables, last letter, first letter, middle letter
  while(l < h) {  //while first does equal last
    if(a[l] != a[h]){
    	pflag = 1; //if not true set palindrome flag 
    }
    if(a[l] != a[m]){
    	dflag = 1; //if not true set duplicated flag
    } 
    l++; //increment locations within string
    h--;
    m++;
  }
  //print statements for outcome of the program
  if(pflag==0) printf(1,"palindrome.\n"); 
  if(dflag==0) printf(1,"repeated.\n");
  if(pflag==1 && dflag==1) printf(2,"false.\n"); 
  exit();
}
