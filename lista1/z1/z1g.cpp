#include<stdio.h>
int main(){
    char a[100]={4,1,8,8,11,-68,19,11,14,8,0,0};
    for(;a[12]<a[4];a[12]++)
    {
        printf("%c",sizeof(a)+a[a[12]]);
    }
    return 0;
}