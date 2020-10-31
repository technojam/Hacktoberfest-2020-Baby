#include <stdio.h>
#include <string.h>

void main()
{
    char str[] = "Aditya";
    int i;
    int ln = strlen(str);
    for(i = 0 ; i<ln; i++){
        if(i%2 == 0){
            str[i] = tolower(str[i]);
        }
        else {
            str[i] = toupper(str[i]);
        }
        
    }
    printf("%s",str);
}
