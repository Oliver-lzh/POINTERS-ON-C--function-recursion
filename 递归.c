#include <stdio.h>
#include <string.h>
//使用递归的方法求解字符串的长度



int main()
{
	char arr[] = "bit";
	printf("%d\n", my_strlen(arr));

	return 0;
}


int my_strlen(char* str)
{
	if (*str != '\0')
		return 1 + my_strlen(str + 1);
	else
		return 0;
			
}