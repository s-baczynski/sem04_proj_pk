#define _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURITYCRITICAL_ATTRIBUTE
#include <iostream>
#include "macierz.h"


int main()
{
    std::cout << "Hello World!\n";

    macierz m = macierz(10.8);
    m.addColumn();
    m.addColumn({34});
    m.addColumn({65});

    std::vector<double> row01{ 34.9, 12, 43.45, 98.99 };
    m.addRow(row01);
    m.addRow({ 30.9, 13, 52.45, 11.99 });
    m.addRow();
    m.addRow();

    m.writeOut();
    std::cout << "\n";

    m.deleteRow();
	m.deleteRow();
    m.deleteCol();
    m.deleteCol();

    m.writeOut();
    std::cout << "\n";

    m.addColumn();
    m.addRow();


    m.writeOut();

    //element* e = m.writeOutEl(3, 4);
    //std::cout << "\n element:"  << e->getVal();

}
