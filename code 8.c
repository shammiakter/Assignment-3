#include<stdio.h>
int main ()
{
    int a[6],i,count=0,x;
    printf("enter 5 number: ");
    for(i=0;i<5;i++){
       scanf("%d",&a[i]);
    }
    for( i=0;i<5;i++){
        if(a[0]<a[i]){
            a[0]=a[i];
            x=i+1;
        }

    }
        printf("largest number %d was found at location %d ",a[0],x);

    return 0;
}
