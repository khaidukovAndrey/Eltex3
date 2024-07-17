#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>


int main(int argc,char *argv[])
{
    pid_t pid =0;

    switch(fork()){
        case 0:
            for(int i=0; i<argc; i++)
            {
                printf("Дочерний: %s\n", argv[i]);
            }
            break;
        case -1:
            printf("Fork error\n");
            break;
        default:
            for(int i=0; i<argc; i++)
            {
                printf("Родительский: %s\n", argv[i]);
            }
    }
    return 0;
}