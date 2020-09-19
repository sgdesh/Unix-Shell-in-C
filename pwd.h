void mpwd(int ac, char* av[])
{
  char ndir[100];
  char *L;
  L = getcwd(ndir, 100);
  printf ("%s", L);

}