#pragma once
class Complex
{
private:
	double re;
	double img;
public:
	Complex(double, double);
	Complex(const Complex& c);
	Complex operator+(Complex c)const;
	Complex operator+(double)const;
	Complex operator-(Complex)const;
	Complex operator-(double)const;
	Complex operator*(Complex)const;
	Complex operator*(double)const;
	Complex operator/(Complex)const;
	Complex operator/(double)const;
	bool operator==(Complex)const;
	bool operator<=(Complex)const;
	bool operator>=(Complex)const;
	bool operator!=(Complex)const;
	void afficher()const;
	~Complex();

};


