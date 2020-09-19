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
#include"rm.h"






int main(int argc , char *argv[])
{

 if(strcmp(argv[0],"./cat")==0)
 {
    mcat(argc,argv);
    printf(" hjf %s",argv[0]);
  
  }
 else if(strcmp(argv[0],"./cd")==0)
 {
    mcd(argc,argv);
    
  }
  
 else if(strcmp(argv[0],"./chmod")==0)
 {
    mchmod(argc,argv);
    
  }
  else if(strcmp(argv[0],"./cp")==0)
 {
    mcp(argc,argv);
    
  }
 

 else if(strcmp(argv[0],"./grep")==0)
 {
    mgrep(argc,argv);
    
  }

 else if(strcmp(argv[0],"./ls")==0)
 {
    mls(argc,argv);
    
  }

else if(strcmp(argv[0],"./mkdir")==0)
 {
    mmkdir(argc,argv);
    
  }

 else if(strcmp(argv[0],"./mv")==0)
 {
    mmv(argc,argv);
    
  }

else if(strcmp(argv[0],"./pwd")==0)
 {
    mpwd(argc,argv);
    
  }

else if(strcmp(argv[0],"./rm")==0)
 {
    mrm(argc,argv);
    
  }
 else
 {
   execvp(argv[0]+2, argv);
 }
  


}
