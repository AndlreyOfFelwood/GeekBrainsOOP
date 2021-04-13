#include <iostream>
#include <cstdint>
#include <cmath>

using namespace std;

// 1. Создать класс Power, который содержит два вещественных числа. Этот класс должен иметь две переменные-члена для хранения этих вещественных чисел. Еще создать два метода: один с именем set, который позволит присваивать значения переменным, второй — calculate, который будет выводить результат возведения первого числа в степень второго числа. Задать значения этих двух чисел по умолчанию.
class Power
{
public:
	void set(int fnum, int snum);
	double calculate();

private:
	int _firstNum = 12, _secondNum = 3;

};

void Power::set(int fNum, int sNum)
{
	_firstNum = fNum;
	_secondNum = sNum;
}

double Power::calculate()
{
	return pow(_firstNum, _secondNum);
}


// 2. Написать класс с именем RGBA, который содержит 4 переменные-члена типа std::uint8_t: m_red, m_green, m_blue и m_alpha (#include cstdint для доступа к этому типу). Задать 0 в качестве значения по умолчанию для m_red, m_green, m_blue и 255 для m_alpha. Создать конструктор со списком инициализации членов, который позволит пользователю передавать значения для m_red, m_blue, m_green и m_alpha. Написать функцию print(), которая будет выводить значения переменных-членов.

class RGBA
{
public:
	RGBA(uint8_t red, uint8_t green, uint8_t blue, uint8_t alpha);
	void print();

private:
	uint8_t m_red = 0, 
			m_green = 0, 
			m_blue = 0, 
			m_alpha = 255;
};

RGBA::RGBA(uint8_t red, uint8_t green, uint8_t blue, uint8_t alpha)
{
	m_red = red;
	m_green = green;
	m_blue = blue;
	m_alpha = alpha;
}

void RGBA::print()
{
	cout << "Красный: " << (unsigned short)m_red << endl;
	cout << "Зеленый: " << (unsigned short)m_green << endl;
	cout << "Синий: " << (unsigned short)m_blue << endl;
	cout << "Прозрачность: " << (unsigned short)m_alpha << endl;
}


// 3. Написать класс, который реализует функциональность стека. Класс Stack должен иметь:
//●	private - массив целых чисел длиной 10;
//●	private целочисленное значение для отслеживания длины стека;
//●	public - метод с именем reset(), который будет сбрасывать длину и все значения элементов на 0;
//●	public - метод с именем push(), который будет добавлять значение в стек.push() должен возвращать значение false, если массив уже заполнен, и true в противном случае;
//●	public - метод с именем pop() для вытягивания и возврата значения из стека.Если в стеке нет значений, то должно выводиться предупреждение;
//●	public - метод с именем print(), который будет выводить все значения стека.

class Stack
{
public:
	void reset();
	bool push(int num);
	int pop();
	void print();

private:
	int _arr[10];
	size_t _size = 0;
};

void Stack::reset()
{
	for (size_t i = 0; i < 10; i++)
	{
		_arr[i] = 0;
	}
	_size = 0;
}

bool Stack::push(int num)
{
	if (_size < 9)
	{
		_arr[_size] = num;
		_size++;
	}

	if (_size >= 9)
	{
		cout << "Достигнут конец массива!\n";
		return false;
	}

	return true;
}

int Stack::pop()
{
	if (_size < 0)
	{
		cout << "Массив пуст!\n";
		return 0;
	}

	int tmpNum = _arr[_size-1];
	_arr[_size-1] = 0;
	_size--;

	return tmpNum;
}

void Stack::print()
{
	cout << "( ";
	for (size_t i = 0; i < 9; i++)
	{
		if (_arr[i] != 0)
			cout << _arr[i];

		if (_arr[i+1] == 0)
		{
			cout << " )\n";
			break;
		}
		else
			cout << ", ";
	}
	if (_arr[9] != 0)
		cout << _arr[9] << " )\n";
}


int main()
{
	setlocale(0, "");

	unsigned short taskNum;

	Power calc;
	int a = 2, b = 8;

	RGBA color(7, 245, 31, 1);

	Stack stack;

	do
	{
		cout << "Введите номер задания (1-3) или 0 для выхода из программы.\n";
		cin >> taskNum;

		switch (taskNum)
		{
		case 1:
			cout << "Результат возведения в степень значений по умолчанию (12^3)\n";
			cout << calc.calculate() << endl;
			calc.set(a, b);
			cout << "Результат возведения в степень измененныйх значений (" << a << "^" << b << ")\n";
			cout << calc.calculate() << endl;

			break;
		case 2:
			color.print();
			break;
		case 3:
			stack.reset();
			stack.print();

			stack.push(3);
			stack.push(7);
			stack.push(5);
			stack.print();

			stack.pop();
			stack.print();

			stack.pop();
			stack.pop();
			stack.print();

			break;
		default:
			break;
		}

	} while (taskNum != 0);

	

	return 0;
}