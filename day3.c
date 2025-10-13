
#include <stdio.h>

int main(){
     float c = 37.00, f;
    f = ((9.0/5)*c) + 32;
    printf("The value in fahrenheit is %f", f);
    return 0;
}

#include <stdio.h>

int main(){
       int a,b,i;
    printf("ENTER THE VALUE OF a:");
    scanf("%d",&a);
    printf("ENTER THE VALUE OF b:");
    scanf("%d",&b);
    printf("\n BEFORE SWAPPING : a = %d,b =%d\n",a,b);
    i=a;
    a=b;
    b=i;
    printf("AFTER SWAPPING : a=%d,b=%d",a,b);
    return 0;
}
