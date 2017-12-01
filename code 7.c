#include<stdio.h>
int main ()
{
    int a[6],i,count=0;
    printf("enter 5 number: ");
    for(i=0;i<5;i++){
       scanf("%d",&a[i]);
    }
    for( i=0;i<5;i++){
        if(a[0]<a[i]){
            a[0]=a[i];

        }

    }
        printf("largest number %d",a[0]);

    return 0;
}
