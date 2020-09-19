#include <fcntl.h>
#include <stdio.h>
#include <errno.h>
#include <stdlib.h>
#include <string.h> 
#include <unistd.h> 
#include <libgen.h> 
#include <sys/shm.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>


char dir_n[3000];


int main(int ac, char* av[])
{
        if(av[1]==NULL)
            printf("Insufficient Arguments ");
        else
        {
            if(chdir(av[1])!=0) 
                printf("No such directory exists");
            else
            {
                
                char* buff=(char*)malloc(sizeof(char)*256);
                size_t size;
                buff=getcwd(NULL,0);
                if(!buff)
                    { printf("get_current_dir_name");}
                else
                    printf("%s\n",buff);
                    char *dir_n = buff;
            }
        }
    
}    
