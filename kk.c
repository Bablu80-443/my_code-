#include <stdio.h>
// int main(){
//     int a[];
//     a[4]={1,2,3,4};
//     printf("%d", a[0]);
//     return 0;
///}
int main(){
    int a[3]={20,30,40};
    int *p[3];
    p=&a;
    printf("%d", *p[0]);
    return 0;
}