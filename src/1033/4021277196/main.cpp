#include<iostream>
using namespace std;
int argham(int x)
{
	int r;
	for(r=0;x!=0;r++)
	{
		x=x/10;
	}
	return r;
}

int main()
{
	int k,x=1,s=0,z,q,d,r,j,b,v,f=0;
	for(cin>>k;x<=5000;x++)
	{
		r=argham(x);
		for(j=1;r!=1;j=j*10)
		{
			r--;
		}
		for(z=x,q=x;q!=0;)
		{
			b=z/j;
			v=b%10;
			s++;
			q=q/10;
			j=j/10;
			if(k==s)
			{
				f=1;
				break;
			}
		}
		if(f==1)
		{
			break;
		}
	}
	cout<<v;
	return 0;


}
