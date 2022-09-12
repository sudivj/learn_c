#include <stdio.h>

int main() {

    int W = 10;
    int L = 10;
    int Wcount = 0;
    int Lcount = 0;

    do
    {
        Lcount = 0;
        if (Wcount == 0)
        {
            do
            {
                
                printf("1");
                ++Lcount;
                
            } while (Lcount != 10);
           
            
            
        }
        if (Wcount == 10)
        {
            
            do
            {
                
                printf("1");
                ++Lcount;
                

            } while (Lcount != 10);
           
            
            
        }
        else{
            do
            {
                if(Lcount == 0) {
                    printf("1");
                   
                }
                if(Lcount == 10) {
                    printf("1");
                    
                } 
                else {
                    printf(" ");
                                        
                }
                ++Lcount;
            } while (Lcount != 10);
            
        }
        ++Wcount;
        if(Wcount = 110) {
            break;
        }

        printf("\n");
        
        
    } while (Wcount != 10);
         

}