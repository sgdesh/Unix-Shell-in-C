#include <stdio.h>    
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <stdlib.h>    
#include <dirent.h>    
#include <string.h>    
#include <errno.h>
#include <pwd.h>
#include <grp.h>


int main(int ac, char* av[])
{
    char *source= av[1];
    char *dest= av[2];
    char ndir[100];

    if(ac!=3)
        printf("mv: missing file operand");
    else
    {
        if(dest[0]!='/')				
        
        {
            DIR *P;
            P = opendir(dest); 				
            if(P==NULL)
            {
                if( rename(source,dest)!= 0)
                    printf("Error\n");
               
            }
            else
            {
                char *L;
                L = getcwd(ndir, 100);		 
                strcat(ndir,"/");				
                strcat(ndir,dest);			
                strcat(ndir,"/");
                strcat(ndir, source);				
                closedir(P);
            }
        }
        else
         {
            strcat(dest,"/");			
            strcat(dest,source);
            if(rename(source, dest)!= 0) 
               printf("No such file or directory \n");
        }
        
    }
    return 0;
}

