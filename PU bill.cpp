#include<iostream>
#include<iomanip>
using namespace std;
char c;
int s;
#define L 30
class Sb
{
  public:int id[L] , p_p[L] =
	{50,60,40,60,100,150,100,500,200,150,50,120,80,50,30,150,150,180,90,80,100,210,180,150,180,230,170,190,160,250}, b[20], ct[L], t = 0,i=0;
	char pg[L][30] = {"Apple", "Tomato", "carrot", "kiwi", "onion", "Cheese", "Butter", "Nuts", "Buns", "bread","Oreo","Cadbury","kitkat","Lays","Bingo","milk","Gemini","coffee","Thumsup","Fizz","Lakme","Fogg","Perfume","ponds","vicco","Harpic","Lizol","Dettol","Domex","odonil"};
	Sb()
	{
		for (int i = 0; i < L; i++)
			ct[i] = 0;
			for (int i=0;i<=L;i++)
			id[i]=i+1;
	}
	void f_v()
	{
		cout << "*** Fruits and vegetables *** \n";
	cout << "-----------------------------------------" << endl;
	cout << "ID\tProducts"<<setw(14) <<"\tPrice"<< endl;
    cout << "-----------------------------------------" << endl;
	for (int i = 0; i < 5; i++)
		cout << id[i] << "\t" << pg[i] << setw(14) <<"\t"<< p_p[i] << endl;
	cout << "===================================" << endl;
		char c;
 do
	{
			cout << "Enter The Product id for selecting items ...else enter 0\n>>>";
			cin >> s;
			if((s<=5)&&(s>=1))
				b[i]=s;
			else
			{if(s!=0)
			cout<<"!!!PRODUCT DOES NOT EXITS PLEASE ENTER VALID ID!!!\n";
			continue;
		}
		i++;
	}
	while (s!=0);
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	}
	void d_b(){
		cout << "*** Dairy and Bakery *** \n";
	cout << "-----------------------------------------" << endl;
		 cout << "ID\tProducts\t"<<setw(14)<<"Price"<< endl;
        cout << "-----------------------------------------" << endl;
		for(int i=5;i<=9;i++)
			cout << id[i] << "\t" << pg[i] << setw(14) << "\t" << p_p[i] << endl;
	cout << "===================================" << endl;
	 do
	{
			cout << "Enter The Product id for selecting items ...else enter 0\n>>>";
			cin >> s;
			if((s<=10)&&(s>=6))
				b[i]=s;
			else
			{
				if(s!=0)
			cout<<"!!!PRODUCT DOES NOT EXITS PLEASE ENTER VALID ID!!!\n1";
			continue;
		}
		i++;
	}
	while (s!=0);
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	}
	void snk()
	{
		cout << "*** Snacks *** \n";
	cout << "-----------------------------------------" << endl;
			cout << "ID\tProducts\t"<<setw(14) <<"Price"<< endl;
cout << "-----------------------------------------" << endl;
		for(int i=10;i<=14;i++)
			cout << id[i] << "\t" << pg[i] << setw(14) << "\t" << p_p[i] << endl;
	cout << "===================================" << endl;
	 do
	{
			cout << "Enter The Product id for selecting items ...else enter 0\n>>>";
			cin >> s;
			if((s<=15)&&(s>=11))
				b[i]=s;
			else
			{
				if(s!=0)
			cout<<"!!!PRODUCT DOES NOT EXITS PLEASE ENTER VALID ID!!!\n";
			continue;
		}
		i++;
	}
	while (s!=0);
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	}
	void bev()
	{
		cout << "*** Beverages *** \n";
	cout << "-----------------------------------------" << endl;
		cout << "ID\tProducts\t"<<setw(14) <<"Price"<< endl;
cout << "-----------------------------------------" << endl;
		for(int i=15;i<20;i++)
			cout << id[i] << "\t" << pg[i] << setw(14) << "\t" << p_p[i] << endl;
	cout << "===================================" << endl;
	 do
	{
			cout << "Enter The Product id for selecting items ...else enter 0\n>>>";
			cin >> s;
			if((s<=20)&&(s>=16))
				b[i]=s;
			else
			{
				if(s!=0)
			cout<<"!!!PRODUCT DOES NOT EXITS PLEASE ENTER VALID ID!!!\n";
			continue;
		}
		i++;
	}
	while (s!=0);
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	}
	void pc()
	{
		cout << "*** Personal Care *** \n";
	cout << "-----------------------------------------" << endl;
			cout << "ID\tProducts\t"<<setw(14) <<"Price"<< endl;
cout << "-----------------------------------------" << endl;
		for(int i=20;i<=24;i++)
			cout << id[i] << "\t" << pg[i] << setw(14) << "\t" << p_p[i] << endl;
	cout << "===================================" << endl;
	 do
	{
			cout << "Enter The Product id for selecting items ...else enter 0\n>>>";
			cin >> s;
			if((s<=25)&&(s>=21))
				b[i]=s;
			else
			{if(s!=0)
			cout<<"!!!PRODUCT DOES NOT EXITS PLEASE ENTER VALID ID\n!!!";
			continue;
		}
		i++;
	}
	while (s!=0);
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	}	
	void hc()
	{
		cout << "*** Home Care *** \n";
	cout << "-----------------------------------------" << endl;
			cout << "ID\tProducts\t"<<setw(14) <<"Price"<< endl;
			cout << "-----------------------------------------" << endl;
		for(int i=25;i<=29;i++)
			cout << id[i] << "\t" << pg[i] << setw(14) << "\t" << p_p[i] << endl;
	cout << "===================================" << endl;
	 do
	{
			cout << "Enter The Product id for selecting items ...else enter 0\n>>>";
			cin >> s;
			if((s<=30)&&(s>=26))
					b[i]=s;
			else
			{if(s!=0)
			cout<<"!!!PRODUCT DOES NOT EXITS PLEASE ENTER VALID ID\n!!!";
			continue;
		}
		i++;
	}
	while (s!=0);
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	}
	void p_m();
	void f_b();
	inline void bill(int x, char y[], int z, int a)
	{
		t = t + (z * a);
		cout << x << "\t" << y << setw(10) << "\t\t" << a << "\t" << z << "\t" << a * z << endl;
	}
};

