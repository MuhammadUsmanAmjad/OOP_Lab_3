#include<iostream>
#include<cstring>
using namespace std;
int length(char *p)
{
	int inc=0;
	p=new char[inc];
	for(int i=0;*(p+i)!='\0';i++)
	{
		inc++;
	}
	
	return inc;
}
bool pallindrome(char *p)
{
	
	int size=length(p);
	p=new char[size];
	int j=size;
	bool check=false;
	for(int i=0;i<=j;i++,j--)
	{
		if(*(p+i)==*(p+j))
		{
			check=true;
		}
		else
			check=false;
	}
	return check;
}

int main()
{
	char *ptr=nullptr;
	ptr=new char[100];
	cout<<"enter the input string"<<endl;
	cin.getline(ptr,100);
	cout<<"1 for pallindrome number"<<endl<<"0 for non-pallindrome number"<<endl;
	cout<<pallindrome(ptr);
	system("pause");
		return 0;


}
