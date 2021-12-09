#include<stdio.h>
int bs(int array[],int sintex,int eintex,int elements)
{
    while(sintex<=eintex)
    {
        int middle=sintex+(eintex-sintex)/2;
        if(array[middle]==elements)
            return middle;
        if(array[middle]<elements)
            sintex=middle+1;
        else
            eintex=middle-1;    
    }
    return -1;
}
int main(void)
{
    int array[]={1,4,7,9,16,56,70};
    int n=7;
    int element=16;
    int fintex=bs(array,0,n-1,element);
    if(fintex==-1)
    {
        printf("element not found in the array\n");
    }
    else{
        printf("element found at intex: %d\n",fintex);
    }
    return 0;
}