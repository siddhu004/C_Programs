#include<stdio.h>    
#include<stdlib.h>   

int maximum(int arr[],int ilength)
{
    int icnt = 0;
    int imax = arr[0];
    
    for(icnt = 0;icnt < ilength;icnt++)
    {
        if(arr[icnt] > imax)
        {
            imax = arr[icnt];
        }
    }
    return imax;
}

int main()  
{
    int isize = 0;   
    int *ptr = NULL; 
    int icnt = 0;    
    int iret = 0;

    printf("enter the elements: \n");
    scanf("%d",&isize);

    ptr = (int *)malloc(isize * sizeof(int));

    printf("enter the elements: \n");
    for(icnt = 0;icnt < isize;icnt++)
    {
        scanf("%d",&ptr[icnt]);
    }

    printf("elements of array are: \n");
    for(icnt = 0;icnt < isize;icnt++)
    {
        printf("%d\n",ptr[icnt]);
    }
 
    iret = maximum(ptr,isize);
    printf("maximum is : %d",iret);

    free(ptr);

    return 0;     
}