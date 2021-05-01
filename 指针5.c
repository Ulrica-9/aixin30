<<<<<<< HEAD
=======
<<<<<<< HEAD
>>>>>>> d23374e (30)
//打印字符串:



//#include <stdio.h>
//int main(void)
//{
//	char* string;
//	string = "I love Chian!";
//	printf("%s\n", string);
//	return 0;
//}







//#include <stdio.h>
//#include <string.h>
//int main(void)
//{
//	char* string;
//	int i=0;
//	string = "I love china!";
//	for (i = 0; i < 14; i++)
//	{
//		printf("%c", *string++);
//	}
//	return 0;
//}




//#include <stdio.h>
//#include <string.h>
//int main(void)
//{
//	char* string;
//	string = "I love China!";
//	while (*string)
//	{
//		putchar(*string);
//		string++;
//	}
//	return 0;
//}



//#include <stdio.h>
//int main(void)
//{
//	
//	char* string;
//	string = "I love China!";
//	printf("%s\n", string);
//	string += 7;
//	while (*string)
//	{
//		putchar(*string);
//		string++;
//	}
//	printf("\n");
//	return 0;
//
//}

//把A中数据拷贝到B中去（所有元素包括'\0'）
//#include <stdio.h>
//#include <string.h>
//int main(void)
//{
//	char ch1[] = "Tang xin  love you!";
//	char ch2[20];
//	int i = 0;
//
//	for (i = 0; *(ch1 + i) != 0; i++)
//	{
//		*(ch2 + i) = *(ch1 + i);
//
//	}
//	ch2[i] = '\0';
//	printf("%s\n", ch2);
//	return 0;
//}


//指针方式:
//#include <stdio.h>
//int main(void)
//{
//	char a[] = "Tamg xin I love you!";
//	char b[30];
//	char* p1 ;
//	char* p2 ;
//	for (p1=a,p2=b; *p1; p1++, p2++)
//	{
//		*p2 = *p1;
//	}
//	*p2 = '\0';
//	p1 = a;
//	p2 = b;
//	printf("p1 is %s\n",p1);                                   //不能使用指针 因为指针经过循环已经到达边界看不到任何东西；只有数组名或者重新赋值输入
//	printf("p2 is %s\n",p2);
//	return 0;
//}





//函数方法+指针:




//#include <stdio.h>
//#include <string.h>
//void change(char a[], char b[])
//{
//	int i=0;
//	while (a[i] != 0)
//	{
//		*(b + i) = *(a + i);
//		i++;
//	}
//	*(b+i) = '\0';
//	printf("b :");
//	printf("%s\n", b);
//}
//int main(void)
//{
//	char a[] = "I love you!";
//	char b[] = "wo zhen de hao xi huan ni!";
//	char* p1 = a;
//	char* p2 = b;
//
//	printf("a :");
//	printf("%s\n", a);
//	printf("b :");
//	printf("%s\n", b);
//	change(a, b);
//	return 0;
//}


//void change(char* p1, char* p2)
//{
//	while (*p2++=*p1++)
//	{
//		;
//	}
//}
//#include <stdio.h>
//int main(void)
//{
//	char a[] = "I love you!";
//	char b[80] = "wo shi ni ba ba!!!!";
//	char* p1=a;
//	char* p2=b;
//	printf("a :");
//	printf("%s\n", a);
//	printf("b :");
//	printf("%s\n", b);
//	printf("把a和b交换:");
//	change(p1,p2);
//	printf("%s\n", b);
//	return 0;
//}

//利用指针实现PRINTF的格式输出



//方法一:
//#include <stdio.h>
//#include <string.h>
//int main(void)
//{
//	char* p = "abcdef";
//	char* format = "p=%s\n";
//	char fprmat2[20] = {0};
//	gets(fprmat2);
//	printf(fprmat2, p);
//	return 0;
//}




//函数指针:
//#include <stdio.h>
//int max(int a, int b)
//{
//	return a > b ? a : b;
//}
//int main(void)
//{
//	int (*p)(int, int);
//	p = max;
//	int a, b, c;
//	printf("Please enter a number:");
//	scanf_s("%d%d", &a, &b);
//	c =p(a, b);
//	printf("a=%d,b=%d,max=%d", a, b, c);
//	return 0;
//	
//}

//回调函数
#include <stdio.h>
#include <string.h>
int max(int a, int b)
{
	printf("max:");
	return a > b ? a : b;
}
int min(int a, int b)
{
	printf("min:");
	return a < b ? a : b;
}
int add(int a, int b)
{
	printf("add:");
	return a + b;
}
void ppp(int a, int b, int (*p)(int, int))
{
	int num;
	num = p(a,b) ;
	printf("%d", num);
}
int main(void)
{
	int a, b, c;
	printf("Please enter two numbers:");
	scanf_s("%d%d", &a, &b);
	ppp(a, b, max);
	ppp(a, b, min);
	ppp(a, b, add);
<<<<<<< HEAD
=======
=======
#include <stdio.h>
#include <string.h>
//int* p(int(*p)[4], int m)
//{
//	return *(p + m);
//}
//int main(void)
//{
//	int a[][4] = { {66,55,33,44} ,{55,88,96,57} ,{66,55,88,92} };
//	int num,i;
//	int* p(int(*p)[4], int m);
//	int* q;
//	printf("请输入要查找学生的序号:");
//	scanf_s("%d", &num);
//	q = p(a, num);
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d ", *(q + i));
//	}
//	return 0;
//}

//截取指定位数后面的数据
#include <stdio.h>
#include <string.h>
char* p(char* ch, int m)
{
	char* p=NULL;
	if (m < strlen(ch))
	{
		p = ch + m - 1;
	}
	return p;
}
int main(void)
{
	char a[] = "wozhendehaoxihuanni!";
	char* p(char* ch, int m);
	char* ch2;
	int n;
	printf("请输入截取的起始位置:");
	scanf_s("%d", &n);
	ch2 = p(a, n);
	printf("%s\n", ch2);
>>>>>>> e4461b3 (30)
>>>>>>> d23374e (30)
	return 0;
}