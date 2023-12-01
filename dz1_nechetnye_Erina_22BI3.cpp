#include <iostream>
#include <math.h>
#include <cstdlib>
#include <ctime>

int main()
{
    /*Task 1
        std::cout << "Enter the first trapezoid base: "; //здесь и далее, просим пользователя ввести значение
    int b1 = 0; //здесь и далее, инициализируем переменную
    std::cin >> b1; //здесь и далее, записываем значение, которое ввёл пользователь
    std::cout << "Enter the second trapezoid base: ";
    int b2 = 0;
    std::cin >> b2;
    std::cout << "Enter a trapezoid height: ";
    int h = 0;
    std::cin >> h;
    int square_trap = (b1 + b2) * h / 2; //считаем площадь трапеции
    std::cout << "Trapezoid square = " << square_trap << std::endl; //здесь и далее, выводим результат

    return 0;
    */

    /*Is it working? It works!
    Enter the first trapezoid base : 5
    Enter the second trapezoid base : 8
    Enter a trapezoid height : 4
    Trapezoid square = 26*/

    /*Task 3
    std::cout << "Enter the first cathetus: ";
    int a = 0;
    std::cin >> a;
    std::cout << "Enter the second cathetus: ";
    int b = 0;
    std::cin >> b;
    int square_tr = a * b / 2; //считаем площадь треугольника
    int hyp = sqrt((a*a)+(b*b)); //считаем гипотенузу треугольника
    std::cout << "Square = " << square_tr << std::endl;
    std::cout << "Hypotenuse = " << hyp << std::endl;
    return 0;*/

    /*Is it working? It works!
    Enter the first cathetus : 3
    Enter the second cathetus : 4
    Square = 6
    Hypotenuse = 5*/

    /*Task 5
    std::cout << "Enter the first coordinate: ";
    double x = 0;
    std::cin >> x;
    std::cout << "Enter the second coordinate: ";
    double y = 0;
    std::cin >> y;
    double radius = sqrt((x * x) + (y * y)); //полярный радиус
    double angle = atan(y / x); //полярные угол
    std::cout << "Polar radius = " << radius << std::endl;
    std::cout << "Polar angle = " << angle << " radian" << std::endl;
    return 0;*/

    /*Is it working? It works!
    Enter the first coordinate : 5
    Enter the second coordinate : 6
    Polar radius = 7.81025
    Polar angle = 0.876058 radian*/

    /*Task 7
    double a, b, c = 0;
    std::cout << "Enter a: ";
    std::cin >> a;
    std::cout << "Enter b: ";
    std::cin >> b;
    std::cout << "Enter c: ";
    std::cin >> c;
    double d = b * b - 4 * a * c; //вычисляем дискриминант
    if (d >= 0) //проверяем дискриминант, если он > 0 или = 0 то вычисляем корни(нь)
    {
        double x_1 = (-b + sqrt(d)) / (2 * a);
        double x_2 = (-b - sqrt(d)) / (2 * a);
        std::cout << "x_1 = " << x_1 << std::endl;
        std::cout << "x_2 = " << x_2 << std::endl;
    }
    else //если дискриминант меньше нуля, то выводим ошибку
    {
        std::cout << "Error! Discriminant < 0" << std::endl;
    }
    return 0;*/
    
    /*Is it working? It works!
    Case 1:
    Enter a : 5
    Enter b : 4
    Enter c : 7
    Error!Discriminant < 0

    Case 2:
    Enter a : -9
    Enter b : 4
    Enter c : 9
    x_1 = -0.802172
    x_2 = 1.24662*/

    /*Task 9
    std::cout << "Enter seconds: ";
    double k = 0;
    std::cin >> k;
    if (k >= 0)
    {
        int hour = k/3600; //считаем сколько часов прошло
        int min = (k - hour*3600)/60; // считаем сколько минут прошло (без часов)
        std::cout << "Since the beginning of the day has passed " << hour << " hours" << " and " << min << " minutes." << std::endl;
    }
    else
    {
        std::cout << "Enter a positive value!" << std::endl;//на случай, если пользователь ввёл отрицательное значение
    }
    return 0;*/

    /*Is it working? It works!
    Case 1:
    Enter seconds : -90
    Enter a positive value!
    Case 2:
    Enter seconds: 50000
    Since the beginning of the day has passed 13 hours and 53 minutes.*/

    /*Task 11
    std::cout << "Enter price: ";
    int price = 0;
    std::cin >> price;
    if (price > 1000) //задаём условие получения скидки
    {
        float price_with_sale = price - price * 0.1;// рассчитываем стоимость со скидкой
        std::cout << "Price including discount:" << price_with_sale << std::endl;
    }
    else //если сумма покупки меньше 1000
    {
        std::cout << "The purchase amount is less than 1000. No discount is provided." << std::endl;
    }
    return 0;*/

    /*Is it working? It works!
    Case 1:
    Enter price: 15000
    Price including discount: 13500
    Case 2:
    Enter price: 400
    The purchase amount is less than 1000. No discount is provided.*/

    /*Task 13
    srand(time(0));
    int a = (rand() % 9) + 1;//генерируем случайное число функцией rand() от 1 до 9
    int b = (rand() % 9) + 1;
    int mult = a * b;
    std::cout << "Multiply " << a << " and " << b << std::endl;
    int result;
    std::cin >> result;
    if (mult == result) //проверяем результат умножения которое ввел пользователь
    {
        std::cout << "Right!" << std::endl;
    }
    else
    {
        std::cout << "Wrong! :(" << std::endl;
    }
    return 0;*/

    /*Is it working? It works!
    Case 1:
    Multiply 4 and 1
    4
    Right!
    Case 2:
    Multiply 7 and 4
    50
    Wrong! :(
    */

    /*Task 15
    std::cout << "Enter a number of month: ";
    int month = 0;
    std::cin >> month;
    // далее сравниваем значение пользователя чтобы определить верный месяц и сезон
    if (month == 1){
        std::cout << "January. Winter.";
    }
    if (month == 2) {
        std::cout << "February. Winter.";
    }
    if (month == 3) {
        std::cout << "March. Spring.";
    }
    if (month == 4) {
        std::cout << "April. Spring.";
    }
    if (month == 5) {
        std::cout << "May. Spring.";
    }
    if (month == 6) {
        std::cout << "June. Summer.";
    }
    if (month == 7) {
        std::cout << "July. Summer.";
    }
    if (month == 8) {
        std::cout << "August. Summer.";
    }
    if (month == 9) {
        std::cout << "September. Autumn.";
    }
    if (month == 10) {
        std::cout << "October. Autumn.";
    }
    if (month == 11) {
        std::cout << "November. Autumn.";
    }
    if (month == 12) {
        std::cout << "December. Winter.";
    }
    if (month<1 || month>12) //если пользователь ошибся
    {
        std::cout << "Mistake! Enter values from 1 to 12!" << std::endl;
    }
    return 0;*/

    /*Is it working? It works!
    Case 1:
    Enter a number of month: 5
    May. Spring.
    Case 2:
    Enter a number of month: 50
    Mistake! Enter values from 1 to 12!*/

    /*Task 17
    setlocale(0, "rus"); //подключаем русскую раскладку
    std::cout << "Enter a number from 1 to 99: ";
    int num;
    std::cin >> num;
    int rest = num % 10; //находим остаток от деления (последнюю цифру числа)
    if (num < 1 || num > 99) {
        std::cout << "Mistake!Enter a number from 1 to 99." << std::endl;
    }
    else if (num == 11 || num == 12 || num == 13 || num == 14 || rest == 0 || rest >= 5 && rest <= 9) {
        std::cout << num << " копеек" << std::endl;
    }
    else if (rest == 1) {
        std::cout << num << " копейка" << std::endl;
    }
    else if (rest >= 2 && rest <= 4) {
             std::cout << num << " копейки" << std::endl;
    }
    return 0; */

    /*Is it working? It works!
    Case 1:
    Enter a number from 1 to 99: 55
    55 копеек
    Case 2:
    Enter a number from 1 to 99: 1
    1 копейка
    Case 3:
    Enter a number from 1 to 99: 22
    22 копейки
    Case 4:
    Enter a number from 1 to 99: 554
    Mistake!Enter a number from 1 to 99.*/

    /*Task 19
    std::cout << "Enter a three - digit number:" << std::endl;
    int number;
    std::cin >> number;
    int fig1 = number / 100; //сотни
    int fig2 = (number/10) % 10; //десятые
    int fig3 = number % 10; //единицы
    //19.1
    int mult = fig1 * fig2 * fig3; //умножение цифр(сотни*десятки*единицы)
    std::cout << "Enter number b:";
    int b;
    std::cin >> b;
    if (b < mult) {
        std::cout << "The number b is less than the result of multiplying" << std::endl;
    }
    if (b == mult) {
        std::cout << "The number b and the result of multiplication are equal" << std::endl;
    }
    if (b > mult) {
        std::cout << "The number b is greater than the result of multiplying" << std::endl;
    }
    //19.2
    int sum = fig1 + fig2 + fig3; //сложение цифр
    if (sum % 7 == 0) //проверка деления нацело на 7
    {
        std::cout << "The sum is a multiple of 7." << std::endl;
    }
    else {
        std::cout << "The amount is not a multiple of 7." << std::endl;
    }
    return 0;*/

    /*Is it working? It works!
    Case 1:
    Enter a three - digit number:
    676
    Enter number b:900
    The number b is greater than the result of multiplying
    The amount is not a multiple of 7.
    Case 2:
    Enter a three - digit number:
    777
    Enter number b:58
    The number b is less than the result of multiplying
    The sum is a multiple of 7.
    */
}
