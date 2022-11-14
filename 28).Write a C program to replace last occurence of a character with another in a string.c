#include <stdio.h>
int lastindexof(char*s, char ch)
{
    int i;
    for(i=0; s[i]; i++);
    for(i--; i>=0 && s[i]!=ch; i--);
    return -1;
    
}
void replacelast(char *s,char old,char newch)
{
   int i= lastindexof(s,old);
   if(i!=-1)
   s[i] = newch;
   
   
}


 void main(){
 char s[100],old,newch;
 gets(s);
 old= getchar();
 flushall();
 newch=getchar();
 replacelast(s,old,newch);
 puts(s);