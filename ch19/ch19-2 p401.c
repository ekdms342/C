#include <stdio.h>
void showallstring(int argc, char* argv[])
{
	int i;
	for (i = 0; i < argc ; i++)
	{
		printf("%s \n", argv[i]);
	}
}
int main(int argc, char *argv[])
{
	char* str[3] = {
		"C programming",
		"C++ programming",
		"JAVA programming"
	};
	showallstring(3, str);
	return 0;

 }