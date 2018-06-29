//-------------------------
#include<stdio.h>
int main(void)
{
	int dogs;
	printf("How many dogs do you have?\n");
	scanf("%d",&dogs);
	printf("So you have %d dog(s).\n",dogs);

	return 0;
}
//------------------------
#include<stdio.h>
int main(void)
{
	printf("Concrete contains gravel and cement.\n");

	return 0;
}
//-------------------------
#include<stdio.h>
int main(void)
{
	int num; //定义变量num
	num = 1; //给变量num赋值

	printf("I am a simple");
	printf("computer\n");
	printf("My favorite number is &d because it is first.\n",num);

	return 0;
}
//-------------------------把2英寻转换成英尺
#include<stdio.h>
int main(void)
{
	int feet,fathoms;
	feet = 6*fathoms;
	printf("There are %d feet in %d fathoms!\n",feet,fathoms);
	printf("Yes,I said %d feet!\n",6*fathoms);

	return 0;
}
//-------------------------函数调用
#include<stdio.h>
void butler(void);//函数声明
int main(void)
{
	printf("I will summon the butler function.\n");
	butler();
	printf("Yes.Bring me some tea and writeable DVDs.\n");

	return 0;
}
void butler(void)
{
	printf("You rang,sir?\n");
}
//-------------------------Your weight in platinum
#include<stdio.h>
int main(void)
{
	float weight; //你的体重
	float value; //等重白金的价值

	printf("Are you worth your weight in platinum?\n");
	printf("Let's check it out.\n");
	printf("Please enter your weight in pounds:");

	scanf("%f",&weight);
	value = 1700.0 * weight * 14.5833;//假设白金价格是每盎司$1700,14.5833*英镑常衡盎司=金衡盎司

	printf("Your weight in platinum is worth $%.2f.\n",value);
	printf("You are easily worth that!If platinum price drop,\n");
	printf("eat more to maintain your value.\n");

	return 0; 
}
//--------------------------演示printf()函数的一些特性
#include<stdio.h>
int main(void)
{
	int ten = 10;
	int two = 2;

	printf("Doing it right:");
	printf("%d minus %d is %d\n",ten,2,ten - two);
	printf("Doing it wrong:\n");
	printf("%d minus %d is %d\n",ten);//缺少两个参数

	reutrn 0;
}
//--------------------------以十进制、八进制、十六进制打印十进制数100
#include<stdio.h>
int main(void)
{
	int x = 100;
	printf("dec = %d;octal = %o;hex = %x\n",x,x,x);
	printf("dec = %d;octal = %#o;hex = %#x\n",x,x,x);//在八进制和十六进制前面显示0和0x前缀，要在转换说明中加入#

	return 0;
}
//--------------------------更多printf()函数的特性
#include<stdio.h>
int main(void)
{
	unsigned int un = 3000000000;
	short end = 200;
	long big = 65537;
	long long verybig = 12345678908642;

	printf("un = %u and not %d\n",un,un);/*无符号3000000000和有符号-129496296在系统内存中表示完全相同,
											%u打印无符号的值，%d打印有符号的值
											*/
	printf("end = %hd and %d\n",end,end);
	printf("big = %ld and %hd\n",big,big);
	printf("verybig = %lld and not %ld\n",verybig,verybig);

	return 0;
}
//--------------------------显示字符的代码编号
#include<stdio.h>
int main(void)
{
	char ch;
	printf("Please enter a character.\n");
	scanf("%c",&ch);
	printf("The code for %c is %d,\n",ch,ch);

	return 0;
}
//--------------------------可移植整数类型名
#include<stdio.h>
#include<inttypes.h>//支持可移植类型
int main(void)
{
	int32_t me32;//me32是一个32位有符号整形变量

	me32 = 45933945;
	printf("First,assume int32_t is int:\n");
	printf("me32 = %d\n",me32);
	printf("Next,let's not make any assumptions.\n");
	printf("Instead,use a \"macro\" from inttypes.h\n");
	printf("me32 = %"PRId32"\n",me32);

	return 0;
}
//--------------------------两种方式显示float类型的值
#include<stdio.h>
int main(void)
{
	float aboat = 32000.0;
	double abet = 2.14e9;
	long double dip = 5.32e-5;

	printf("%f can be written %e\n",aboat,aboat);
	printf("And it's %a in hexadecimal,power of 2 notation\n",aboat);
	printf("%f can be written %e\n",abet,abet);
	printf("%Lf can be written %Le\n",dip,dip);

	return 0;
}
//--------------------------打印类型大小
#include<stdio.h>
int main(void)
{
	printf("Type int has a size of %zd bytes.\n",sizeof(int)); //sizeof运算符，以字节为单位给出对象的大小，字符串末尾的空字符也计算在内
	printf("Type char has a size of %zd bytes.\n",sizeof(char));
	printf("Type long has a size of %zd bytes.\n",sizeof(long));
	printf("Type long long has a size of %zd bytes.\n",sizeof(long long));
	printf("Type double has a size of %zd bytes.\n",sizeof(double));
	printf("Type long double has a size of %zd bytes.\n",sizeof(long double));

	return 0;
}
//---------------------------使用转义序列
#include<stdio.h>
int main(void)
{
	float salary;

	printf("\aEnter your desired monthly salary:");
	printf(" $_______\b\b\b\b\b\b\b\b\n");
	scanf("%f",&salary);
	printf("\n\t$%.2f a month is $%.2f a year.",salary,salary * 12.0);
	printf("\rGee!\n");

	return 0;
}
//---------------------------演示与用户交互
#include<stdio.h>
#include<string.h> //提供strlen()函数
#define DENSITY 62.4
int main()
{
	float weight,volume;
	int size,letters;
	char name[40];

	printf("Hi! What's your first name？\n");
	scanf("%s",name);
	printf("%s,what's your weight in pounds?\n",name);
	scanf("%f",&weight);
	size = sizeof(name);
	letters = strlen(name);//strlen()函数用于获取字符串的长度
	volume = weight / DENSITY;
	printf("Well,%s,your volume is %2.2f cubic feet.\n",name,volume);
	printf("Also,your first name has %d letters,\n",letters);
	printf("and we have %d bytes to store it.\n",size);

	return 0;
}
//----------------------------使用不同类型的字符串
#include<stdio.h>
#define PRAISE "You are an extraordinary being."
int main(void)
{
	char name[40];

	printf("What's your name?\n");
	scanf("%s",name);
	printf("Hello,%s. %s\n",name,PRAISE);

	return 0;
}
//----------------------------strlen()函数
#include<stdio.h>
#include<string.h>
#define PRAISE "You are an extraordinary being."
int main(void)
{
	char name[40];

	printf("What's your name ?\n");
	scanf("%s",name);
	printf("Your name of %zd letters occupies %zd memory cells.\n", strlen(name),sizeof name);
	printf("The phrase of praise has %zd letters",strlen(PRAISE));
	printf("and occupuies %zdmemory cells.\n",sizeof PRAISE);

	return 0;
}
//-----------------------------