
#include<stdio.h>
#include<fcntl.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int fd = 0;
    char fname[30];
    int iret = 0;
    int isize = 0;

    char arr[50] = {'\0'};

    printf("enter the file name that you wnat to open: \n");
    scanf("%s",fname);

    printf("enter the number of bytes that you want to read: \n");
    scanf("%d",&isize);
    fd = open(fname, O_RDWR);

    if(fd == -1)
    {
        printf("unable to open the file \n");
        return -1;
    }

    iret = read(fd,arr,isize);

    printf("%d bytes gets successfully written in the file: \n",iret);
    printf("data from file is: \n");
    write(1,arr,iret);
    
    close(fd);
    
    return 0;
}