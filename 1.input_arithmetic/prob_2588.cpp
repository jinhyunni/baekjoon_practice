#include <iostream>
#include <string>
using namespace std;
/*

/: 몫을 구하는 연산자, %: 나머지를 구하는 연산자

*/

void prob_2588(){
  
	int a, b;
	cout<<"Input two integers to multiply"<<endl;
	cin>>a>>b;

	cout<<a*(b%10)<<endl;
	cout<<a*((b%100)/10)<<endl;
	cout<<a*(b/100)<<endl;
	cout<<a*b<<endl;
}
