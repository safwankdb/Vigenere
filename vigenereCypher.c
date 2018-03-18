#include<bits/stdc++.h>
//#include<stdio.h>
#include<string.h>
//#include<ctype.h>

int n = 0,t=0;
int get_increment(int i);
string x;

int main(int argc, string argv[])
{
    int sl1 = 0;
    if(argc ==2)
    {
    sl1=strlen(argv[1]);
    }
    for(int k=0;k<sl1;k++)
    {
        if(isalpha(argv[1][k])!=0)
        {
            t++;
        }
    }
    if(t==sl1)
    {
        if(argc == 2)
        {
            x = argv[1];
            printf("plaintext: ");
            string s = get_string();
            printf("ciphertext: ");
            for(int i=0,sl=strlen(s);i<sl;i++)
                {
                    if(isupper(s[i])!=0)
                    {
                    printf("%c",(s[i]-65+get_increment(i))%26+65);
                    }
                    else if(islower(s[i])!=0)
                    {
                        printf("%c",(s[i]-97+get_increment(i))%26+97);
                    }
                    else
                    {
                        n=n+1;
                        printf("%c", s[i]);
                    }
                }
            printf("\n");
        }
        else
        {
            printf("usage\n");
            return 1;
        }
    }
    else
    {
        printf("ERROR\n");
        return 1;
    }
}

int get_increment(int i)
{
    int sl = strlen(x);
    if(isupper(x[(i-n)%sl])!=0)
    {
        return x[(i-n)%sl]-65;
    }
    else if(islower(x[(i-n)%sl])!=0)
    {
        return x[(i-n)%sl]-97;
    }
    else
    {
        return 0;
    }
}