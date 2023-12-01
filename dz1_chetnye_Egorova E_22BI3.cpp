#include <iostream>
#include <cmath>

//tasks: 2,4,6,8,10,12,14,16,18,20
double pi = 3.14529;
//------------------------------------------------------
/*Task 2
double circumference_length(int r) //
{
    double Circum_lenght = 2 * pi * r;
    return (Circum_lenght);
}

double circle_square(int r)
{
    double Circle_sqr = pi * r * r;
    return (Circle_sqr);
}
*/
//-------------------------------------------------------
/*Task 4*/
int sum_num(int num)
{
    int sum_num = 0;
    for (int i = 4; i > 0; i--)
    {
        sum_num += num % 10;
        num /= 10;
    }
    return (sum_num);
}

//-------------------------------------------------------
/*Task 6
double convertDegToRad(double degree)
{
    return (degree * (180 / pi));
}
double x_polarToDecart(int r, double corner)
{
    corner = convertDegToRad(corner);
    double x;
    x = r * std::cos(corner);
    return (x);
}
double y_polarToDecart(int r, double corner)
{
    corner = convertDegToRad(corner);
    double y;
    y = r * std::sin(corner);
    return (y);
}
*/

//-------------------------------------------------------
/*Task 8
double medians(double a, double b, double c)
{
     return (0.5 * pow(2 * pow(c, 2) + 2 * pow(b,2) - pow(a, 2), 0.5));
}

bool checking_existence_triangle(double a, double b, double c)
{
    if ((a + b <= c) || (a + c <= b) || (b + c <= a))
    {
        return false;
    }
}
*/
//-------------------------------------------------------
/*Task 10
double isoscele_tringle(double a, double b, double c) //функция выяснения равнобедренности треугольника
{
    if (a == b || a == c || c == b) //проверяем условие признака равнобедренного треугольника
    {
        return 1;
    }
}

bool checking_existence_triangle(double a, double b, double c)
{
    if ((a + b <= c) || (a + c <= b) || (b + c <= a))
    {
        return false;
    }
}*/

//-------------------------------------------------------
/*Task 12
void recomendation(double weight, double height) //функция рекомендаций на основе роста и веса
{

    if (height - 100 == weight)
    {
        std::cout << "You have ideal weight!"; //идеальный вес
    }
    else if (height - 100 < weight)
    {
        std::cout << "We need to pump up..."; //надо подкачаться...
    }
    else if (height - 100 > weight) //если вес маленький
    {
        std::cout << "Eat more!"; //больше кушайте
    }
}
*/
//-------------------------------------------------------
/*Task 14
void price(int day, double phone_time)
{
    double tariph = 3.50; //пусть цена разговора 3.50 рублей в за минуту

    if (day == 6 or day == 7)
    {
        std::cout << "20% discount today! The cost of your " << phone_time << "-minute conversation = " << tariph * phone_time * 0.8 << " dollars" << std::endl;
    }
    else
    {
        std::cout << "The cost of your " << phone_time << "-minute conversation = " << tariph * phone_time << " dollars" << std::endl;
    }
}
*/
//-------------------------------------------------------
/*Task 16*/
void ticket_verification(int number)
{
    int num123 = 0, num456 = 0; //инициализируем переменные для сумм первых трём и последних трёх цифр номера билета
    for (int i = 0; i < 3; i++)
    {
        num123 += number % 10;
        number /= 10;
    }
    for (int i = 0; i < 3; i++)
    {
        num456 += number % 10;
        number /= 10;
    }
    if (num123 == num456)
    {
        std::cout << "Your ticket is a lucky one!";
    }
    else
    {
        std::cout << "Your ticket is a unlucky!";
    }
}

//-------------------------------------------------------
/*Task 18
void palindrom(int number)
{
    if (999 < number && number < 10000)
    {
        if ((number / 1000 == number % 10) && (number / 10) %10 == (number / 100) % 10)
        {
            std::cout << "It is palindrom\n";
        }
        else
        {
            std::cout << "It is not palindrom\n";
        }
    }
    else
    {
        std::cout << "The entered number is not four digits.\n";
    }
}*/
//-------------------------------------------------------
/*Task 20
void rectangle_check(float small_a, float small_b, float big_c, float big_d) //инициализируем 2 стороны маленького прямоугольника и 2 стороны большого прямоугольника
{
    if ((small_a < big_c && small_b < big_d) || (small_a < big_d && small_b < big_c))
    {
        std::cout << "A rectangle with sides a = " << small_a << " and b = " << small_b << " can be placed inside a rectangle with sides c = " << big_c << " and d = " << big_d << std::endl;
    }
    else
    {
        std::cout << "A rectangle with sides a = " << small_a << " and b = " << small_b << " cannot be placed inside a rectangle with sides c = " << big_c << " and d = " << big_d << std::endl;
    }
}
*/

