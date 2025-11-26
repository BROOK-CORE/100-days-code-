// Q72: Find the sum of all elements in a matrix.

#include<stdio.h>

int main(){
int i,j,r,c,sum =0;
printf("ENTER THE NUMBER OF ROWS : ");
scanf("%d" , &r);
printf("ENTER THE NUMBER OF COLUMNS : ");
scanf("%d" , &c);
int arr[r][c];
for(i=0;i<r;i++){
for(j=0;j<c;j++){
scanf("%d" , &arr[i][j]);
}
}
for(i=0;i<r;i++){
for(j=0;j<c;j++){
sum += arr[i][j];
}
}
printf("THE SUM IS :%d" , sum);
return 0;
}
