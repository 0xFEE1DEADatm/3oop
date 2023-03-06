#pragma once
#include<iostream>
#include<string>
#include"Class1.h"
class Goods
{
	std::string name;
	int price, count, num;
	Date data;
public:
	Goods();
	Goods(std::string name1, Date d, int price1, int count1, int num1);
	void set_name(std::string name1);

	void set_data(Date d);
	void set_price(int price1);
	void set_count(int count1);
	void set_num(int num1);
	std::string get_name();
	Date set_data();
	int get_price();
	int get_count();
	int get_num();
	void decrease_price(int n);
	void increase_price(int n);
	void decrease(int n);
	void increase(int n);
	int cost();
	std::string toString();
	Date expiration_date(Date date);
};  
