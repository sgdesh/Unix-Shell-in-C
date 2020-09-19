#include <stdio.h>    
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <stdlib.h>    
#include <dirent.h>    
#include <string.h>    
#include <errno.h>


int main(int ac, char* av[])
{

  

    if(av[1]==NULL){
        printf("\n mkdir: missing operand");
        return 0;
    }
    else
    {
      char *path = av[1];
      int status = mkdir(path,0777);
    }
}
