#include<iostream>
using namespace std;
class prime
{
	private:
		int n,i,count,d;
		public:
			void getdata();
			void putdata();
};
void prime::getdata()
{
	cout<<"Enter any no.="<<endl;
	cin>>n;
}
void prime::putdata()
{
	int count=0;
	while(n>0)
	{
		if(n%i==0)
		count++;
	}
	if(count==2)
	cout<<"\nNo. is prime";
	else
	cout<<"\n No is not prime";
}
int main()
{
	prime aa;
	aa.getdata();
	aa.putdata();
	return 0;
}
