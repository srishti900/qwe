//============================================================================
// Name        : tech.cpp
// Author      : me
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
using namespace std;
int studentplan();
int MYplan();

int main() {
	string planname1;
			float monthlyrental1,callcharge1,smscharge1,datacharge1,roamingcharges1;
			int finternet1,fsms1,fcall1;

	cout << "Welcome to virtel :) "<< endl;
	cout<<"our plans: "<<endl;
	studentplan();
	MYplan();
	cin>>monthlyrental1;
	if(monthlyrental1>0 )
		MYplan();
	else
		studentplan();
	cout<<"IF YOU WANT FREE INTERNET PRESS 1 ELSE 0";
	cin>>finternet1;
	if(finternet1==1)
		studentplan();
	else
		MYplan();
	cin>>fsms1;
	if(fsms1==1)
			studentplan();
		else
			MYplan();
	cin>>fcall1;
		if(fcall1==1)
				studentplan();
			else
				MYplan();






	return 0;
}

int studentplan()
{
	string planname;
		float monthlyrental,callcharge,smscharge,datacharge,roamingcharges;
		int finternet,fsms,fcall;


		planname="STUDENT";
		finternet=1;
		fcall=1;
		fsms=1;
		monthlyrental=100.0;
		callcharge=0;
		smscharge=0;
		datacharge=0;
		roamingcharges=2;
		cout<<"**PLAN NAME ::  STUDENT **"<<endl;
		cout<<"FREE INTERNET : YES :)"<<endl;
		cout<<"FREE CALLS : YES"<<endl;
		cout<<"FREE SMS : YES"<<endl;
		cout<<"MONTHLY RENTAL :Rs  "<<monthlyrental<<endl;
		cout<<"CALL CHARGES :Rs  "<<callcharge<<endl;
		cout<<"SMS CHARGES:Rs "<<smscharge<<endl;
	    cout<<"DATA CHARGES:Rs "<<datacharge<<endl;
	    cout<<"ROAMING CHARGES : Rs  "<<roamingcharges<<endl;
	    return 0;


}





int MYplan()
{
	string planname2;
		float monthlyrental2,callcharge2,smscharge2,datacharge2,roamingcharges2;
		int finternet2,fsms2,fcalls2;


		planname2="MYplan";
		finternet2=1;
		fcalls2=0;
		fsms2=0;
		monthlyrental2=300;
		callcharge2=1.5;
		smscharge2=0;
		datacharge2=0;
		roamingcharges2=0;
		cout<<"**PLAN NAME ::  STUDENT **"<<endl;
		cout<<"FREE INTERNET : YES :)"<<endl;
		cout<<"FREE CALLS : YES"<<endl;
		cout<<"FREE SMS : YES"<<endl;
		cout<<"MONTHLY RENTAL :  "<<monthlyrental2<<endl;
		cout<<"CALL CHARGES : "<<callcharge2<<endl;
		cout<<"SMS CHARGES: "<<smscharge2<<endl;
	    cout<<"DATA CHARGES: "<<datacharge2<<endl;
	    cout<<"ROAMING CHARGES : "<<roamingcharges2<<endl;
	    return 0;
}

