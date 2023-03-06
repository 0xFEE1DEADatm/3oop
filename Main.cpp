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
    std::cout << "Введите название товара: ";
    std::cin >> name1;
    std::cout << "Введите дату оформления: ";
    std::cin >> data1;
    std::cout << "Введите цену товара: ";
    std::cin >> price1;
    goods.set_price(price1);
    std::cout << "Введите количество товара: ";
    std::cin >> count1;
    goods.set_count(count1);
    std::cout << "Введите номер накладной: ";
    std::cin >> num1;
    std::cout << "----------------------------------\n";
    std::cout << "1 - Изменение цены товара\n2 - Изменение количества товара\n3 - Стоимость товара\n";
   
    while (n != 0)
    {
        std::cin >> n;
        switch (n)
        {
            case 1:
           {
            int a, tmp;
            std::cout << "На сколько изменить цену товара? ";
            std::cin >> tmp;
            std::cout << "Уменьшить(1) или увеличить(2) цену? : ";
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
            std::cout << "Цена товара: " << goods.get_price();
            break;
           }
            case 2:
          {
            int a, tmp;
            std::cout << "На сколько изменить количество товара? ";
            std::cin >> tmp;
            std::cout << "Уменьшить(1) или увеличить(2) количество? : ";
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
            std::cout << "Количество товара: " << goods.get_count();
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
