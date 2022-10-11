#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int sumTwo(int a, int b)
	{
		int output;
		output = a+b;
		return output;
	}
	
	int sum = sumTwo(2,3);
	printf("%d",sum);
	
	
	int square (int n)
	{
	   int output;
	   output =n*n;
	   return  output;
	}
	
	int c=square(5);	
	printf("%d",c);
	
	int get_max(int x, int y)
	{
		if(x>y) return (x);
		else return(y);	                     
	}
	
int res_sum= sumTwo(2,3);
int res_square=square(5);
int res_max=get_max(5,7);

printf("%d%d%d",res_sum,res_square,res_max);

  
	
	
	
	return 0;
}
