#include <stdio.h>
int main(void) {
    int age, hasTicket, isMember, isBanned;
    printf("Enter age: "); if(scanf("%d",&age)!=1 || age<0) return 1;
    printf("Do you have a ticket? (1 yes, 0 no): "); if(scanf("%d",&hasTicket)!=1) return 1;
    printf("Are you a member? (1 yes, 0 no): "); if(scanf("%d",&isMember)!=1) return 1;
    printf("Are you banned? (1 yes, 0 no): "); if(scanf("%d",&isBanned)!=1) return 1;
    int canEnter = (age>=18 && hasTicket && !isBanned) || (isMember && !isBanned);
    printf("%s\n",canEnter ? "You can enter the event!" : "Sorry, you cannot enter.");
    return 0;
}
