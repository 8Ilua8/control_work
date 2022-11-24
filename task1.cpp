#include <iostream>
std::pair <int, int> get_numbers();
int max(std::pair<int, int> numbers);
void out_number(int number);

int main()
{
	out_number(max(get_numbers()));
	return 0;
}
std::pair <int, int> get_numbers() {

	std::pair<int, int> numbers;
	std::cout << "Enter to numbers - ";
	std::cin >> numbers.first >> numbers.second;
	return numbers;
}
int max(std::pair<int, int> numbers) {
	return numbers.first > numbers.second ? numbers.first : numbers.second;
}
void out_number(int number) {

	std::cout << "Your max number = " << number << std::endl;
}
