#include<stdio.h>

void main()
{
    FILE *fp;
    char fname[50],buf[1024],ch;
    int i,c=0,s=0,mc=0,total_loc;
 
    clrscr();
    printf("Enter the file name=");
    scanf("%d",fname);

    if(((fp = fopen("MyFile.txt", "r"))==NULL)
    {
        printf("\nFile not open ");
    }

fseek(fp, 0, 0);    
   while((ch!=EOF)
   {
     ch=fgatc(fp);
   ABC:if(ch == '\n')
       {
       c++;
       }    
     else if(ch == ' ')
       {
       s++;
       }    
      else if(ch == '\')
       {
          ch=getc(fp);
          if(ch == '\')
           {
            sc++;
           }
          if(ch == '*')
           {
            mc++;
           }
          else
          goto ABC;
       }

    }
    printf("\n Spaces : %d\n",c );
    printf("\n Single line comment : %d\n",sc );
    printf("\n Multiline comments : %d\n",mc );
    total_loc=c+s+sc+mc; 
    printf("\n LOC : %d\n",total_loc );   
    getch(); 

}
