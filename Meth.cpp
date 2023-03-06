#include"Class.h"
Goods::Goods()
{
	name = "";
	price = 0;
	count = 0;
	num = 0;
}
Goods::Goods(std::string name1, Date d, int price1, int count1, int num1)
{
	name = name1;
	data = d;
	price = price1;
	count = count1;
	num = num1;
}

void Goods::set_name(std::string name1)
{
	name = name1;
}

void Goods::set_data(Date d)
{
	data = d;
}

void Goods::set_price(int price1)
{
	price = price1;
}

void Goods::set_count(int count1)
{
	count = count1;
}

void Goods::set_num(int num1)
{
	num = num1;
}

std::string Goods::get_name()
{
	return name;
}
Date Goods::set_data()
{
	return data;
}

int Goods::get_price()
{
	return price;
}

int Goods::get_count()
{
	return count;
}

int Goods::get_num()
{
	return num;
}

void Goods::decrease_price(int tmp)
{
	price = price - tmp;
}

void Goods::increase_price(int tmp)
{
	price = price + tmp;
}

void Goods::decrease(int tmp)
{
	count = count + tmp;
}
void Goods::increase(int tmp)
{
	count = count - tmp;
}

int Goods::cost()
{
	return  count * price;
}

std::string Goods::toString()
{
	return std::string("—тоимость товара: " + std::to_string(count*price));
}
Date Goods::expiration_date(Date d)
{
	Date c, b, a;
	std::cout << "¬ведите день, мес€ц, год: ";
	std::cin >> a >> b >> c;
	if (d == с)
	{

	}
}
