/*************************************************************************
	> File Name: complex.cpp
	> Author: Comst
	> Mail:750145240@qq.com 
	> Created Time: 2014年04月24日 星期四 09时35分50秒
 ************************************************************************/

#include"complex.h"

MyComplex& MyComplex::operator=(const MyComplex &c)
{
	this->_real = c._real;
	this->_image = c._image;
	return *this;
}
MyComplex::MyComplex(){
}
MyComplex::MyComplex(float real,float image):_real(real),_image(image){
}
MyComplex::~MyComplex(){
}
MyComplex::MyComplex(const MyComplex& c)
{
	this->_real = c._real;
	this->_image = c._image;
}
MyComplex operator+(const MyComplex l,const MyComplex r)
{
	MyComplex tmp;
	tmp._real = l._real + r._real;
	tmp._image = l._image + r._image;
	return tmp;
}

MyComplex operator-(const MyComplex l,const MyComplex r){
	MyComplex tmp;
	tmp._real = l._real - r._real;
	tmp._image = l._image - r._image;
	return tmp;
}

MyComplex operator*(const MyComplex l,const MyComplex r)
{
	MyComplex tmp;
	tmp._real = l._real * r._real;
	tmp._image = l._image * r._image;
	return tmp;
}

bool operator==(const MyComplex l,const MyComplex r)
{
	if(l._real == r._real && l._image ==r._image)
		return true;
	else
		return false;
}

std::istream& operator>>(std::istream& is,MyComplex& c)
{
	std::cout<<"a complex :"<<std::endl;
	is>>c._real;
	is>>c._image;
	return is;
}
std::ostream& operator<<(std::ostream& os,const MyComplex& c)
{
	std::cout<<c._real<<' ';
	if(c._image >=0.0)
		std::cout<<'+';
	std::cout<<c._image<<"i\n";
	return os;
}
