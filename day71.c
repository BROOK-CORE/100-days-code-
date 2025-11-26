/ Q71: Read and print a matrix.

#include<stdio.h>

int main(){
int i,j,r,c;
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
  printf("%d " , arr[i][j]);
}
printf("\n");}
return 0;
}
