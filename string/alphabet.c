#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,apl=0,dig=0,sp=0;
    char str[20]="shrey gangwar18.";
    int len=strlen(str);
  
    for(i=0;i<len;i++)
    {
        if((str[i]>='A'&&str[i]<='Z')||(str[i]>='a'&&str[i]<='z'))
        {
            apl++;
        }
        else if(str[i]>='0'&&str[i]<='9')
        {
            dig++;
        }
        else
        {
            sp++;
        }
        
    }
    printf("total number are alphabet are %d\n",apl);
    printf("total number are digit are %d\n",dig);
    printf("total number are special character are %d",sp);

}