#include <stdio.h>
#include <string.h>

int main() {
    char name[] = "amanie";                                 //Your name goes here.
    char alphebet[] = "abcdefghijklmnopqrstuvwxyyz";
    char encoded[100];                                      //This is the string where your encoded value stores.
    char newnum[100] = "0" ;
    int length;
    char found[100];
    int null = 0;    


    length = strlen(name);                                  

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
    puts(encoded);

    return 0;

}
        


