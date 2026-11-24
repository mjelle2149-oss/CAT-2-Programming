#include <stdio.h>
int main(void) {
    int a,b,c;
    printf("Enter three different numbers: ");
    if(scanf("%d%d%d",&a,&b,&c)!=3) return 1;
    if(a>b) {
        if(b>c) printf("Path 1: a > b > c\n");
        else if(a>c) printf("Path 2: a > c > b\n");
        else printf("Path 3: c > a > b\n");
    } else {
        if(a>c) printf("Path 4: b > a > c\n");
        else if(b>c) printf("Path 5: b > c > a\n");
        else printf("Path 6: c > b > a\n");
    }
    return 0;
}
