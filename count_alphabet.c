#include<stdio.h>
int main()
{
    int i,k,count=0;
    char str[20];
    int temp[26]={0};
    printf("Enter the exp:");
    scanf("%s",str);
    for(i=0;str[i]!='\0';i++)
    {

        if((64<str[i])&&(str[i]<91))
        {
            k=str[i]-'A';
            temp[k]=1;

        }
    }
    for(i=0;i<26;i++)
    {
        if(temp[i]==1)
        {
            count++;
        }
    }
    printf("count is : %d",count);
    return 0;
}
