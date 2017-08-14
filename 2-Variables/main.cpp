#include<iostream>

int age = 18;
int varOne = 54;
int varTwo = 43;
int varThree = varOne + varTwo;

float floatOne = 1.532;
float floatTwo = 0.154;
float floatThree = floatOne + floatTwo;
float floatCheck = 0;

int main() 
{
	/*
	std::cout << age << std::endl;
	std::cout << varThree << std::endl;
	std::cout << floatThree << std::endl;
	std::cout << std::endl;
	std::cout << "what is the sum of these three numbers?" << std::endl;
	std::cin >> floatCheck;
	if (floatCheck == age + varThree + floatThree) 
	{
		std::cout << "Correct!" << std::endl;
	}
	else 
	{
		std::cout << "Incorrect!" << std::endl;
	}

	system("pause");
	
	//Closed Problem A == 14
	int number = 5;

	number = 9;
	number = 11;
	number = 14;

	std::cout << "A) " << number << std::endl;

	system("pause");

	//Closed Problem B == 9
	number = 10;
	number = 9;

	int thing = 55;
	thing = 22;

	std::cout << "B) " << number << std::endl;

	system("pause");

	//Closed Problem C == 21
	number = 3;
	number = 7;
	number = 1;

	int something = 23;
	something = 21;

	number = something;

	std::cout << "C) " << number << std::endl;

	system("pause");

	//Closed Problem D == 3
	number = 1;
	something = 3;

	number = something;

	std::cout << "D) " << something << std::endl;
	
	system("pause");

	//Closed Problem E == 6
	int x = 13;

	x = x / 2;

	std::cout << "E) " << x << std::endl;

	system("pause");

	//Closed Problem F == 6.5
	float y = 13;

	y = y / 2;

	std::cout << "E) " << y << std::endl;
	std::cout << std::endl;

	//system("pause");

	*/
	//Closed 2
	float degCelsius = 78.0f;
	float degFahrenheit = 0.0f;

	std::cout << "What's the temperature in Celcius?" << std::endl;
	std::cin >> degCelsius;

	degFahrenheit = degCelsius * 1.8 + 32;

	std::cout << "Celsius to Fahrenheit)" << std::endl;
	std::cout << "Celsius:    " << degCelsius << std::endl;
	std::cout << "Fahrenheit: " << degFahrenheit << std::endl;

	system("pause");

	//Closed 3
	float rectWidth = 0.0f;
	float rectHeight = 0.0f;
	float rectArea = 0.0f;

	std::cout << "Width of the Rectangle?" << std::endl;
	std::cin >> rectWidth;
	std::cout << "Height of the Rectangle?" << std::endl;
	std::cin >> rectHeight;
	rectArea =  rectWidth * rectHeight;

	std::cout << "Area of a Rectangle)" << std::endl;
	std::cout << "H: " << rectHeight << " , W: " << rectWidth << std::endl;
	std::cout << "Area: " << rectArea << std::endl;

	system("pause");

	//Open 1 -- Average of five
	float a, b, c, d, e;
	float avg;
	avg = a = b = c = d = e = 0.0f;

	std::cout << "what is a?" << std::endl;
	std::cin >> a;
	std::cout << "what is b?" << std::endl;
	std::cin >> b;
	std::cout << "what is c?" << std::endl;
	std::cin >> c;
	std::cout << "what is d?" << std::endl;
	std::cin >> d;
	std::cout << "what is e?" << std::endl;
	std::cin >> e;

	avg = (a + b + c + d + e) / 5;

	std::cout << "Average of Five)" << std::endl;
	std::cout << a << "," << b << "," << c << "," << d << "," << e << std::endl;
	std::cout << "avg: " << avg << std::endl;

	system("pause");


	//Open 2 -- Number Swap -- Challenge 3
	int x = 13;
	int y = 24;

	std::cout << "What is your first number?" << std::endl;
	std::cin >> x;
	std::cout << "What is your second number?" << std::endl;
	std::cin >> y;

	x = x + y;
	y = x - y;
	x = x - y;


	std::cout << "Number Swap)" << std::endl;
	std::cout << "x is " << x << std::endl;
	std::cout << "y is " << y << std::endl;

	system("pause");

	//Open 3 -- Fun Facts for Your Age
	int years = 0;
	int months = 0;
	float decades = 0.0f;
	float scores = 0.0f;
	float JLife, USLife, SLLife;
	JLife = USLife = SLLife = 0;

		//input and calculations
	std::cout << "How old are you?" << std::endl;
	std::cin >> years;
	months = years * 12;
	decades = years / 10;
	scores = years / 20;
	JLife = 84 - years;
	USLife = 79 - years;
	SLLife = 50 - years;



		//output
	std::cout << "Salutations and Well Met! You are " << years << " years old!" << std::endl;
	std::cout << "That's " << months << " months old!" << std::endl;
	std::cout << "Or " << decades << " decades!" << std::endl;
	std::cout << "If you want to REALLY feel old, that's " << scores << " scores!" << std::endl;
	std::cout << "Life expectancies in Japan, the US, and Sierra Leone are 84, 79, and 50, respectively." << std::endl;
	std::cout << "You would live " << JLife << " years in Japan, " << USLife << " in the US, and " << SLLife << " in Sierra Leone!" << std::endl;

	system("pause");

	//Challenge 1 -- Camels to Snakes

	/*
	int age;
	int bullet_count;
	float dog_years;
	int qty;
	float shield_value;
	float defense_matrix_cooldown;
	int red_armor_value;
	float red_armor_ratio;
	int happiness;
	int ghandi_aggression;
	*/

	//Challenge 2 -- Right tool for the job

	/*
	char
	bool
	short
	int
	__int(8/16/32/64)
	long
	long long 
	wchar_t, __wchar_t
	float
	double
	long double


	*/
}