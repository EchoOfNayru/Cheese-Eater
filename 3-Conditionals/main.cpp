#include<iostream>
using namespace std;
int up = 0;
int num = 0;

int main()
{
	bool IsEntered = false;
	while (IsEntered == false)
	{

		cout << "if you are up, say 1 or 0 if not." << endl;
		cin >> up;
		cin.clear();
		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // kobey

		if (up == 0 || up == 1)
		{
			IsEntered = true;
		}
		else
		{
			cout << "that's not a real answer!" << endl;
			/*cout << "if you are up, say 1 or 0 if not." << endl;
			cin >> up;*/

		}


	}


	if (up == true)
	{
		cout << "You are up!" << endl;
	}
	else
	{
		cout << "You are not up!" << endl;
	}

	system("pause");

	cout << "what is your number?" << endl;
	cin >> num;
	cin.clear();
	cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

	if (num >= 15)
	{
		cout << "That number is higher than 14." << endl;
	}
	else if (num == 82)
	{
		cout << "my number is 82. your number is the same as mine!" << endl;
	}
	else
	{
		cout << "your number is unique." << endl;
	}
	cout << "Your number is " << num << endl;

	system("pause");

	//Closed 1 -- truth tables
	/*
	1 - true
	2 - true
	3 - true
	4 - false
	5 - false
	6 - true
	7 - true
	*/

	//Closed 2 -- Evaluate the Following
	//Problem A -- 30
	int numberA = 15;
	if (numberA > 10)
	{
		numberA = numberA * 2;
	}

	cout << "A) " << numberA << endl;

	//Problem B -- 15
	int numberB = 15;
	if (numberB < 15)
	{
		numberB = numberB * 3;
	}

	std::cout << "B) " << numberB << std::endl;

	//Problem C -- 24
	int numberC = 12;
	if (numberC == 12)
	{
		numberC = numberC * 2;
	}

	std::cout << "C) " << numberC << std::endl;

	//Problem D -- 0
	int numberD = 12;
	if (numberD <= 12)
	{
		numberD = numberD * 0;
	}

	std::cout << "D) " << numberD << std::endl;

	//Problem E -- 56
	int numberE = 14;
	if (numberE >= 12)
	{
		numberE *= 4;
	}

	std::cout << "E) " << numberE << std::endl;

	//Problem F -- 6
	int numberF = 6;
	if (numberF == 0)
	{
		numberF = 0;
	}
	else if (numberF > 10)
	{
		numberF = 1;
	}

	std::cout << "F) " << numberF << std::endl;

	//Problem G -- 3
	int numberG = 6;

	if (numberG < 0)
	{
		numberG = 0;
	}
	else if (numberG < 2)
	{
		numberG = 1;
	}
	else if (numberG < 5)
	{
		numberG = 2;
	}
	else
	{
		numberG = 3;
	}
	std::cout << "G) " << numberG << std::endl;

	//Closed 2 -- Number Judging
	IsEntered = false;

	while (IsEntered == false)
	{
		cout << "give me a number between 1 and 100" << endl;
		cin >> num;
		cin.clear();
		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		if (num >= 1 && num <= 100)
		{
			IsEntered = true;
		}
		else
		{
			cout << "that's not a real answer!" << endl;
			/*cout << "if you are up, say 1 or 0 if not." << endl;
			cin >> up;*/

		}
	}


	if (num > 50)
	{
		cout << "your number, which is " << num << ", is greater than 50." << endl;
	}
	else if (num < 50)
	{
		cout << "your number, which is " << num << ", is less than 50." << endl;
	}
	else if (num == 50)
	{
		cout << "your number, which is " << num << ", is equal to 50." << endl;
	}

	system("pause");

	//Closed 3 -- Age Gate

	int age;

	cout << "What is your age?" << endl;
	cin >> age;
	cin.clear();
	cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

	if (age < 18)
	{
		cout << "you are a minor." << endl;
	}
	else
	{
		cout << "you are an adult" << endl;
		if (age >= 50)
		{
			cout << "you are eligiable for membership with the AARP!" << endl;
		}
		if (age >= 65)
		{
			cout << "you are eligiable for retirement benefits!" << endl;
		}
	}

	system("pause");

	//Closed 4 -- The Smallest of Three Numbers
	int num1, num2, num3;

	cout << "What is your first number?" << endl;
	cin >> num1;
	cin.clear();
	cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	cout << "What is your second number?" << endl;
	cin >> num2;
	cin.clear();
	cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	cout << "What is your third number?" << endl;
	cin >> num3;
	cin.clear();
	cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

	if (num1 < num2 && num1 < num3)
	{
		cout << "your first number is the lowest, which sits at " << num1 << endl;
	}
	if (num2 < num1 && num2 < num3)
	{
		cout << "your second number is the lowest, which sits at " << num2 << endl;
	}
	if (num3 < num2 && num3 < num1)
	{
		cout << "your third number is the lowest, which sits at " << num3 << endl;
	}

	system("pause");

	//Open 1 -- Even or Odd
	cout << "give me a whole number" << endl;
	cin >> num;
	cin.clear();
	cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

	if (num % 2 == 1) {
		cout << "your number, " << num << ", is ODD" << endl;
	}
	else
	{
		cout << "your number," << num << ", is EVEN" << endl;
	}

	system("pause");

	//Open 2 -- Clamp the Number
	cout << "give me a number between 15 and 30" << endl;
	cin >> num;
	cin.clear();
	cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

	if (num < 15)
	{
		num = 15;
	}
	else if (num > 30)
	{
		num = 30;
	}

	cout << "your number is... " << endl;
	cout << num << endl;

	system("pause");

	//Open 3 -- Input Validation
	// Field:       Thai Spiciness Rating
	// Constraints: Any number from 0 to 5, inclusive of both ends.
	int thaiSpiceRating = 0;
	std::cout << "How spicy should your food be?\n";
	std::cin >> thaiSpiceRating;
	cin.clear();
	cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	if (thaiSpiceRating > 5) { thaiSpiceRating = 5; }
	else if (thaiSpiceRating < 0) { thaiSpiceRating = 0; }
	std::cout << "You ordered with a spiciness rating of " << thaiSpiceRating << "!\n";
	system("pause");

	// Field:       Purchase Order for Cookies
	// Constraints: Must be ordered in multiples of 23. Only whole numbers.
	//              Round down to the nearest multiple if not a multiple of 23.
	//
	//              If nearest multiple is zero, provide an error message.
	int cookieBoxes = 0;
	int isError = 0;
	cout << "How many cookies would you like? they come in boxes of 23.\n";
	cin >> cookieBoxes;
	cin.clear();
	cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	if (cookieBoxes % 23 != 0)
	{
		cookieBoxes = cookieBoxes - (cookieBoxes % 23);
		if (cookieBoxes == 0) {
			isError = 1;
		}
	}
	if (isError == 1)
	{
		cout << "ERROR" << endl;
	}
	else
	{
		cout << "you ordered " << cookieBoxes << " cookies!" << endl;
	}
	system("pause");

	// Field:       Purchase Order for Sketchbooks (3pk)
	// Constraints: Must order at least 9 sketchbooks total.
	//              The total may not exceed 30 sketchbooks ordered.
	//
	//              If the total number of sketchbooks ordered does not meet
	//              the minimum order count or exceeds the maximum order count,
	//              provide an error message.
	int sketchBooks = 0;
	cout << "How many sketch books would you like? the minimum is 9, and the max is 30." << endl;
	cin >> sketchBooks;
	cin.clear();
	cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	if (sketchBooks > 30)
	{
		isError = 1;
	}
	else if (sketchBooks < 9)
	{
		isError = 1;
	}
	if (isError == 1) {
		cout << "ERROR" << endl;
	}
	else
	{
		cout << "you ordered " << sketchBooks << " sketch books!" << endl;
	}
	system("pause");

	// Field:       Enable Motion Blur
	// Constraints: Must be a 'y' or 'n' value.
	//
	//              Provide an error message if any other value.
	char motionBlur = 'a';
	cout << "Would you like to enable Motion Blur? y or n." << endl;
	cin >> motionBlur;
	cin.clear();
	cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	if (motionBlur != 'y' && motionBlur != 'n')
	{
		cout << "ERROR" << endl;
	}
	else if (motionBlur == 'y')
	{
		cout << "Motion Blur is enabled" << endl;
	}
	else if (motionBlur == 'n') {
		cout << "Motion Blur is disabled" << endl;
	}
	system("pause");

	// Field:       Texture Size
	// Constraints: Round to the nearest power of two. Only whole numbers.
	//
	//              If nearest power is zero, provide an error message.
	int textureSize = 0;
	cout << "what texture size would you like? any whole number divisible by 2." << endl;
	cin >> textureSize;
	cin.clear();
	cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	if (textureSize == 0) {
		cout << "ERROR" << endl;
	}
	else if (textureSize % 2 == 1)
	{
		textureSize++;
	}
	if (textureSize != 0)
	{
		cout << "You set your texture size to " << textureSize << endl;
	}
	system("pause");

	//Open 4 -- Four function disposable calculator
	int input1 = 0;
	int input2 = 0;
	int output = 0;
	char input3 = '+';
	cout << "what is your first number?" << endl;
	cin >> input1;
	cin.clear();
	cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	cout << "what is your second number?" << endl;
	cin >> input2;
	cin.clear();
	cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	cout << "+, -, *, or /?" < endl;
	cin >> input3;
	cin.clear();
	cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	if (input3 == '+') 
	{
		output = input1 + input2;
	}
	else if (input3 == '-')
	{
		output = input1 - input2;
	}
	else if (input3 == '*')
	{
		output = input1 * input2;
	}
	else if (input3 == '/')
	{
		if (input2 == 0) 
		{
			cout << "You cant divide by 0!" << endl;
		}
		else 
		{
			output = input1 / input2;
		}
	}
	cout << output << endl;
	system("pause");

	//Open5 -- a battle of prehistoric proportions
	int battleWins = 0;
	int dinoBattleWins = 0;
	int strength = 0;
	int RPS = 0;
	int exp = 0;
	char sleep = 'n';
	int vitamins = 0;
	char dayTime = 'd';
	char eaten = 'y';

	cout << "You have met a baby dionsaur in battle!!! you need more points than the dino to win this difficult battle." << endl;
	cout << "What is your strength on a scale of 1 to 10?" << endl;
	cin >> strength;
	cin.clear();
	cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	if (strength > 4)
	{
		battleWins++;
		cout << "You overpower the dinosaur in a contest of raw strength!" << endl;
	}
	else if (strength <= 4) {
		dinoBattleWins++;
		cout << "the dinosuar tosses you around like a plaything." << endl;
	}
	system("pause");
	cout << "What of these items did you take into battle with you? (1, 2, or 3)" << endl;
	cout << "1) a sack of potatoes" << endl;
	cout << "2) an invisibility cloak" << endl;
	cout << "3) The Mango Blade" << endl;
	cin >> RPS;
	cin.clear();
	cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	if (RPS == 1) {
		dinoBattleWins++;
		cout << "the dino hates potatoes and eats part of you instead!" << endl;
	}
	else if (RPS == 2) 
	{
		cout << "the dino cant find you, but you also have nothing to attack the dino with." << endl;
	}
	else if (RPS == 3) 
	{
		battleWins++;
		cout << "the dino is distracted with smell of the mangos and you cut it deep!" << endl;
	}
	else 
	{
		dinoBattleWins++;
		cout << "the dino eats part of you!" << endl;
	}
	system("pause");
	cout << "how many battles have you taken part in?" << endl;
	cin >> exp;
	cin.clear();
	cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	if (exp > 2) {
		battleWins++;
		cout << "You know your way around the battlefield better than the dino and you dance around it leaving it dizzy." << endl;
	}
	else 
	{
		dinoBattleWins++;
		cout << "you have no idea what you are doing and the dino rushes at you and eats part of you!" << endl;
	}
	system("pause");
	cout << "did you get enough sleep last night?y or n" << endl;
	cin >> sleep;
	cin.clear();
	cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	if (sleep == 'y') 
	{
		battleWins++;
		cout << "You had enough sleep and you were able to see the branch fall and dodged out of the way, letting it crash into the dino." << endl;
	}
	else 
	{
		dinoBattleWins++;
		cout << "You didn't have enough sleep and you got smushed by a branch that fell and crashed into you" << endl;
	}
	system("pause");
	cout << "how many mg of Vitamin C do you get everyday?" << endl;
	cin >> vitamins;
	cin.clear();
	cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	if (vitamins >= 75) 
	{
		battleWins++;
		cout << "You have enough vitamins and closes up the bleeding faster than the dinosaur." << endl;
		if (RPS == 3) {
			battleWins++;
			cout << "the mango blade you took into battle with you helps to close up your wounds and restores your vigor." << endl;
		}
	}
	else 
	{
		dinoBattleWins++;
		cout << "your cuts and scratches are bleeding profusely and they wont stop bleeding,no matter what you do." << endl;
	}
	system("pause");
	cout << "what time of day is it? (D)ay or (N)ight?" << endl;
	cin >> dayTime;
	cin.clear();
	cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	if (dayTime == 'd') 
	{
		battleWins++;
		cout << "It's day time and you are able to clearly see how the battle is going, and you are able to see the dino wind up its tail for an attack, giving you enough time to evade." << endl;
	}
	else if (dayTime == 'n') 
	{
		dinoBattleWins++;
		cout << "It's night time and you aren't able to clearly see, and out of nowhere the dino's tail slams across your body." << endl;
	}
	else 
	{
		//do the thing
	}
	system("pause");
	cout << "Have you eaten yet today? y or n" << endl;
	if (eaten == 'y') 
	{
		battleWins++;
		cout << "You are full of energy from the great breakfast of insects and dirty river water from this morning, you watch as the dino begins to tire." << endl;
	}
	else if (eaten == 'n') 
	{
		dinoBattleWins++;
		cout << "your stomache hurts as you were hoping to finally get a good meal from killing this baby dino. your stomach pangs are hindering your movement." << endl;
	}
	else () 
	{
		//do the thing
	}
}