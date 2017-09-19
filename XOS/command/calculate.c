#include "stdio.h"
#include "string.h"
#define isdigit(c) ((c) >= '0' && (c) <= '9')

int ints[10000];
int intt;//ints的top 
char chas[10000];
int chat;//chas的top 
int i=0, ii=1;
char c;
char* get;//输入的中缀表达式 
char get2[10000];//计算得出的后缀表达式 

void intpush(int x)//整型栈压栈 
{
    intt++;    ints[intt]=x;
}
void chapush(char x)//字符型栈压栈 
{
    chat++;    chas[chat]=x;
}
int intpop()//整型栈弹出 
{
    intt--;    return ints[intt+1];
}
char chapop()//字符型栈弹出 
{
    chat--;    return chas[chat+1];
}
void intadd(int x)//整型栈栈顶元素加入新的个位数字 
{
    ints[intt]*=10;    ints[intt]+=x;
}
int pow(int a,int b)
{
    int temp = a;
    int i=0;
    for(i=1;i<b;i++)
    {
        a*=temp;
    }
    return a;
}
int find()//get2加入操作符 
{
    c=chapop();
    get2[ii]=' ';
    get2[ii+1]=c;
    ii+=2;
    if(chat==0) return 0;
    return 1;
}

int main(int argc, char* argv[])
{
    intt=0;    chat=0;
    get = argv[1];
    int lengets=strlen(get);
    for(i=0;i<=lengets-1;i++)//逐个读取输入的中缀表达式 
    {
        if (isdigit(get[i]))//当get[i]为数字时 
        {
            get2[ii]=get[i];
            ii++;
        }
        else
        {
            if(get[i]=='(')chapush('(');
            if(get[i]=='^')chapush('^');
            if(get[i]==')')
            {
                c=chapop();
                while(c!='(')
                {
                    get2[ii]=' ';
                    get2[ii+1]=c;
                    ii+=2;
                    c=chapop();
                }
            }
            if(get[i]=='+')
            {
                while(chas[chat]=='+'||chas[chat]=='-'||chas[chat]=='*'||chas[chat]=='/'||chas[chat]=='^')
                {
                    if(find()==0)break;
                }
                chapush('+');
            }
            if(get[i]=='-')
            {
                while(chas[chat]=='+'||chas[chat]=='-'||chas[chat]=='*'||chas[chat]=='/'||chas[chat]=='^')
                {
                    if(find()==0)break;
                }
                chapush('-');
            }
            if(get[i]=='*')
            {
                while(chas[chat]=='*'||chas[chat]=='/'||chas[chat]=='^')
                {
                    if(find()==0)break;
                }
                chapush('*');
            }
            if(get[i]=='/')
            {
                while(chas[chat]=='*'||chas[chat]=='/'||chas[chat]=='^')
                {
                    if(find()==0)break;
                }
                chapush('/');
            }
            get2[ii]=' ';
            ii++;
        }
        
    }
    while(chat>0)//输出栈内剩余的操作符 
    {
        int c=chapop();
        get2[ii]=' ';
        get2[ii+1]=c;
        ii+=2;
    }
    get2[ii]='@';//加入结束符 
    i=1;
    while(get2[i]!='@')//当看到结束符停止计算 
    {
        if(get2[i]=='+'||get2[i]=='-'||get2[i]=='*'||get2[i]=='/'||get2[i]=='^')
        {
            int a=intpop();int b=intpop();int c;
            if(get2[i]=='+') c=a+b;
            if(get2[i]=='-') c=b-a;
            if(get2[i]=='*') c=a*b;
            if(get2[i]=='/') c=b/a;
            if(get2[i]=='^') c=pow(b,a);
            intpush(c);
        }
        else
        {
            if(get2[i]!=' ')
            {
                intpush(get2[i]-48);
                ii=1;
                while(get2[i+ii]!=' ')
                {
                    intadd(get2[i+ii]-48);
                    ii++;
                }
                i+=ii-1;
            }
        }
        i++;
    }
    printf("%d\n",ints[1]);
    return 0;
}