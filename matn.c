#include <stdio.h>

int main()
{
    FILE *file = fopen("matn.txt", "r");
    int matn;
    

    while (fscanf(file,"%d", &matn) == 1)
    {
        
         printf("Yigindi: %d\n", matn);
    }
       

     
  
    return 0;
}