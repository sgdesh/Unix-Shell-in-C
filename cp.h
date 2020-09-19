int mcp(int ac, char* av[])
{
    FILE *fp1, *fp2;
    char *src= av[1];
    char *dest= av[2];
    if(ac<=2)
    {
        printf("Error : Insufficient Arguments");
        return 0;
    } 
    else
    {
      fp1 = fopen(src, "r");
      if (fp1 == NULL) 
      { 
        printf("Error: Unable open file \n"); 
        exit(0); 
      } 
      fp2 = fopen(dest, "w");
      if (fp1 == NULL) 
      { 
        printf("Error: Unable open file \n"); 
        exit(0); 
      } 
      char cp;
      while ((cp=getc(fp1)) != EOF) 
      { 
        putc(cp, fp2); 
        
      } 
      fclose(fp1); 
      fclose(fp2); 
      return 0; 
    }
}

