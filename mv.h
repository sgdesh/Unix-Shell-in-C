int mmv(int ac, char* av[])
{
    char *source= av[1];
    char *dest= av[2];
    char ndir[100];

    if(ac!=3)
        printf("mv: missing file operand");
    else
    {
        if(dest[0]!='/')				//check to see if input is a path
        
        {
            DIR *P;
            P = opendir(dest); 				// check if argument is a DIR in CWD

            if(P==NULL)
            {
                if( rename(source,dest)!= 0)
                    printf("Error\n");
               
            }
            else
            {
                char *L;
                L = getcwd(ndir, 100);		// get current working directory path 
                strcat(ndir,"/");				
                strcat(ndir,dest);			// attach mv location to path ptrL
                strcat(ndir,"/");
                strcat(ndir, source);				// keep original file name
                closedir(P);
            }
        }
        else
         {
            strcat(dest,"/");			//if argument is a Full Path, prepare to mv to end of path.
            strcat(dest,source);
            if(rename(source, dest)!= 0) 
               printf("No such file or directory \n");
        }
        
    }
    return 0;
}

