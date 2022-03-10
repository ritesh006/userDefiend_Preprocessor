#include"header.h"

/* User Defined header file added for predefined header file refer header.h file in folder */


/*--------------------------------------- Main start From Here -----------------------------------------------------------------------*/

int main( int argc, char *argv[])  /* used int argc and char * argv for handling command line argument */
{

    if( argc != TWO )     /* If command line argunment not equal to two condition true */
    {
        printf("Two argument required.");   /* Then message print for user */

        return ZERO; /* if conditon true return zero os for telling the program is successfully done */
    }


    task_file = fopen(argv[1],"r"); 
    
    /* using file pointer opening file in read mode gives from user from command line argument */ 
    
    temp_file = fopen("temp.c","w");

    /* using file pointer opening temprory file in write mode temprory operation if file not existed first create and after open in write mod  */

    

    stdio_file = fopen("/usr/include/stdio.h","r");
    
    /* using file pointer opening stdio.h header file from given path in read mode  */


    output_file = fopen("writeFile.i" , "w");

     /* using file pointer opening output.i file in write mode if the file is not existed in write mode it will create first then open  */


   if(stdio_file == ZERO) /* stdio_file pointer equalt to zero then if condition true */
    {
        printf("Header file is not open."); /* Message for user */

    }


    if(task_file == ZERO)  /* If task_fiel pointer equal to zero then if conditin true */ 
    {
        printf("File not open.");  /* Message for user */
    }



          /* checking commnent */

            while((slash=fgetc(task_file)) != EOF) //EOF(or)-1
            {
                /* While condition true fgetc function will check charactor by charector using task_file pointer */

                remove_comment(slash);
                /* calling remove comment function and passing actual argument to the function */

            }
        
            
            /* check comment task ends here */



            fclose(temp_file);  /* Closing temp.c using temp_file pointer */

            temp_read_file = fopen("temp.c","r"); 

            /* Again opening temp.c file in read mode using temp_read_file file pointer */


            while((hash=fgetc(temp_read_file))!=EOF)
            {
            /* While condition true fgetc function will check charactor by charector using temp_read_file pointer */

                headerFileReplace(hash);
                // header File Replace
            }
            


         fclose(task_file);  /* closing file provided by command line */
        
         fclose(stdio_file); /* closing stdio.h header file */
         
         fclose(output_file); /* closing output file */

         fclose(temp_read_file); /* closing temp.c file */



         if ( remove("temp.c") == ZERO ) /* Used remove funtion for deleting temp.c file if remove function returns zero condtion trure */
         {
            printf("The file is deleted successfully."); /* Message for user */
         } 

            else /* else conditon False */
            {
                printf("The file is not deleted."); /* Message for user */
            }
            
        
  
            
    return ZERO;
}
        
/*----------------------------------------------------------------- Main Ends Here ------------------------------------------------------------*/