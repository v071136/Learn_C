#include <stdio.h> 

int main()
{
	//�߼��ϲ���ı�ı������ڳ����Ϸ�������Ѱ�ң��޸�
	//������һ��ʹ�ô�д 
	const int UN_CHANGED = 10;
	
	int a,b=0;
	printf("��������������");
	//1 �ǵü���& 
	//2 scanf�е����ݾ�����Ҫ��������ݣ���������������Ҫ��������ݲŻ���ȷ��� 
	//scanf("adc %d %d",&a,&b); ��������Ҫ���룺abc(��)����a(��)����b 
	scanf("abc%d %d",&a,&b);
	printf("%d+%d=%d\n",a,b,a+b); 
	
	return 0;
}