int main()
{
    /*Task 2
    int choose = 0; //инициализируем переменную для выбора нужного функционала пользователем с клавиатуры
    int r; //объявляем переменную для радиуса окружности/круга
    std::cout << "What do you want know: circle's square(1) or Circumference length(2)?\n";
    std::cin >> choose;
    if (choose == 1) //если пользователь захотел найти площадь круга
    {
        std::cout << "Enter radius of circle: ";
        std::cin >> r;
        std::cout << Circle_square(r) << std::endl;
    }
    else //если пользователь захотел найти длину окружности
    {
        std::cout << "Enter radius of circumference: ";
        std::cin >> r;
        std::cout << Circumference_length(r) << std::endl;
    }
    */

    /*Task_4
    int num = 0; //инициализируем переменную для хранения десятичного четырёхзначного числа с клавиатуры
    std::cout << "Enter a four-digit decimal number: ";
    std::cin >> num;
    if (999 < num && num < 10000)
    {
        std::cout << "Summary digits of your number = " << sum_num(num) << std::endl;
    }
    else
    {
        std::cout << "The entered number is not four digits.\n";
    }
    */


    /*Task 6
    double r, corner; //объявляем переменные для радиус-вектора и угла между осью х и радиусом
    std::cout << "Enter a radius-vect: ";
    std::cin >> r;
    std::cout << "Enter a corner between coordinate axes (in degrees): ";
    std::cin >> corner;
    double corner_rad = convertDegToRad(corner);
    std::cout << "Decart coordinate:\n";
    std::cout << "x = " << x_polarToDecart(r, corner_rad) << std::endl;
    std::cout << "y = " << y_polarToDecart(r, corner_rad) << std::endl;
    */

    /*Task 8
    double a=0, b=0, c=0; //инициализируем исходные стороны треугольника
    double median_a = 0, median_b = 0, median_c = 0; //инициализируем стороны new треугольника
    std::cout << "Enter the length of the first side of the triangle: ";
    std::cin >> a;
    std::cout << "Enter the length of the second side of the triangle: ";
    std::cin >> b;
    std::cout << "Enter the length of the third side of the triangle: ";
    std::cin >> c;
    if (checking_existence_triangle(a,b,c) == true) //если треугольник существует
    {
        median_a = medians(a, b, c); //ищем медиану к стороне а
        median_b = medians(b, a, c); //ищем медиану к стороне b
        median_c = medians(c, b, a); //ищем медиану к стороне c
        std::cout << "Medians of internal triangle: " << medians(median_a, median_b, median_c) << ", " << medians(median_b, median_a, median_c) << ", " << medians(median_c, median_b, median_a) << std::endl;
    }
    else //если треугольник не существует
    {
        std::cout << "such a triangle does not exist\n";
    }
    */

    /*Task 10
    double a = 0, b = 0, c = 0; //инициализируем переменные: исходные стороны треугольника
    std::cout << "Enter the length of the first side of the triangle: ";
    std::cin >> a;
    std::cout << "Enter the length of the second side of the triangle: ";
    std::cin >> b;
    std::cout << "Enter the length of the third side of the triangle: ";
    std::cin >> c;
    if (checking_existence_triangle(a, b, c) == true)
    {
        if (isoscele_tringle(a, b, c) == 1) //если условие равнобедренности из функции выполнилось
        {
            std::cout << "Your triangle is isosceles\n"; //вывод: треугольник равнобедренный
        }
        else //если условие равнобедренности из функции НЕ выполнилось
        {
            std::cout << "Your triangle is uneven\n"; //вывод: треугольник неравнобедренный
        }
    }
    else //если треугольник не существует
    {
        std::cout << "such a triangle does not exist\n";
    }
    */

    /*Task 12
    double height = 0, weight = 0; //инициализируем переменные рост и вес человека
    std::cout << "Enter the height: ";
    std::cin >> height;
    std::cout << "Enter the weight: ";
    std::cin >> weight;

    recomendation(weight, height);
    */

    /*tast 14
    double phone_time = 0; //инициализируем переменную время разговора
    int dayOfWeek; //инициализируем день недели
    std::cout << "Enter the time of the conversation: ";
    std::cin >> phone_time;
    std::cout << "Enter the day of the week (number from 1 to 7. For example: '1' = Monday, '7' = Sunday: ";
    std::cin >> dayOfWeek;

    price(dayOfWeek, phone_time);
    */

    /*Task 16
    int number_ticket = 0; //инициализируем переменную для номера билета
    std::cout << "Enter the nubber of the ticket: ";
    std::cin >> number_ticket;

    if (number_ticket>99999 && number_ticket < 1000000)
    {
        ticket_verification(number_ticket);
    }
    else
    {
        std::cout << "Error. Not number of ticket\n";
    }*/

    /*Task 18
    int number = 0; //инициализируем переменную для четырёхзначного числа
    std::cout << "Enter a four - digit number : ";
    std::cin >> number;

    palindrom(number);
    */

    /*Task 20
    int a, b, c, d; //объявляем переменные для сторон треугольника
    std::cout << "Enter the first side of the first rectangle : ";
    std::cin >> a;
    std::cout << "Enter the second side of the first rectangle : ";
    std::cin >> b;
    std::cout << "Enter the first side of the second rectangle : ";
    std::cin >> c;
    std::cout << "Enter the second side of the second rectangle : ";
    std::cin >> d;

    rectangle_check(a, b, c, d);
    */
    return 0;
}