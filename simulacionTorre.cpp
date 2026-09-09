
#include <iostream>
class torre {
public:
	short int filas;
	short int columnas;
private:
	bool isBack;
	torre(short f, short c) {
		filas = f;
		columnas = c;
		isBack = false;

	}
};
int main()
{
    std::cout << "Hello World!\n";
}

