//#include<iostream>
//#include<cstring>
//using namespace std;
//void intersection(int *p,int*q,int*r,int size)
//{
//  p=new int[size];
//  q=new int[size];
//  r=new int[size];
//int s1=0,s2=0,s3=0;
//for(int i=0;i<size;i++)
//{
//	for(int j=0;j<size;j++){
//		if(*(p+i)==*(q+j))
//			s1++;
//	}
//}
//for(int i=0;i<size;i++)
//{
//	for(int j=0;j<size;j++){
//		if(*(q+i)==*(r+j))
//			s2++;
//	}
//}
//for(int i=0;i<size;i++)
//{
//	for(int j=0;j<size;j++){
//		if(*(r+i)==*(p+j))
//			s3++;
//	}
//}
//int **a=nullptr;
//a[0]=new int[s1];
//a[1]=new int[s2];
//a[2]=new int[s3];
//for(int i=0;i<1;i++)
//{
//	for(int j=0;j<s1;j++){
//		if(*(p+i)==*(q+j))
//			*(*(a+i)+j)=*(p+i);
//	}
//}
//for(int i=1;i<2;i++)
//{
//	for(int j=0;j<s2;j++){
//		if(*(q+i)==*(r+j))
//			*(*(a+i)+j)=*(q+i);
//	}
//
//for(int i=2;i<3;i++)
//{
//	for(int j=0;j<s3;j++){
//		if(*(r+i)==*(p+j))
//			*(*(a+i)+j)=*(r+i);
//	}
//}
//for(int i=0;i<1;i++)
//{
//	for(int j=0;j<s1;j++){
//		cout<<*(*(a+i)+j);
//	}
//}
//cout<<endl;
//for(int i=1;i<2;i++)
//{
//	for(int j=0;j<s2;j++){
//			cout<<*(*(a+i)+j);
//	}
//}
//cout<<endl;
//for(int i=2;i<2;i++)
//{
//	for(int j=0;j<s2;j++){
//		
//		cout<<*(*(a+i)+j);
//	}
//}
//}
//}
//int*input(int *p,int size)
//{
//	p=new int[size];
//	for(int i=0;i<size;i++)
//	{
//		cin>>*(p+i);
//	}
//	return p;
//}
//void output(int*p,int size)
//{
//	cout<<"{";
//	for(int i=0;i<size;i++)
//	{
//		cout<<*(p+i);
//		cout<<",";
//	}
//	cout<<"}";
//}
//int main()
//{
//	int *a=nullptr,*b=nullptr,*c=nullptr;
//  int size=0;
//  cout<<"enter the size of the sets:"<<endl;
//  cin>>size;
//  a=new int[size];
//  b=new int[size];
//  c=new int[size];
//  cout<<"enter elements in set1:"<<endl;
//  a=input(a,size);
//  cout<<"enter elements in set2:"<<endl;
//  b=input(b,size);
//  cout<<"enter elements in set3:"<<endl;
//  c=input(c,size);
//  cout<<"the three sets are:"<<endl;
//  output(a,size);
//  cout<<endl;
//  output(b,size);
//  cout<<endl;
//  output(c,size);
//  cout<<endl;
//  intersection(a,b,c,size);
//  system("pause");
//  return 0;
//
//
//}
