#include <iostream>
#include <string>
#include "Class.h"
int main()
{
    setlocale(0, "");
    std::string name1, data1;
    int price1, count1, num1;
    Goods goods;
    int n = -1;
    std::cout << "������� �������� ������: ";
    std::cin >> name1;
    std::cout << "������� ���� ����������: ";
    std::cin >> data1;
    std::cout << "������� ���� ������: ";
    std::cin >> price1;
    goods.set_price(price1);
    std::cout << "������� ���������� ������: ";
    std::cin >> count1;
    goods.set_count(count1);
    std::cout << "������� ����� ���������: ";
    std::cin >> num1;
    std::cout << "----------------------------------\n";
    std::cout << "1 - ��������� ���� ������\n2 - ��������� ���������� ������\n3 - ��������� ������\n";
   
    while (n != 0)
    {
        std::cin >> n;
        switch (n)
        {
            case 1:
           {
            int a, tmp;
            std::cout << "�� ������� �������� ���� ������? ";
            std::cin >> tmp;
            std::cout << "���������(1) ��� ���������(2) ����? : ";
            std::cin >> a;
            switch (a)
            {
            case 1:
            {
                goods.decrease_price(tmp);
                break;
            }
            case 2:
            {
                goods.increase_price(tmp);
                break;
            }
            }
            std::cout << "���� ������: " << goods.get_price();
            break;
           }
            case 2:
          {
            int a, tmp;
            std::cout << "�� ������� �������� ���������� ������? ";
            std::cin >> tmp;
            std::cout << "���������(1) ��� ���������(2) ����������? : ";
            std::cin >> a;
            switch (a)
            {
            case 1:
            {
                goods.decrease(tmp);
                break;
            }
            case 2:
            {
                goods.increase(tmp);
                break;
            }
           
            }
            std::cout << "���������� ������: " << goods.get_count();
            break;
          }
           case 3:
          {
            std::cout << goods.toString();
            break;
          }
            
        }
    }
}
