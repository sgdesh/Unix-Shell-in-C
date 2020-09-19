#define STRINGSIZE 1024

void print_dir(char *pathname) {
    DIR *dp;
    struct stat sb;
    if (stat(pathname, &sb) == -1){
        // Error handling
        fprintf(stderr, "stat: cannot stat '%s': %s\n", pathname,strerror(errno));
        exit(EXIT_FAILURE);
    }

    if (S_ISDIR(sb.st_mode)) {
        if ((dp = opendir(pathname)) == NULL){
            // Error handling
            fprintf(stderr, "opendir: cannot opendir '%s': %s\n", pathname,strerror(errno));
            exit(EXIT_FAILURE);
        }
        
        struct dirent *d;
        while ((d = readdir(dp)) != NULL) {
            if(strcmp(d->d_name,".")==0) {}
            else if (strcmp(d->d_name,"..")!=0) {
                char path_string[STRINGSIZE] = "";
                print_dir(d->d_name);
                
            }
        }
        closedir(dp);
    }
    else {
        printf("%s   ", pathname);
    }
}

int mls(int argc, char *argv[]) {
    char * pathname = ".";

    if(argc>2) {
        // Error handling
        fprintf(stderr,"Usage: %s [filename]", argv[0]);
        exit(EXIT_FAILURE);
    }

    if (argc==2) pathname = argv[1];
    print_dir(pathname);
    return 0;
}