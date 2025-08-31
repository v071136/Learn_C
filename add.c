#include <stdio.h> 

int main()
{
	//逻辑上不会改变的变量放在程序上方，方便寻找，修改
	//变量名一般使用大写 
	const int UN_CHANGED = 10;
	
	int a,b=0;
	printf("请输入两个数字");
	//1 记得加上& 
	//2 scanf中的内容就是需要输入的内容，必须输入所有需要输入的内容才会正确输出 
	//scanf("adc %d %d",&a,&b); 比如这里要输入：abc(空)变量a(空)变量b 
	scanf("abc%d %d",&a,&b);
	printf("%d+%d=%d\n",a,b,a+b); 
	
	return 0;
}
