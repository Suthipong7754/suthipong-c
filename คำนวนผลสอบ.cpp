#include <stdio.h>
#include <math.h>
int main(){
    float score,fullmarks,percent;
    printf("score : ");
    scanf("%f",&score);
    printf("Example : ");
    scanf("%f",&fullmarks);
    percent = (score / fullmarks) * 100;
    if(percent > 50){
        printf("your score is : %.2f\n",score);
        printf("= %.0f percent \n",percent);
        printf("Your Are Passed The Exam");
    }
    else{
        printf("your score is : %.2f\n",score);
        printf("= %.0f percent \n",percent);
        printf("Your Aren't Passed The Exam");
    }
    return 0;

}
