int main(int ac, char* av[])
{
    char *mode = av[1];
    char *file = av[2];
    int i;
    i = strtol(mode, 0, 8);
    if (chmod (file,i) < 0)
    {
        printf("Error");
        return 1;
    }
    return(0);
}
