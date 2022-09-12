#include <stdio.h>
#include <string.h>
int Encode(char n[50]){

    struct alphe
    {
        char alphebet[100];
        int length;
        char encoded[100];
        char foundv[2];
        char null[1];

    };

    struct alphe AL;

    int f = 0;
    strcpy(AL.alphebet,"0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZacdefghijklmnopqrstuvwxyz");
    strcpy(AL.null,"0");
    AL.length = (strlen(n) * 2);
    for (int i = 0; i < strlen(n); i++)
    {
        f = 0;
        for (int i1 = f; i1 < 1;)
        {
            if (n[i] == AL.alphebet[i1])
            {
                f = 1;
                if (i1 < 10)
                {
                    strcpy(AL.foundv,AL.alphebet[i1]);                    
                }
                else{
                    strcpy(AL.foundv,strcpy(AL.null,AL.alphebet[i1]));
                }                
            }
            return AL.encoded;             
        }                
    }
               
}

int main(void) {
    char enc[30];
    char name[] = "sudiv";
    strcpy(enc,Encode(name));
    puts(enc);

    return 0;

}