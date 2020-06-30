#include <stdio.h>
#include <math.h>
int UporLow(char a);
int main()
{
    char t;
    int i,j,x,y;
    char p[] = "aBbA";
    char *str = p;
    int len;
    len = strlen(p);
    printf("%s\n",str);
    for(i=0; i<len; i++)
    {
        for(j=0; j<len-i-1; j++)
        {
            x = UporLow(*(str+j));
            y = UporLow(*(str+j+1));
            if(x>y)
            {
                t = *(str+j);
                *(str+j) = *(str+j+1);
                *(str+j+1) = t;
            }
        }
    }
    printf("%s",str);
    return 0;
}

int UporLow(char a)
{
    int x;
    if(a-'a'>=0&&a-'z'<=0)
        x = a-'a';
    else if (a-'z'<=0&&a-'A'>=0)
        x = a-'A';
    return x;
}