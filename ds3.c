#include<stdio.h>
int main()
{
    int row,col,se,count=0;
    printf("enter the number of rows and colums");
    scanf("%d %d",&row,&col);
    int array[row][col];
    printf("entrt the %d elements: \n",(row*col));
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            scanf("%d",&array[i][j]);
        }
    }
    printf("enter the element to get the position: \n");
    scanf("%d",&se);
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(array[i][j]==se)
            {
                printf("(%d,%d)\n",i,j);
                count++;
            }
        }
    }
    if(count=0)
    printf("not found \n");
    return 0;
}