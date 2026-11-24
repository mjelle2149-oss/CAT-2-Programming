#include <stdio.h>
int main(void) {
    int count, totals[5]={0};
    printf("How many students? ");
    if(scanf("%d",&count)!=1 || count<=0 || count>1000) { printf("Invalid number.\n"); return 1; }
    for(int i=0;i<count;i++) {
        char name[60], grade; double score;
        printf("\nStudent %d name: ",i+1);
        if(scanf(" %59[^\n]",name)!=1) return 1;
        printf("Score (0-100): ");
        if(scanf("%lf",&score)!=1 || score<0 || score>100) { printf("Invalid score.\n"); return 1; }
        if(score>=90) grade='A'; else if(score>=80) grade='B';
        else if(score>=70) grade='C'; else if(score>=60) grade='D'; else grade='F';
        printf("%s: %.1f%% - Grade %c\n",name,score,grade);
        if(grade=='A') totals[0]++; else if(grade=='B') totals[1]++;
        else if(grade=='C') totals[2]++; else if(grade=='D') totals[3]++; else totals[4]++;
    }
    printf("\n===== CLASS SUMMARY =====\nA: %d\nB: %d\nC: %d\nD: %d\nF: %d\n",
           totals[0],totals[1],totals[2],totals[3],totals[4]);
    return 0;
}
