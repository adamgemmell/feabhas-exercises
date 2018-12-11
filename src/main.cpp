#include <iostream>
#include <limits>

int main (){

	std::cout << "Hello World";
	std::cout << std::endl;

	std::cout << "char size: " << sizeof(char) << std::endl;
	std::cout << "char min: " << static_cast<int>( std::numeric_limits<char>::min() ) << std::endl;
	std::cout << "char max: " << static_cast<int>( std::numeric_limits<char>::max() ) << std::endl;
	std::cout << "char lowest: " << static_cast<int>( std::numeric_limits<char>::lowest() ) << std::endl;

	std::cout << "bool size: " << sizeof(bool) << std::endl;
	std::cout << "bool min: " << std::numeric_limits<bool>::min() << std::endl;
	std::cout << "bool max: " << std::numeric_limits<bool>::max() << std::endl;
	std::cout << "bool lowest: " << std::numeric_limits<bool>::lowest() << std::endl;
	
	std::cout << "short size: " << sizeof(short) << std::endl;
	std::cout << "short min: " << std::numeric_limits<short>::min() << std::endl;
	std::cout << "short max: " << std::numeric_limits<short>::max() << std::endl;
	std::cout << "short lowest: " << std::numeric_limits<short>::lowest() << std::endl;
	
	std::cout << "int size: " << sizeof(int) << std::endl;
	std::cout << "int min: " << std::numeric_limits<int>::min() << std::endl;
	std::cout << "int max: " << std::numeric_limits<int>::max() << std::endl;
	std::cout << "int lowest: " << std::numeric_limits<int>::lowest() << std::endl;

	std::cout << "unsigned int size: " << sizeof(unsigned int) << std::endl;
	std::cout << "unsigned int min: " << std::numeric_limits<unsigned int>::min() << std::endl;
	std::cout << "unsigned int max: " << std::numeric_limits<unsigned int>::max() << std::endl;
	std::cout << "unsigned int lowest: " << std::numeric_limits<unsigned int>::lowest() << std::endl;

	std::cout << "long int size: " << sizeof(long int) << std::endl;
	std::cout << "long int min: " << std::numeric_limits<long int>::min() << std::endl;
	std::cout << "long int max: " << std::numeric_limits<long int>::max() << std::endl;
	std::cout << "long int lowest: " << std::numeric_limits<long int>::lowest() << std::endl;

	std::cout << "long long int size: " << sizeof(long long int) << std::endl;
	std::cout << "long long int min: " << std::numeric_limits<long long int>::min() << std::endl;
	std::cout << "long long int max: " << std::numeric_limits<long long int>::max() << std::endl;
	std::cout << "long long int lowest: " << std::numeric_limits<long long int>::lowest() << std::endl;
	
	std::cout << "float size: " << sizeof(float) << std::endl;
	std::cout << "float min: " << std::numeric_limits<float>::min() << std::endl;
	std::cout << "float max: " << std::numeric_limits<float>::max() << std::endl;
	std::cout << "float lowest: " << std::numeric_limits<float>::lowest() << std::endl;
	
	std::cout << "double size: " << sizeof(double) << std::endl;
	std::cout << "double min: " << std::numeric_limits<double>::min() << std::endl;
	std::cout << "double max: " << std::numeric_limits<double>::max() << std::endl;
	std::cout << "double lowest: " << std::numeric_limits<double>::lowest() << std::endl;

	std::cout << "long double size: " << sizeof(long double) << std::endl;
	std::cout << "long double min: " << std::numeric_limits<long double>::min() << std::endl;
	std::cout << "long double max: " << std::numeric_limits<long double>::max() << std::endl;
	std::cout << "long double lowest: " << std::numeric_limits<long double>::lowest() << std::endl;
		
	return 0;
}
