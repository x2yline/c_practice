// stdio.h为包含标准输入和输出函数的头文件
#include <stdio.h>

// 定义一个hello函数, 不接受参数, 也不返回任何值, 只执行打印
void hello(void)
{
	printf("Hello, World!\n");
}

// main函数为系统已经声明好的行数, 程序运行时会自动执行
int main()
{
	hello();

	return 0;
}