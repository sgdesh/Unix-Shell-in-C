int mgrep(int argc, char *argv[])
{
    int i;
    if(argc<2)
    {
        perror("Error Usage: grep [OPTION]... PATTERN [FILE]...\n");
	      exit(1);
    }
    char buff[4000];
    for (i = 2; i < argc; i++) 
    {
      FILE *f = fopen(argv[i], "r");
      if (f == NULL) {
        perror("Error: unable open file\n");
      }

      while(fgets(buff, 4000, f) != NULL)
      {
          if(strstr(buff,argv[1])!=NULL)
          {
              printf("%s",buff);
          }
      }
    fclose(f);
    }
    return 0;
}