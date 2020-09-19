int mmkdir(int ac, char* av[])
{

  

    if(av[1]==NULL){
        printf("\n mkdir: missing operand");
        return 0;
    }
    else
    {
      char *path = av[1];
      int status = mkdir(path,0777); // all required permissions given with 0777
    }
}