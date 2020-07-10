#include<iostream>
#include<fstream>
#include<bits/stdc++.h>
using namespace std;
ofstream myfile;
class A1
{
	double p2;//p2
	double p1;//p1
	int q1;//q1
	int q2;//q2
	public:
	A1(double a,double b,double c,double d);
	void get_values(A1 *ptr);
	double get_average(A1 *ptr);
	double advise(A1 *ptr,double x);
	double advise_money(A1 *ptr,double x);
};
A1::A1(double a,double b,double c,double d)
{
	cout<<"By creating an obect via callling this constructor, you have set the values::"<<endl;
	this->p2=a;this->p1=b;this->q1=c;this->q2=d;
}
void A1::get_values(A1 *ptr)
{
	cout<<"So these are the values you have entered. Please do check::"<<endl;
	cout<<"Current Price::"<<ptr->p2<<endl;
	cout<<"Older Rate ::"<<ptr->p1<<endl;
	cout<<"Already Bought quantity::"<<ptr->q1<<endl;
	cout<<"Planning to buy quantity::"<<ptr->q2<<endl;
}
double A1::get_average(A1 *t)
{

    	double avg2=(((t->p2)*q2)+((t->p1)*q1))/(t->q1+t->q2);
	return (((t->p2)*q2)+((t->p1)*q1))/(t->q1+t->q2); 
}
double A1::advise(A1 *t,double x)
{
	double x1=((t->p1)*(x))/100;
	double value= t->p1-x1;
	cout<<x<<"% down means the average is "<<value;
	if(t->p2<value)
	{
	cout<<"Print  P2="<<t->p2<<"And Avg is ="<<value<<endl;
	double a= x*t->p1/100;
	return (a*(t->q1)/((t->p1)-(t->p2)-a));
	}
	else
	{
			//cout<<endl<<"Maximum Limit Reached, You cant reduce more than this "<<endl;
			myfile<<"</tr></tbody></table></div></section>";
			myfile<<"Maximum Limit Reached, You cant reduce more than this  "<<"/body></html>";
			system("firefox Debu.html");
			exit(1);
	}
}
double A1::advise_money(A1 *t,double x)
{
	double x1=((t->p1)*(x))/100;
        double value= t->p1-x1;
	cout<<"So the average will be::"<<value<<endl;
        if(t->p2<value)
        {
      cout<<"Print  P2="<<t->p2<<"And Avg is ="<<value<<endl;
        double a= x*t->p1/100;
        return (t->p2)*(a*(t->q1)/((t->p1)-(t->p2)-a));
        }
        else
        {
                       //cout<<"Maximum Limit Reached, You cant reduce more than this "<<endl;
                        
	myfile << "</body>";
	system("firefox Debu.html");
	exit(1);
        }

}
int main()
{
	double i,j,k,l,u,x;
	//ofstream myfile;
	system("rm -rf Debu.html");
	myfile << "</body>";
	myfile << "</body>";
  	myfile.open ("Debu.html");
 	myfile << "<!DOCTYPE html><html><head></head>";
 	myfile<< " <style> html, body {margin:0;padding:0;height:100%;}"<<"\n";
	myfile<< "section {  position: relative;  border: 1px solid #000;  padding-top: 37px;  background: #500;}"<<"\n";
	myfile<< "section.positioned {  position: absolute;  top:100px;  left:100px;  width:800px;  box-shadow: 0 0 15px #333;}"<<"\n";
	myfile<<" .container {overflow-y: auto; height: 900px;}"<<"\n";
	myfile<<"table {  border-spacing: 0;  width:100%;}td + td {  border-left:1px solid #eee;}"<<"\n";
	myfile<<"td, th {  border-bottom:1px solid #eee;  background: #ddd;  color: #000;  padding: 10px 25px;}"<<"\n";
 	myfile<<"th {  height: 0;  line-height: 0;  padding-top: 0;  padding-bottom: 0;  color: transparent;  border: none;  white-space: nowrap;}"<<"\n";
	myfile<<"th div{  position: absolute;  background: transparent;  color: #fff;  padding: 9px 25px;  top: 0;  margin-left: -25px;  line-height: normal;border-left: 1px solid #800;}"<<"\n";
	myfile<<"th:first-child div{ border: none;}</style>"<<"\n";
	myfile<<"<body>"<<"\n";
	 myfile<< "<section class=''>  <div class='container'><table> <thead>  <tr class='header'>"<<"\n";
	myfile<<"<th>Reducing interest <div> Reducing interest </div></th>";	
  	myfile<<"<th>Reduced_Avg_Value <div> Reduced_Avg_Value </div> </th>";
	myfile<<"<th>Unit to buy<div> Unit to buy </div> </th>";
	myfile<<"<th>Total Money Need <div>Total Money Need </div> </th> </tr>";
	myfile<<"\n";
        cout<<endl<<endl<<endl<<"Please enter the current stock price"<<endl;
        cin>>i;
        cout<<endl<<endl<<endl<<"Please enter the buying stock price"<<endl;
        cin>>k;
        cout<<"Please enter the number of share you want to Buy::"<<endl;
        cin>>l;//the quantity you want to buy
        cout<<"Please enter the number of stock already bought::"<<endl;
        cin>>u;//the quantity you lready bought
	cout<<"Please enter how much % you want to reduce ::"<<endl;
	cin>>x;
        cout<<endl;
	A1 *ptr,a(i,k,u,l);
        ptr=&a;//without this command, code will give segmentation fault core dumped
	a.get_values(ptr);
	cout<<endl<<endl<<endl<<"*******"<<endl<<"This is the average you want to see::"<<ptr->get_average(ptr)<<endl;

	system("clear");
	cout<<"%Reduction       Reduced_Avg             Unit_need_to_buy                Total_Money"<<endl;
	cout<<"----------------------------------------------------------------------------------"<<endl;
	for(x=5.00;x<100;x=x+0.5)
	{
	double x1=(k)*(x)/100;
        double value= k-x1;
	printf("y");
	myfile<<"<tr> <td>"<<setprecision(2)<<x<<"</td><td>"<<std::fixed<<setprecision(2)<<value<<"</td>";
	myfile<<std::fixed<<"<td>"<< setprecision(0)<<(ptr->advise(ptr,x))<<"</td>";
	myfile<<std::fixed<<"<td>"<< setprecision(2)<<(ptr->advise_money(ptr,x))<<"</td></tr>";
	myfile<<"\n";
	cout<<"++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++"<<endl;
	}
	myfile << "</body>";
	cout<<"Click any key to see the report in web browser::"<<endl;
	char ch;
	cin>>ch;
	system("firefox Debu.html");
return 0;
}
