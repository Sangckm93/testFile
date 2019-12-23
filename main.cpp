//#define _CRT_SECURE_NO_WARNINGS
//#include "lib_init.h"
#include "stdio.h"
int main()
{
	FILE* file;
	//file = fopen("D:/STUDY/IMIC/Basic_C_Cpp/EX/20191223_fopen_fclose/fopen_fclose/hello.txt", "a+b");
	//px = fopen("D:\\STUDY\\IMIC\\Basic_C_Cpp\\EX\\20191223_fopen_fclose\\fopen_fclose\\hello.txt", "a+b");
	file = fopen("hello.txt", "a+b");
	int temp = fgetc(file);
	temp = fgetc(file);
	temp = fgetc(file);
	temp = fgetc(file);
	getchar();
	return 0;
}