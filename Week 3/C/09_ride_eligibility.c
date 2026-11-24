#include <stdio.h>
int main(void) {
    int height, age, hasAdult, medicalClearance, hasVipPass;
    printf("Enter height (in inches): "); if(scanf("%d",&height)!=1) return 1;
    printf("Enter age: "); if(scanf("%d",&age)!=1) return 1;
    printf("Has adult? (1/0): "); if(scanf("%d",&hasAdult)!=1) return 1;
    printf("Has medical clearance? (1/0): "); if(scanf("%d",&medicalClearance)!=1) return 1;
    printf("Has VIP pass? (1/0): "); if(scanf("%d",&hasVipPass)!=1) return 1;
    int canRide = ((height>=48) && (age>=12 || hasAdult) && (age<=65 || medicalClearance)) || hasVipPass;
    printf("%s\n",canRide ? "You can ride!" : "Sorry, you cannot ride.");
    return 0;
}
