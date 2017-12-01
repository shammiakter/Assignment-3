#include<stdio.h>
int main ()
{
    int a[5],i,count=0;
    printf("enter 5 number: ");
    for(i=0;i<5;i++){
       scanf("%d",&a[i]);
    }
    for( i=0;i<5;i++){
        if(a[i]<10){
            count++;
        }
    }
    printf("There is %d numbers less than 10 in the array",count);
    return 0;
}
