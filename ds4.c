#include<stdio.h>
int main()
{
    char dstr[100],sstr[100];
    int i=0,j=0;
    printf("\n enter the source string: ");
    scanf("%s",sstr);
    printf("\n enter the destination string: ");
    scanf("%s",dstr);
    while(dstr[i]!='\0')
        i++;
    while(sstr[j]!='\0')
    {
        dstr[i]=sstr[j];
        i++;
        j++;
    }    
    dstr[i]='\0';
    printf("\n after appending,the destination string is: ");
    printf("%s\n",dstr);
    return 0;
}