//      2016/3/3   
//1.随机生成10以内的数为 a
//2.以0代表'+'，1代表'-'，2代表'*'，3代表'/' 随机生成4以内的数为 运算符
//3.随机生成100以内的数为 b
//4. a 运算符 b =
//1.随机生成10以内的数 a
//2.随机生成10以内的数 b
//3.随机生成10以内的数 c
//4.随机生成10以内的数 d
//5.如果b不大于a 重复1 2  第一个真分数是a/b  第二个真分数是c/d
//6.以1代表'+'，2代表'-'，3代表'*'，4代表'/' 随机生成4以内的数为 运算符
//7.a/b 运算符 c/d =
#include<iostream>
#include<ctime>
using namespace std;
int main()
{
	srand((unsigned)time(0)); 
	for(int i=0;i<30;i++)
	{
		int a=rand()%10;
		int b=rand()%10;
		int c=rand()%4;
		if(0==c) cout<<i+1<<". "<<a<<"+"<<b<<"="<<endl;
		if(1==c) cout<<i+1<<". "<<a<<"-"<<b<<"="<<endl;
		if(2==c) cout<<i+1<<". "<<a<<"*"<<b<<"="<<endl;
		if(3==c) cout<<i+1<<". "<<a<<"/"<<b<<"="<<endl;
	}
	int j=0;
	while(j<30)
	{
		int a=rand()%10;
		int b=rand()%10;
		if(a!=b)
		{
			int c=rand()%10;
			int d=rand()%10;
			if(c!=d)
			{
				int e=rand()%4;
				if(0==e) cout<<j+1<<". "<<a<<"/"<<b<<" + "<<c<<"/"<<d<<"="<<endl;
				if(1==e) cout<<j+1<<". "<<a<<"/"<<b<<" - "<<c<<"/"<<d<<"="<<endl;
				if(2==e) cout<<j+1<<". "<<a<<"/"<<b<<" * "<<c<<"/"<<d<<"="<<endl;
				if(3==e) cout<<j+1<<". "<<a<<"/"<<b<<" / "<<c<<"/"<<d<<"="<<endl;
				j++;
			}
		}
	}
}
