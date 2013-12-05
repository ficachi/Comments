#include <stdio.h>
#include <stdlib.h>
static void BorrarComentarios(FILE *readd)
{
 char c;
 FILE *writee;
 writee = fopen("Output.txt","w");
 while((c=getc(readd))!=EOF)
 {
     if(c=='/')
     {
         c=getc(readd);
          if(c=='/')
          {
              c =getc(readd);
          }
         else if(c=='*')
          {
              c=getc(readd);
          }
     }
     else if(c=='*')
     {
         c=getc(readd);
         if(c=='/')
         {
             c=getc(readd);
         }
     }
     fputc(c,writee);
      }
 fclose(readd);
 fclose(writee);
}

int main()
{

    FILE *readd;
    readd = fopen("Input.txt","r");
    BorrarComentarios(readd);
    return 0;
}