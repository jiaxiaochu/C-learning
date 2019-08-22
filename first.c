#include <stdio.h>
int main(int argc, char const *argv[])	// 一个简单的c程序
{
	int num;	// 定义一个名为num的变量
	num = 1;	// 为num赋一个值

	// printf("%s\n", );
	printf("I am a simple");	// 使用printf()函数
	printf("computer.\n");
	printf("My favorite number is %d because it is first.\n", num);	

	return 0;
}

// 程序的第一行 #include<stdio.h> 是预处理指令，告诉C编辑器在实际编译之前要包含 stdio.h 文件
// 下一行 int main() 是主函数，程序从这里开始执行
// 下一行 printf("%s\n", ); 是 C 中另一个可用的函数，会在屏幕上显示消息"hello,wold!"
// 下一行 return 0;终止 main()函数，并返回值 0


// gcc编译main.c
// windows系统
	// 方式一：gcc 源文件名 -o 可执行文件名
	// 例子：gcc main.c -o main
// mac/Linux系统
	// 方式一：gcc 源文件名 -o 可执行文件名
	// 例子：gcc main.c -o main
	// 方式二：gcc -o 可执行文件名 源文件名
	// 例子：gcc -o main main.c