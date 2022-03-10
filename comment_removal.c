
#include"header.h"

/* user defiend header filed included */


/* remove_comment function defination starts form here */ 

void remove_comment(char slash) 
{
    if (slash == '/') /* if '/' found condition true */
    {

        star = fgetc(task_file); /* using taks_file pointer trying to find next element */

        if( star == '*' )  /* if '*' found condition true */
        {
            /* Multiline Comment Found  */

            while((starTwo = fgetc(task_file)) != EOF )   
            {
                /* while conditon true using task_file pointer trying to fetch next element charactor by charactor */

                if(starTwo == '*')    /* if '*' found condition true */
                {
                    slashTwo=fgetc(task_file); /* using taks_file pointer trying to find next element */

                        if(slashTwo=='/') /* if '/' found condtion true */
                            break;        /* then break the loop and send updated pointer to else condition to write reamaining element without commnet */
                                            
                                            
                }
            }

        }

        else 
        {  /* if second if condition false it will come in else part for removing single line commnet */
                        
                        
            while((singleComment = fgetc(task_file)) != EOF)  /* while conditon true */
            {
                if(singleComment == '\n')  /* if '/n' found conditon true */
                break;  /* break the loop and updated pointer sent to the else part */ 

            }
        }

    }

                

    else 
        fputc(slash,temp_file); /* after first break updated pointer trying to write element without comment */

    
}


/* remove_comment function defination ends here */ 


