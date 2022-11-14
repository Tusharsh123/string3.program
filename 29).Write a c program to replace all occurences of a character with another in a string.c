#include <stdio.h>

int replace(char *s,char oldchar,char newchar)
{
    int i;
    for(i=0;s[i];i++){
        if(s[i]==oldchar){
            s[i]=newchar;
            
        }
    }
}

 int main(){
 char s[100], oldch, newch;
 gets(s);
 oldch = getchar();
 fflush(stdin);
 newch = getchar();
 replace(s, oldch, newch);
 puts(s);
}

         