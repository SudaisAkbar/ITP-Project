# include <iostream> 
using namespace std;
int main()
{
	int u_input;
	int amount =0;
	int count =0;
	
	int r = 0;
	int c = 0;
	int b = 0;
	
	
	
	while(true)
	{
	
	cout<<"press 1 for ricshaws :"<<endl;
	cout<<"press 2 for car :"<<endl;
	cout<<"press 3 for bus :"<<endl;
	cout<<"press 4 to show the record :"<<endl;
	cout<<"press 5 to delete record :"<<endl;
	cin>>u_input;
	
	if(u_input == 1)
	{
		if(count<50)
		{
			r++;
		amount = amount + 100;
		count = count + 1;
	}
	else
	cout<<"no more cars :  parking is full "<<endl;
	}
	
	 else if(u_input == 2)
	{
		if(count<50)
		{
			c++;
		amount = amount + 300;
		count = count + 1;
	}
	else
	cout<<"parking is full"<<endl;
}
	 else if(u_input == 3)
	{
		if(count<50)
		{
			b++;
		amount = amount + 500;
		count = count + 1;
	}
	else 
	cout<<"parking is full"<<endl;
}
	else if(u_input == 4)
	{
		cout<<"***************************************"<<endl;
		cout<<" The total amount is ="<<amount<<endl;
		cout<<"The total numbers of vehicles parked is ="<<count<<endl;
		cout<<" The total numbers of ricshaws parked is ="<<r<<endl;
		cout<<" The total numbers of cars parked is ="<<c<<endl;
		cout<<" The total numbers of buses parked is ="<<b<<endl;
		cout<<"***************************************"<<endl;
	}
	else if(u_input == 5)
	{
		amount =0;
		count =0;
		r=0;
		c=0;
		b=0;
		cout<<"***************************************"<<endl;
		cout<<"Record Deleted"<<endl;
		cout<<"***************************************"<<endl;
	}
	else 
	{
		cout<<"invalid number"<<endl;
		
	}
}
		
return 0;
}


