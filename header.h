
#include<stdio.h> /* adding stdio.h file for using some predefind funciton like scanf printf */

#include<string.h> /* adding string.h file for using predefind function like strcmp */

#define ZERO 0    /* replacing 0 equal to ZERO */

#define TWO 2     /* replacing 2 equal to TWO */

/* File pointer declare as global */
FILE *task_file, *temp_file, *stdio_file, *output_file, *temp_read_file ;
    
/* Declaring char variables as global */    
char slash,  slashTwo, star, starTwo, charRead, hash, singleComment;

// /* Declaring string variable as global    
char includeFound[20];
    

extern void headerFileReplace(char); /* Prototype of headerFileReplace function */

extern void remove_comment (char); /* Prototype of remove_comment function */
