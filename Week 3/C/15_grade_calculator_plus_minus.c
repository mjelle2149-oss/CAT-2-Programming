#include <stdio.h>
int main(void) {
    double score; char grade, modifier=' ';
    printf("===== GRADE CALCULATOR =====\nEnter percentage score (0-100): ");
    if(scanf("%lf",&score)!=1 || score<0 || score>100) {
        printf("Invalid score! Must be between 0 and 100.\n"); return 1;
    }
    if(score>=90) grade='A'; else if(score>=80) grade='B';
    else if(score>=70) grade='C'; else if(score>=60) grade='D'; else grade='F';
    if(grade!='F') {
        int lastDigit=(int)score%10;
        if(grade=='A') { if(score>=97) modifier='+'; else if(score<93) modifier='-'; }
        else { if(lastDigit>=7) modifier='+'; else if(lastDigit<=3) modifier='-'; }
    }
    printf("Score: %.1f%%\nGrade: %c",score,grade);
    if(modifier!=' ') printf("%c",modifier);
    printf("\n");
    switch(grade) {
        case 'A': printf("Excellent work!\n"); break;
        case 'B': printf("Good job!\n"); break;
        case 'C': printf("Satisfactory.\n"); break;
        case 'D': printf("Needs improvement.\n"); break;
        case 'F': printf("Please seek help.\n"); break;
    }
    return 0;
}
