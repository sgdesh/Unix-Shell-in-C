#include<stdio.h>
#include <stdlib.h>
#include <unistd.h>
int main(int argc , char *argv[])
{         int i;
          FILE *f;
          
          for (i = 1; i < argc; i++)    
            {  
              char line[1000];
              f = fopen(argv[i],"r");
      
              while(fscanf(f,"%[^\n]\n",line)!=EOF)
               {
                    printf("%s\n", line);
               }
               fclose(f);
               printf("\n \n \n");
            }
}
