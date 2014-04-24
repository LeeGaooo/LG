/*************************************************************************
	> File Name: complex.h
	> Author: Comst
	> Mail:750145240@qq.com 
	> Created Time: 2014年04月24日 星期四 09时17分05秒
 ************************************************************************/

#ifndef COMPLEX_H__
#define COMPLEX_H__

#include<iostream>

class MyComplex{
	public:
		MyComplex();
		MyComplex(float real,float image);
		MyComplex(const MyComplex&);
		~MyComplex();
		friend MyComplex operator+(const MyComplex l,const MyComplex r);
		friend MyComplex operator-(const MyComplex l,const MyComplex r);
		friend MyComplex operator*(const MyComplex l,const MyComplex r);
		friend bool operator==(const MyComplex l,const MyComplex r);
		friend std::istream& operator>>(std::istream& is,MyComplex & c);
		friend std::ostream& operator<<(std::ostream& os,const MyComplex& c);
		MyComplex& operator=(const MyComplex &c);

	private:
		float _real;
		float _image;

};


#endif
