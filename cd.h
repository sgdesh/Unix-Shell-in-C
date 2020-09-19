


void mcd (int ac, char* av[])
{       char dir_n[3000];
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
