#include <stdio.h>

int main(int argc, char const *argv[]) {
  int num = 1;
  int count = 0; //Use only for task 4.1, 4.2
  int countHun =0;
  int max=0;
	printf("Type input: ");
	scanf("%d",&num);
  /*Read input from user into variable num*/

  /*Input validation*/
	if(num<3||num>1000){
		return 0;
	}
	

  while (num != 1) {  //main cycle
    /* code */
    count++;
    if(num%2==0){
    	num=num/2;
	}else{
		num=num*3+1;
	}
	if(num>=100&&num<=200){
		countHun++;
		if(num>max){
			max=num;
		}
	}
	
    printf("\nResult %d", num);
  }
  printf("\n");
  printf("\n\nCount %d", count);
  printf("\nResult for count from 100 to 200 %d", countHun);
  printf("\nResult for max from 100 to 200 %d", max);
  return 0;
}
