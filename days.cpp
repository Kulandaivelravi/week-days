#include<iostream>
using namespace std;
int main()
{
	
	int num;

		for (int i=0;i<=4;++i)
{
	cout<<"\n\n Enter the week day number:";

	cin>>num;
	switch(num)
	{
		
		case 1:cout<<"\n   sunday";break;
		case 2:cout<<"\n   monday";break;
		case 3:cout<<"\n   tuesday";break;
		case 4:cout<<"\n   wednesday";break;
		case 5:cout<<"\n   thursday";break;
		case 6:cout<<"\n   friday";break;
		case 7:cout<<"\n   saturday";break;
		default:cout<<"\n   Wrong input";break;
}
	}
	return 0;
}