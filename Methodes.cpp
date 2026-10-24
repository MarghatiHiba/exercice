#include"complexe.h"
#include<iostream>
#include<cmath>
using namespace std;

Complex::Complex(double re, double im) :re(re), img(im) {}
Complex::Complex(const Complex& c) {
	this->re = c.re;
	this->img = c.img;
}
Complex Complex::operator+(Complex c) const {
	Complex* res = new Complex(0.0, 0.0);
	res->re = this->re + c.re;
	res->img = this->img + c.img;
	return *res;
}
Complex Complex::operator+(double a)const {
	Complex* res = new Complex(0.0, 0.0);
	res->re = this->re + a;
	res->img = this->img + 0.0;
	return *res;

}
Complex Complex::operator-(Complex z)const {
	Complex* moin = new Complex(0.0, 0.0);
	moin->re = this->re - z.re;
	moin->img = this->img - z.img;
	return *moin;
}

Complex Complex::operator-(double a)const {
	Complex* moi = new Complex(0.0, 0.0);
	moi->re = this->re - a;
	moi->img = this->img - 0.0;
	return *moi;
}
Complex Complex::operator*(Complex z)const {
	Complex* moi = new Complex(0.0, 0.0);
	moi->re = this->re * z.re - this->img * z.img;
	moi->img = this->img * z.re + this->re * z.img;
	return *moi;


}
Complex Complex::operator*(double a)const {
	Complex* moi = new Complex(0.0, 0.0);
	moi->re = this->re * a;
	moi->img = this->img * a;
	return *moi;


}

Complex Complex::operator/(Complex z)const {
	Complex* moi = new Complex(0.0, 0.0);
	moi->re = (this->re * z.re + this->img * z.img) / (pow(z.re, 2) + pow(z.img, 2));
	moi->img = (this->img * z.re - this->re * z.img) / (pow(z.re, 2) + pow(z.img, 2));
	return *moi;


}
Complex Complex::operator/(double a)const {
	Complex* moi = new Complex(0.0, 0.0);
	moi->re = this->re / a;
	moi->img = this->img / a;
	return *moi;


}

bool Complex::operator==(Complex c) const
{
	if (this->re == c.re && this->img == c.img) {
		return true;
	}
	else {
		return false;

	}
}

bool Complex::operator<=(Complex c) const
{
	if (this->re <= c.re && this->img <= c.img)
		return true;
	else
		return false;
}


bool Complex::operator>=(Complex c) const
{
	if (this->re >= c.re && this->img >= c.img)
		return true;
	else
		return false;
}


bool Complex::operator!=(Complex c) const
{
	if (this->re != c.re && this->img != c.img)
		return true;
	else
		return false;
}

void Complex::afficher() const
{
	cout << this->re << "i+" << this->img << endl;
}

Complex::~Complex()
{
}


