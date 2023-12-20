#include <stdio.h>
#include <array>
int main(){
    int array_data[] = {10,20,30,40,50};
    int i;
    int size_array = sizeof(array_data) / sizeof(int);
    for (i=0;i<size_array;i++)
    {
        printf("Data index = %d\n",i);
        printf("Value = [%d]",array_data);
    }
    return 0;
}
