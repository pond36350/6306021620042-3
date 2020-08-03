#include <iostream>
using namespace std;
int main()
{ 
	cout <<"==============QUIZZES==========="<<endl;
	float first,second,third,mid,final;
	cout <<"Enter first quizz (10):";
	cin >>first;
	cout <<"Enter second quizz (10):";
	cin >>second;
	cout <<"Enter third quizz (10):";
	cin >>third;
	cout <<"===========MID-TERM============"<<endl;
	cout <<"Enter mid-term (40):";
	cin >>mid;
	cout <<"=========FINAL========="<<endl;
	cout <<"Enter final (50):";
	cin >>final;
	float qt=(first+second+third)/3;
	float total=qt+mid+final;
	cout <<"Quizz total:"<<qt <<endl;
	cout <<"Mid term:"<<mid <<endl;
	cout <<"Final:"<<final<<endl;
	cout <<"Total:"<<total<<endl;
	cout <<"Your score is"<<(total >=50?"PASS":"NOT PASSED") << endl;
	return(0);	
}
