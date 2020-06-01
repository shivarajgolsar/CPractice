#include <stdio.h>
#include <stdlib.h>

int Validate_Pwd(char[]);
int stringlength(char[]);

/* This function validate the Pwd */
int Validate_Pwd(char a[])
{
    char c;
    int len,flag1=0,flag2=0,flag3=0,flag4=0;
    
    len=stringlength(a);
    
    if(len<6)
    flag1=1;
    else
    {
        for(int i=0;i<len;i++)
        if((a[i]>=48&&a[i]<=58))
        {
            flag2=0;


            break;
        }
        else
        flag2=1;


        for(int i=0;i<len;i++)
        if((a[i]>=65&&a[i]<=90))
        {
            flag3=0;


            break;
        }
        else
        flag3=1;


        for(int i=0;i<len;i++)
        if(a[i]=='#'||a[i]=='$'||a[i]=='*'||a[i]=='&')
        {
            flag4=0;


            break;
        }
        else
        flag4=1;



    }
    if(flag1==1||flag2==1||flag3==1||flag4==1)
    return 0;
    else
    return 1;
}

int stringlength(char s[])
{
 int i;
  for (i = 0; s[i] != '\0'; ++i);
  return i;
}

int main()
{
int Val_Pass;
char ch = "Abcd12$";
Val_Pass = Validate_Pwd(ch);
printf("Val_Pass %d", Val_Pass);
return 0;
}
