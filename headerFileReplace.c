#include"header.h"

/* user defined header file included  */

/* defination starts from here */

void headerFileReplace(char hash)
{

                if (hash == '#')  /* if '#' found conditon true */
                { 
                     
                     (fgets(includeFound,20,temp_read_file)); 
                        
                        /* using fgests function trying to copy whole string after '#' in includeFound string variable */

                        if(strcmp(includeFound,"include<stdio.h>"))  /* if "include<stdio.h>" conditon true */ 
                        {

                            printf("header file found\n");  /* Massage for user */

                             while((star=fgetc(stdio_file)) != EOF)  /* while condition true */
                             {
                                 /* using stdio_file file pointer trying to fetch character by charactor */ 

                                fputc(star,output_file);  
                                
                                /* Using fputc function trying wrte whole stdio.h file in output file till end of the file */

                             }

                             while(( charRead = fgetc(temp_read_file)) != EOF ) 
                             {
                                /* after copying stdio.h file reading char by char content after include<stdio.h>  */
                                
                                fputc(charRead,output_file);

                                /* copying all content after include<stadio.h> string in output file */
                             }

                           
                        }
            

                }


}

/* Defination Ends Here */
         
         
