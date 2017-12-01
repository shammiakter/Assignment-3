#include<stdio.h>
int main ()
{
    int a[6],i,count=0,x,found;
    printf("enter 6 number: ");
    for(i=0;i<6;i++){
       scanf("%d",&a[i]);
    }
    printf("Enter the number for searching: ");
    scanf("%d",&x);
    for( i=0;i<6;i++){
        if(a[i]==x){
            found=1;
            break;
        }

    }
    if(found==1)
    {
        printf("%d was found",x);
    }
     else{
            printf("%d was not found",x);
        }
    return 0;
}
