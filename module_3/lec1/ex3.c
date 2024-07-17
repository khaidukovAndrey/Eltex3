#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    switch(fork())
    {
        case 0:
            for(int i = 2; i<argc; i+=2)
            {
                printf("Д.п.: %d\n", atoi(argv[i])*atoi(argv[i]));
            }
            break;
        case -1:
            printf("Fork error");
            break;
        default:
            for(int i = 1; i<argc; i+=2)
            {
                printf("Р.п.: %d\n", atoi(argv[i])*atoi(argv[i]));
            }
    }
    return 0;
}