#include <stdio.h>    
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <stdlib.h>    
#include <dirent.h>    
#include <string.h>    
#include <errno.h>
#include<string.h>
#pragma GCC diagnostic ignored "-Wimplicit-function-declaration"
#include "cat.h"
#include "cd.h"
#include "chmod.h"
#include "cp.h"
#include "grep.h"
#include "ls.h"
#include "mkdir.h"
#include "mv.h"
#include"pwd.h"



int main(int argc , char *argv[])
{
        
        pid_t pid;
        pid = fork();
        if(pid==0){

            printf("Bacground process: %d\n",(int) getpid());
            
            execvp(argv[0]+2,argv);
            
            return 0;
        
        }
}























//Concept Ref: https://github.com/hareeshreddi/Shell-in-c/blob/master/Shell.c
