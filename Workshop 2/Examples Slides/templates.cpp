#include <string>
#include <iostream>

template<typename T>
class AddElements {
private:
	T element;
public:
	AddElements(T element) {
		this->element = element;
	}
	T add(T a) { return element + a; }
};

int main() {
	AddElements<int> num(1);
	std::cout << num.add(1) << std::endl;

	AddElements<double> frac(50.5);
	std::cout << frac.add(5) << std::endl;

	AddElements<std::string> str("Hi");
	std::cout << str.add(" there") << std::endl;
}
