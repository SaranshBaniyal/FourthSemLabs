#include <stdio.h>
#include <stdlib.h>
#include<fcntl.h>
// #include<errno.h>
void main(){
    // system("tree");
    char fname[] = {'t','.','t','x','t','\0'};
    printf("%s",open(fname, O_RDONLY));
}