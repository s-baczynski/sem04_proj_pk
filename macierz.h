#pragma once
#include <vector>
#include <iostream>
#include "element.h"


class macierz 
{
private:
	element* firstElement_;
	int rowNumber_ = 0;
	int colNumber_ = 0;

public:
	macierz(double firstElVal);

	void addRow();
	void addRow(std::vector<double> const &newElVal);
	void addColumn();
	void addColumn(std::vector<double> const& newElVal);


	void deleteRow();
	void deleteCol();

	void writeOut();
	element* writeOutEl(int row, int col);

	
};

