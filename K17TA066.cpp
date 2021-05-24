#include<iostream>
using namespace std;
class A
{
    string N;
    public : void intro()
    {
    	cout<<"\t\t\t\t\t\t***************LOVELY PROFESSIONAL UNIVERSITY***************\n";
        cout<<"\t\t\t\t\t\t\t\tNAME : ";
        cin>>N;
    }
};
class scholarship
{
		public :  void sbp();
                  void sbl();
                  void sbn();
			      void scholarshiptype(int a)
		         {
		         		int c1;
	cout<<"\t\t\t\t\t\t\t\t1.SCHOLARSHIP ON BASIS OF PERECENTAGE IN +2 OR 10TH";
	cout<<"\n\t\t\t\t\t\t\t\t2.SCHOLARSHIP ON THE BASIS OF LPU NEST\n";
	if(a!=10)
	cout<<"\t\t\t\t\t\t\t\t3.SCHOLARSHIP ON THE BASIS OF SPORTS\n";
	cin>>c1;
				       if(c1==1)
				       sbp();
				       else if(c1==2)
                       sbl();
                       else if(a!=10)
                       {
                       if(c1==3)
                       {sbn();
				       cout<<"WRONG INPUT";}}
				 }
};
void scholarship::sbp()
{
		float per;
		cout<<"\t\t\t\t\t\t\t\tENTER YOUR PERCENTAGE\n";
		cin>>per;
		if(per>=98&&per<=100)
			cout<<"\t\t\t\t\t\t\t\tYOUR SCHOLARSHOP IS RS 60000/-\n";
		else if(per>=90&&per<98)
			cout<<"\t\t\t\t\t\t\t\tYOUR SCHOLARSHOP IS RS 50000/-\n";
		else if(per>=80&&per<90)
			cout<<"\t\t\t\t\t\t\t\tYOUR SCHOLARSHOP IS RS 40000/-\n";
		else
			cout<<"\t\t\t\t\t\t\t\tSORRY, YOU ARE NOT ELIGIBLE FOR THIS SCHOLARSHIP\n";
}
void scholarship::sbl()
{
    float lper;
    cout<<"\n\t\t\t\t\t\t\t\tENTER YOUR LPU NEST PERCENTAGE"<<endl;
    cin>>lper;
	if(lper>=90&&lper<=100)
	{
		cout<<"\t\t\t\t\t\t\t\tYOUR SCHOLARSHOP IS RS 65000/-\n";
	}
	else
	{
	    int n;
		cout<<"\t\t\t\t\t\t\t\tIN WHICH CATEGORY YOUR RANK FALLS \n";
    	cout<<"\t\t\t\t\t\t\t\t 1. TOP 10%% 2. 11%% TO 20%% 3. 21%% TO 35%%2\n\t\t";
				cin>>n;
	            if(n==1)
		        cout<<"\t\t\t\t\t\t\t\tYOUR SCHOLARSHOP IS RS 50500/-\n";
		        else if(n==2)
		        cout<<"\t\t\t\t\t\t\t\tYOUR SCHOLARSHOP IS RS 40500/-\n";
		        else if(n==3)
		        cout<<"\t\t\t\t\t\t\t\tYOUR SCHOLARSHOP IS RS 30500/-\n";
		        else
		        cout<<"\n\t\t\t\t\t\t\t\t SORRY, YOU ARE NOT ELEGIBLE FOR A SCHOLARSHIP\n";
	}
}
void scholarship::sbn()
{
            int ch,nrank;
            cout<<"CHOOSE ANY ONE SPORT YOU GOT 1st or 2nd place..";
            cout<<"\n\t\t\t\t\t\t\t\t1.NATIONAL LEVEL\n\t\t\t\t\t\t\t\t2.STATE LEVEL\n\t\t";
            cin>>ch;
            switch(ch)
            {
               case 1 : cout<<"ENTER YOUR RANK IN NATIONAL LEVEL";
                        cin>>nrank;
                        if(nrank==100)
			            cout<<"\t\t\t\t\t\t\t\tYOUR SCHOLARSHOP IS RS 75000/-\n";
		                else if(nrank==200)
                        cout<<"\t\t\t\t\t\t\t\tYOUR SCHOLARSHOP IS RS 50000/-\n";
                        else if(nrank=300)
			            cout<<"\t\tYOUR SCHOLARSHOP IS RS 40000/-\n";
			            else
			            cout<<"\t\t\t\t\t\t\t\tSORRY, YOU ARE NOT ELIGIBLE FOR THIS SCHOLARSHIP";
                        break;
               case 2 : cout<<"\n\t\t\t\t\t\t\t\tENTER YOUR STATE LEVEL RANK...";
                        if(nrank=100)
			            cout<<"\t\tYOUR SCHOLARSHOP IS RS 75000/-\n";
                        else if(nrank=200)
                        cout<<"\t\tYOUR SCHOLARSHOP IS RS 50000/-\n";
		                else if(nrank=300)
			            cout<<"\t\tYOUR SCHOLARSHOP IS RS 40000/-\n";
                        else
                        cout<<"\t\t\t\t\t\t\t\tSORRY, YOU ARE NOT ELIGIBLE FOR THIS SCHOLARSHIP\n";
                        break;
              default: cout<<"\n\t\t\t\t\t\t\t\tINVALID INPUT\n";
            }
}
class a10:public scholarship
{
	     int i;
		public : void course10()
				 {
				 		      cout<<"\t\t\t\t\t\t\t\t1:FASHION DESIGNING\n\t\t\t\t\t\t\t\t2:HOTEL MANAGEMENT AND TOURISM\n\t\t\t\t\t\t\t\t3:MEDICAL LABORATORY SCIENCES\n\n";
		  			          cout<<"\t\t\t\t\t\t\t\tCHOOSE ANY CATEGORY\n";
		  			          cin>>i;
				 }
};
class a12: public scholarship
{
    int ch3;
    public : void course12()
    {
         cout<<"\n\t1:ENGINEERING\n\t2:AGRICULTURE\n\t3:ARCHITECTURE\n\t";
         cout<<"\t\tCHOOSE ANY CATEGORY\n";
         cin>>ch3;
    }
};
class graduation:public scholarship
{
    int ch4;
     public : void courseafgd()
    {
         cout<<"\n\t1:MANAGEMENT\n\t2:AGRICULTURE\n\t3:ARCHITECTURE\n\t4.COMPUTER APPLICATIONS\n";
         cout<<"\t\tCHOOSE ANY CATEGORY\n";
         cin>>ch4;
    }
};
int main()
{
	int choice;
    A obj;
    obj.intro();
    a10 obj1;
    a12 obj2;
    graduation obj3;
    cout<<"\n\t\t\t\t\t\t\tChoose a category mentioned ..!\n\n";
    cout<<"\t\t\t\t\t\t\t\t1.AFTER 10TH\n\t\t\t\t\t\t\t\t2.AFTER 12TH\n\t\t\t\t\t\t\t\t3.AFTER GRADUATION\n";
    cin>>choice;
    if(choice==1)
    {
    obj1.course10();
    obj1.scholarshiptype(10);
    }
    else if(choice==2)
    {
        obj2.course12();
        obj2.scholarshiptype(12);
    }
     else if(choice==3)
    {
        obj3.courseafgd();
        obj3.scholarshiptype(13);
    }
}
