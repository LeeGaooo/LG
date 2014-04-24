/*************************************************************************
	> File Name: singleton.cpp
	> Author: Comst
	> Mail:750145240@qq.com 
	> Created Time: 2014年04月24日 星期四 11时37分20秒
 ************************************************************************/

#include<iostream>
using namespace std;

class Singleton{
	private:
	int test;
	Singleton(){
		cout<<"new"<<endl;
		test = 0;
	}
	~Singleton(){
		cout<<"delete"<<endl;
	}
	public:
	static Singleton *getinstance(){
		static Singleton singleton;
		return &singleton;
	}
	void setvalue(int v){
		test = v;
	}
	int getvalue(){
		return test;
	}
};
int main()
{
	Singleton *single1 = Singleton::getinstance();
	Singleton *single2 = Singleton::getinstance();
	cout<<"value1 :"<<single1->getvalue()<<endl;
	single1->setvalue(100);
	cout<<"value 1:"<<single1->getvalue()<<endl;
	cout<<"value 2:"<<single2->getvalue()<<endl;
	if(single2 == single1){
		cout<<"single1 and single2 is the same object."<<endl;
		return 0;
	}
	return 0;
}
