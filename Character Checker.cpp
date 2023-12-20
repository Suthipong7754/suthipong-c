#include <stdio.h>
#include <string.h>
int main()
{
    char message[10000];
    int upper = 0,lower = 0;
        printf("");
    scanf("%s",message);
    int length = strlen(message);
    for(int i = 0;i <= length;i++){
        if(message[i] >= 'A' && message[i] <= 'Z')
            upper++;
        else{
            if(message[i] >= 'a' && message[i] <= 'z')
                lower++;
        }
    }
    if(upper != length && lower != length)
        printf("Mix");
        else{
            if(lower == length)
                printf("All Small Letter");
            else{
                printf("All Capital Letter");
            }
        }
    return 0;
}