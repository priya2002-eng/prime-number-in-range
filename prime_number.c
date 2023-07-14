#include <stdio.h>
int checkprime(int n){
  int j, flag = 1;

  for(j=2; j<=n/2; j++){
    if(n%j == 0){
      flag = 0;
      break;
    }
  }
  return flag;
}
int main(){
  int n1,n2,i,flag;
  scanf("%d %d", &n1, &n2);
  if(n1 < n2){
    n1 = n1 + n2;
    n2 = n1 - n2;
    n1 = n1 - n2;
  }
  for(int i=n1+1; i<n2; i++){
    flag = checkprime(i);
    if(flag == 1){
      printf("%d", i);
    }
  }
}
