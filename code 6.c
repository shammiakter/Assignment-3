#include<stdio.h>
int main ()
{
    int a[6],i,count=0,x,found,position;
    printf("enter 6 number: ");
    for(i=0;i<6;i++){
       scanf("%d",&a[i]);
    }
    printf("Enter the number for searching: ");
    scanf("%d",&x);
    for( i=0;i<6;i++){
        if(a[i]==x){
            found=1;
            position=i+1;
            break;
        }

    }
    if(found==1)
    {
        printf("%d was found at location %d",x,position);
    }
     else{
            printf("%d was not found",x);
        }
    return 0;
}
