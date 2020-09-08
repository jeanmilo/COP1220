/*
* Program: P_CW_002
* Purpose: This program shows how to input data
* Objectives: 1) Comments; 2) Preprocessor directive (#include); 3) main() function; 4) scanf() function; 5) conversion characters; 6) operator; 7) printf() function 
* Class: COP1220: Introduction to Programming in C; Summer 2020; MW 0800AM - 1145AM 
* Instructor: Dr. Fazelpour - Copyright (c) 2020
* Programmers: Claudia Yamamoto
* Date: 14 July 2020 
*/

#include <stdio.h>

int main(void){
  /* variable declaration */
  char init; /* initial - a single character */

  /* statements */
  printf("What is your initial? ");

  /* Conversion characters: the percent sign (%) and a letter are used to input/output variables */
  /*The ampersand characer (&) is the "Address Of" operator, which returns the address of a variable */

  scanf("%c", &init);
  printf("Hi %c Welcome to COP1220: Introduction to Programming in C", init); 

  return(0);
}
