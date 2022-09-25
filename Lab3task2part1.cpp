#include<iostream>
#include<cstring>
using namespace std;
char* strcopy(char * str1, char* str2)
{
	int size=strlen(str1);
	for(int i=0;i<size;i++)
	{
		*(str2+i)=*(str1+i);
	}
	return str2;
}
int main()
{
	char *str1=nullptr,*str2=nullptr;
	str1=new char[100];
	str2=new char[100];
	cout<<"enter elements in str1:"<<endl;
	cin.getline(str1,100);
	cout<<"enter elements in str2:"<<endl;
	cin.getline(str2,100);
	int s=strlen(str1);
	str2=strcopy(str1,str2);
	for(int i=0;i<s;i++)
	{
		cout<<*(str2+i);
	}
	system("pause");
     return 0;
}