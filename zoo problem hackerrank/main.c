#include<stdio.h>
#include<stdlib.h>
int main()
{

    int i,count=0,temp=0;
    char arr[50];
    gets(arr);
    for(i=0;i<strlen(arr);i++)
    {
        if(arr[i]=='o')
        {
            count++;
        }
        if(arr[i]=='z')
        {
            temp++;
        }

    }
    if(count==2*temp)
    {
        printf("yes\n");
    }
    //printf("%d",count);
    return 0;
}