void Sb::p_m()
{
		cout<<"Groceries - CATEGORY"<<endl;
		cout<<"1->Fruits and Vegetables\n2->Dairy & Bakery\n3->Snacks\n4->Beverages\n5->Personal Care\n6->Home Care\n";
		cout<<"__________________________________________________\n";
}
void Sb::f_b()
	{
	cout<<"___________________________________________________________________\n";
	cout<<"\t\t    SUDHA RANI SUPERMARKET\n";
	cout<<"\t\tNear Kcp metro,Dubba,Nizamabad\n";
	cout<<"\t\t\tTelangana\n";
	cout<<"___________________________________________________________________\n";
	cout << "Id\tPRODUCT \t\tQnt\tPrice\tT_price" << endl;
	cout << "__________________________________________________________________" << endl;

	for (int k = 0; k < L; k++)
	{

		for (int j = 0; j < i; j++)
		{
			if (b[j] == id[k])
			{
				ct[k] = ct[k] + 1;
			}

		}
		if (ct[k] > 0)
			bill(id[k], pg[k], p_p[k], ct[k]);
	}
	cout << "================================================================" << endl;
	cout << "TOTAL   : \t\t\t\t\t" << t << endl;
	cout << "================================================================" << endl;
}
int main()
{
	char ch,cs;
	int c;
	Sb s;
	cout<<"\t\tSUPER MARKET BILLING SYSTEM\n";
	cout << "================================================================" << endl;
		do{	
		s.p_m();
		cout<<"Please Select the Products Category\n";
		cin>>c;
		switch(c)
		{
			case 1:s.f_v();
			            break;
		    case 2:s.d_b();
		   				break;
		   case 3:s.snk();
		  				break;
		  case 4:s.bev();
		 				break;
		 case 5: s.pc();
		   			break;
		  case 6:s.hc();
		 				break;				
		 				
		}
		cout<<"Do You Want to Shop in another Category(y/n)\n";
		cin>>cs;
	}	while(cs=='y'||cs=='Y');
	s.f_b();
		cout << "\n\t*****THANK YOU FOR SHOPPING*****\n\t\t\t&\n\t\t   @VIST AGAIN" << endl;
}
