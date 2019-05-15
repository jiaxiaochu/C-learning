# include <stdio.h>
int main(int argc, char const *argv[])
{
	printf("hello,world! \n");
	return 0;
	/* code */
	// return 0;
}

// 程序的第一行 #include<stdio.h> 是预处理指令，告诉C编辑器在实际编译之前要包含 stdio.h 文件
// 下一行 int main() 是主函数，程序从这里开始执行
// 下一行 printf("%s\n", ); 是 C 中另一个可用的函数，会在屏幕上显示消息"hello,wold!"
// 下一行 return 0;终止 main()函数，并返回值 0


// gcc编译main.c
// 方式一：gcc 源文件名 -o 可执行文件名
// 例子：gcc main.c -o main.exe