#include <string.h>
#include <stdio.h>
#include <stdlib.h>
char * encoded;
char * name; 
char alphebet[] = "abcdefghijklmnopqrstuvwxyyz";
int enlen;
  

char * encode(char en[]) {
    enlen = strlen(en);       
    char newnum[100] = "0" ;
    int length;
    char found[100];
    int null = 0;

    name = (char*)malloc(enlen * sizeof(char));
    strcat(name,en);
    length = strlen(name);
    encoded = (char*)malloc((length * 2) * sizeof(char));                                  

    for (int n = 0; n < length; n++)
    {
        for (int i = 1; i < strlen(alphebet); i++)
        {            
            if (name[n] == alphebet[i-1])
            {
                sprintf(found,"%d",i);               
                if (i > 10)
                {
                    strcat(encoded,found);                    
                }                
                else
                {                    
                    strcat(newnum,found);
                    strcat(encoded,newnum);
                }                
                sprintf(newnum,"%d",null);
                int i = 1;
                                
            }
            
        }
        
    }
    //puts(encoded);

    return encoded;
}
int  decode(char end[]) {
    int enlen;
    int i;
    int num;    
    int letternum = 1;
    char letter[1];
    enlen = strlen(end);
    for (int n = 0; n < (enlen / 2); n++)
    {
        if (end[letternum] > 1)
        {
            num = end[letternum];
            num = num * 10;
            letternum++;
            int add = end[letternum];
            num = num + add;
        }
        else{
            letternum++;
            num = end[letternum];
        }
        printf("%c",alphebet[num]);
        
        
        letternum++;
        //strcat(name,letter);        
    }

    //puts(name);
    return 0;
    
}

int main() {
    char num[2] = "02";
    decode(encode("s"));
    return 0;
}


