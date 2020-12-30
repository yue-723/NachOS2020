#include "syscall.h"
main()
	{
		/*int	n;
		for (n=9;n>5;n--)
			PrintInt(n);*/
		
		int n;
		int arr[25];
		int sum = 0;
		for (n=0;n<25;n++){
			arr[n] = n;
			sum += arr[n];
			PrintInt(sum);
		}
		PrintInt(sum);
		
	}
