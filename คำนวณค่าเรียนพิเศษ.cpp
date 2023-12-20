#include <stdio.h>
int main()
{
    int total_hours, price = 250, total,Change, pay;
    int score;
    printf("Enter Hour : ");
    scanf("%d",&total_hours);
    total = price * total_hours;
    printf("Total = %d\n",total);
    printf("Pay : ");
    scanf("%d",&pay);
    Change = pay - total;
    printf("Change = %d\n",Change);
    if(Change > 0){
        printf("Has Change\n");
    }
    else {
    	printf("Not Change\n");
	}
	printf("Score : ");
	scanf("%d",&score);
    if (score > 5)
    {
        printf("Pass The Exam!!!");
    }
    
    return 0;
}
