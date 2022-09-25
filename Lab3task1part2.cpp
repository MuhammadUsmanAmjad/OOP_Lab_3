#include<iostream>
#include<cstring>
using namespace std;
char* strconcatenate(char* str1 , char* str2)
{
	int s1=strlen(str1);
	int s2=strlen(str2);
	int j=0;
	for(int i=s2;i<=(s1+s2);i++)
	{
		*(str2+i)=*(str1+j);
		j++;
	}
	return str2;
}
int main()
{
	char *str1=nullptr,*str2=nullptr;
	str1=new char[100],str2=new char[100];
	cout<<"enter str1:"<<endl;
	cin.getline(str1,100);
	cout<<"enter str2:"<<endl;
	cin.getline(str2,100);
	str2=strconcatenate(str1,str2);
	int s=strlen(str2);
	cout<<"the concatenated string is:"<<endl;
	for(int i=0;i<s;i++)
	{
		cout<<*(str2+i);
	}
	system("pause");
    return 0;
}