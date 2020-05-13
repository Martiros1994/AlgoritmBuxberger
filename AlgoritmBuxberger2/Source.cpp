#include <iostream>
#include <string>
#include <vector>
#include <stdio.h> 
using namespace std;

int max_Array(int arr[], int n) {

	int temp = arr[0];
	for (int i = 1; i < n; ++i)
	{
		if (arr[i] > temp) {
			temp = arr[i];
		}

	}
	return temp;
}


class Bazmandam
{
public:

	Bazmandam();
	Bazmandam(const Bazmandam&);
	Bazmandam(int);
	~Bazmandam();

private:
	int size;
	int* arrDegreeX;
	int* arrDegreeY;
	double* arrC;

public:

	void printBazmandam(string Name) {
		std::cout << Name;
		if (arrC[0] != 0) {
			if (arrDegreeX[0] == 0 && arrDegreeY[0] == 0) {
				std::cout << arrC[0];
			}
			else {
				if (arrDegreeX[0] == 0 && arrDegreeY[0] != 1) {
					if (arrC[0] == -1)
					{
						std::cout << "-y^" << arrDegreeY[0];
					}
					else if (arrC[0] == 1)
					{
						std::cout << "y^" << arrDegreeY[0];
					}
					else
					{
						std::cout << arrC[0] << "y^" << arrDegreeY[0];
					}

				}
				else {
					if (arrDegreeX[0] == 0 && arrDegreeY[0] == 1)
					{
						if (arrC[0] == -1)
						{
							std::cout << "-y";
						}
						else if (arrC[0] == 1)
						{
							std::cout << "y";
						}
						else
						{
							std::cout << arrC[0] << "y";
						}

					}
					else {

						if (arrDegreeX[0] != 1 && arrDegreeY[0] == 0) {

							if (arrC[0] == -1)
							{
								std::cout << "-x^" << arrDegreeX[0];
							}
							else if (arrC[0] == 1)
							{
								std::cout << "x^" << arrDegreeX[0];
							}
							else
							{
								std::cout << arrC[0] << "x^" << arrDegreeX[0];
							}


						}
						else if (arrDegreeX[0] == 1 && arrDegreeY[0] == 0)
						{
							if (arrC[0] == -1)
							{
								std::cout << "-x";
							}
							else if (arrC[0] == 1)
							{
								std::cout << "x";
							}
							else
							{
								std::cout << arrC[0] << "x";
							}


						}

						else if (arrDegreeX[0] == 1 && arrDegreeY[0] == 1)
						{
							if (arrC[0] == -1)
							{
								std::cout << "-xy";
							}
							else if (arrC[0] == 1)
							{
								std::cout << "xy";
							}
							else
							{
								std::cout << arrC[0] << "xy";
							}


						}

						else if (arrDegreeX[0] == 1 && arrDegreeY[0] != 1)
						{
							if (arrC[0] == -1)
							{
								std::cout << "-xy^" << arrDegreeY[0];
							}
							else if (arrC[0] == 1)
							{
								std::cout << "xy^" << arrDegreeY[0];
							}
							else
							{
								std::cout << arrC[0] << "xy^" << arrDegreeY[0];
							}

						}
						else if (arrDegreeX[0] != 1 && arrDegreeY[0] == 1)
						{
							if (arrC[0] == -1)
							{
								std::cout << "-x^" << arrDegreeX[0] << "y";
							}
							else if (arrC[0] == 1)
							{
								std::cout << "x^" << arrDegreeX[0] << "y";
							}
							else
							{
								std::cout << arrC[0] << "x^" << arrDegreeX[0] << "y";
							}

						}

						else
						{
							if (arrC[0] == -1)
							{
								std::cout << "-x^" << arrDegreeX[0] << "y^" << arrDegreeY[0];
							}
							else if (arrC[0] == 1)
							{
								std::cout << "x^" << arrDegreeX[0] << "y^" << arrDegreeY[0];
							}
							else
							{
								std::cout << arrC[0] << "x^" << arrDegreeX[0] << "y^" << arrDegreeY[0];
							}

						}

					}

				}
			}
		}

		for (int i = 1; i < size; ++i) {
			if (arrC[i] < 0) {
				if (arrDegreeX[i] == 0 && arrDegreeY[i] == 0) {
					std::cout << arrC[i];
				}
				else {
					if (arrDegreeX[i] != 1 && arrDegreeY[i] == 0) {
						if (arrC[i] != -1) {
							std::cout << arrC[i] << "x^" << arrDegreeX[i];
						}
						else
						{
							std::cout << "-x^" << arrDegreeX[i];
						}

					}
					else {
						if (arrDegreeX[i] == 1 && arrDegreeY[i] == 0) {

							if (arrC[i] != -1) {
								std::cout << arrC[i] << "x";
							}
							else
							{
								std::cout << "-x";
							}
						}
						else
						{
							if (arrDegreeX[i] == 0 && arrDegreeY[i] != 1)
							{
								if (arrC[i] != -1) {
									std::cout << arrC[i] << "y^" << arrDegreeY[i];
								}
								else
								{
									std::cout << "-y^" << arrDegreeY[i];
								}
							}
							//std::cout << "-X";
							else if (arrDegreeX[i] == 0 && arrDegreeY[i] == 1)
							{
								if (arrC[i] != -1) {
									std::cout << arrC[i] << "y";
								}
								else
								{
									std::cout << "-y";
								}
							}

							else if (arrDegreeX[i] == 1 && arrDegreeY[i] == 1)
							{
								if (arrC[i] != -1) {
									std::cout << arrC[i] << "xy";
								}
								else
								{
									std::cout << "-xy";
								}

							}

							else if (arrDegreeX[i] == 1 && arrDegreeY[i] != 1)
							{
								if (arrC[i] != -1) {
									std::cout << arrC[i] << "xy^" << arrDegreeY[i];
								}
								else
								{
									std::cout << "-xy^" << arrDegreeY[i];
								}
							}

							else if (arrDegreeX[i] != 1 && arrDegreeY[i] == 1)
							{
								if (arrC[i] != -1) {
									std::cout << arrC[i] << "x^" << arrDegreeX[i] << "y";
								}
								else
								{
									std::cout << "-x^" << arrDegreeX[i] << "y";
								}
							}
							else
							{
								if (arrC[i] != -1) {
									std::cout << arrC[i] << "x^" << arrDegreeX[i] << "y^" << arrDegreeY[i];
								}
								else
								{
									std::cout << "-x^" << arrDegreeX[i] << "y^" << arrDegreeY[i];
								}
							}
						}

					}
				}
			}
			else if (arrC[i] > 0) {
				if (arrDegreeX[i] == 0 && arrDegreeY[i] == 0) {
					//if (arrC[0] == 0) {
						//std::cout<< arrC[i];
					//}
					//else
					//{
					std::cout << "+" << arrC[i];
					//}
				}
				else {
					if (arrDegreeX[i] != 1 && arrDegreeY[i] == 0) {
						if (arrC[i] == 1) {
							std::cout << "+x^" << arrDegreeX[i];
						}
						else
						{
							std::cout << "+" << arrC[i] << "x^" << arrDegreeX[i];
						}
					}
					else {
						if (arrDegreeX[i] == 1 && arrDegreeY[i] == 0) {
							if (arrC[i] == 1) {
								std::cout << "+x";
							}
							else
							{
								std::cout << "+" << arrC[i] << "x";
							}
						}
						else
							if (arrDegreeX[i] == 0 && arrDegreeY[i] != 1)
							{
								if (arrC[i] == 1) {
									std::cout << "+y^" << arrDegreeY[i];
								}
								else
								{
									std::cout << "+" << arrC[i] << "y^" << arrDegreeY[i];
								}
							}
							else if (arrDegreeX[i] == 0 && arrDegreeY[i] == 1)

							{

								if (arrC[i] == 1) {
									std::cout << "+y";
								}
								else
								{
									std::cout << "+" << arrC[i] << "y";
								}

							}

							else if (arrDegreeX[i] == 1 && arrDegreeY[i] == 1) {

								if (arrC[i] == 1) {
									std::cout << "+xy";
								}
								else
								{
									std::cout << "+" << arrC[i] << "xy";
								}

							}

							else if (arrDegreeX[i] == 1 && arrDegreeY[i] != 1) {

								if (arrC[i] == 1) {
									std::cout << "+xy^" << arrDegreeY[i];
								}
								else
								{
									std::cout << "+" << arrC[i] << "xy^" << arrDegreeY[i];
								}
							}
							else if (arrDegreeX[i] != 1 && arrDegreeY[i] == 1) {

								if (arrC[i] == 1) {
									std::cout << "+x^" << arrDegreeX[i] << "y";
								}
								else
								{
									std::cout << "+" << arrC[i] << "x^" << arrDegreeX[i] << "y";
								}
							}
							else
							{
								if (arrC[i] == 1) {
									std::cout << "+x^" << arrDegreeX[i] << "y^" << arrDegreeY[i];;
								}
								else
								{
									std::cout << "+" << arrC[i] << "x^" << arrDegreeX[i] << "y^" << arrDegreeY[i];;
								}
							}
					}
				}
			}
		}
		std::cout << std::endl;
	}

	void setParametrs(int* _arrDegreeX, int* _arrDegreeY, double* _arrCoeff, int size) {

		//cout << "Enter Degree X" << endl;
		for (int i = 0; i < size; ++i)
		{
			arrDegreeX[i] = _arrDegreeX[i];
		}

		//cout << "Enter Degree Y" << endl;
		for (int i = 0; i < size; ++i)
		{
			arrDegreeY[i] = _arrDegreeY[i];
		}

		//cout << "Enter Coefficient" << endl;
		for (int j = 0; j < size; ++j)
		{
			arrC[j] = _arrCoeff[j];
		}

	}

	void setOneParametr(int index, int x, int y, double c) {

		size = index + 1;

		arrC[index] = c;
		arrDegreeX[index] = x;
		arrDegreeY[index] = y;


	}

	void setParametrsIndex(int index, Bazmandam obj1, Bazmandam obj2, int k = 0) {

		int newindex = index;
		int zn = 1;
		if (k != 0)
		{
			newindex = k;
			zn = -1;
		}

		arrDegreeX[newindex] = obj1.arrDegreeX[index] + obj2.arrDegreeX[0];
		arrDegreeY[newindex] = obj1.arrDegreeY[index] + obj2.arrDegreeY[0];
		arrC[newindex] = zn * obj1.arrC[index] * obj2.arrC[0];
	}

	void sortGr_LexBazmandam() {

		int max, tempX, tempY;
		double tempC;
		for (int i = 0; i < size; ++i)
		{
			max = i;

			for (int j = i + 1; j < size; ++j)
			{

				if (arrDegreeX[j] + arrDegreeY[j] > arrDegreeX[max] + arrDegreeY[max])
				{
					max = j;
					tempX = arrDegreeX[i];
					arrDegreeX[i] = arrDegreeX[max];
					arrDegreeX[max] = tempX;

					tempY = arrDegreeY[i];
					arrDegreeY[i] = arrDegreeY[max];
					arrDegreeY[max] = tempY;

					tempC = arrC[i];
					arrC[i] = arrC[max];
					arrC[max] = tempC;
				}
				else if (arrDegreeX[j] + arrDegreeY[j] == arrDegreeX[max] + arrDegreeY[max])
				{

					if (arrDegreeX[j] > arrDegreeX[max])
					{
						max = j;
						tempX = arrDegreeX[i];
						arrDegreeX[i] = arrDegreeX[max];
						arrDegreeX[max] = tempX;

						tempY = arrDegreeY[i];
						arrDegreeY[i] = arrDegreeY[max];
						arrDegreeY[max] = tempY;

						tempC = arrC[i];
						arrC[i] = arrC[max];
						arrC[max] = tempC;
					}
					else if (arrDegreeX[j] == arrDegreeX[max])
					{

						if (arrDegreeY[j] > arrDegreeY[max])
						{
							max = j;
							tempX = arrDegreeX[i];
							arrDegreeX[i] = arrDegreeX[max];
							arrDegreeX[max] = tempX;

							tempY = arrDegreeY[i];
							arrDegreeY[i] = arrDegreeY[max];
							arrDegreeY[max] = tempY;

							tempC = arrC[i];
							arrC[i] = arrC[max];
							arrC[max] = tempC;
						}
					}

				}

			}

		}
	}

	int sizeBazmandam() {

		return size;
	}
	
	void FG_GAMA(Bazmandam _obj1, Bazmandam _obj2) {

		int p1, p2;
		int q1, q2;

		p1 = max_Array(_obj1.arrDegreeX, _obj1.size);
		p2 = max_Array(_obj2.arrDegreeX, _obj2.size);

		if (p1 > p2)
		{
			arrDegreeX[0] = p1;
		}
		else
		{
			arrDegreeX[0] = p2;
		}


		q1 = max_Array(_obj1.arrDegreeY, _obj1.size);
		q2 = max_Array(_obj2.arrDegreeY, _obj2.size);

		if (q1 > q2)
		{
			arrDegreeY[0] = q1;
		}
		else
		{
			arrDegreeY[0] = q2;
		}

		arrC[0] = 1;

	}

	void FG_GAMA_Lt(Bazmandam _obj1) {

		arrDegreeX[0] = arrDegreeX[0] - _obj1.arrDegreeX[0];
		arrDegreeY[0] = arrDegreeY[0] - _obj1.arrDegreeY[0];
		arrC[0] = arrC[0] / _obj1.arrC[0];
	}

	void UpdeteBazmandam() {

		int count = 0;
		int tempsize = size;
		int* temparrDegreeX = arrDegreeX;
		int* temparrDegreeY = arrDegreeY;
		double* temparrC = arrC;

		for (int i = 0; i < size; ++i)
		{

			if (arrC[i] == 0)
			{
				continue;
			}

			for (int j = i + 1; j < size; ++j)
			{
				if (arrC[j] == 0)
				{
					continue;
				}

				if (arrDegreeX[i] == arrDegreeX[j] && arrDegreeY[i] == arrDegreeY[j] && arrC[i] + arrC[j] == 0)
				{
					arrC[i] = 0;
					arrC[j] = 0;
					count = count + 2;
				}
				else if (arrDegreeX[i] == arrDegreeX[j] && arrDegreeY[i] == arrDegreeY[j] && arrC[i] + arrC[j] != 0)
				{

					arrC[i] = arrC[i] + arrC[j];
					arrC[j] = 0;
					count = count + 1;
				}


			}


		}

		size = size - count;
		int count1 = 0;

		for (int p = 0; p < tempsize; ++p)
		{
			if (temparrC[p] != 0)
			{
				arrC[count1] = temparrC[p];
				arrDegreeX[count1] = temparrDegreeX[p];
				arrDegreeY[count1] = temparrDegreeY[p];
				count1 = count1 + 1;
			}

		}




	}


	int* getarrX() {

		return arrDegreeX;
	}

	int* getarrY() {

		return arrDegreeY;
	}

	double* getarrC() {

		return arrC;
	}

	void newElement(Bazmandam obj) {

		int k = obj.size;
		size = size + k;

		for (int i = 0; i < k; ++i)
		{
			arrC[size - k + i] = (-1)*(arrC[0] / obj.arrC[0])*obj.arrC[i];
			arrDegreeX[size - k + i] = (arrDegreeX[0] - obj.arrDegreeX[0]) + obj.arrDegreeX[i];
			arrDegreeY[size - k + i] = (arrDegreeY[0] - obj.arrDegreeY[0]) + obj.arrDegreeY[i];
		}

	}

	void newElementAfterDelete() {
		int tempsize = size;
		int* temparrDegreeX = arrDegreeX;
		int* temparrDegreeY = arrDegreeY;
		double* temparrC = arrC;

		size = size - 1;

		for (int i = 0; i < size; ++i)
		{
			arrC[i] = temparrC[i + 1];
			arrDegreeX[i] = temparrDegreeX[i + 1];
			arrDegreeY[i] = temparrDegreeY[i + 1];

		}

	}


};

Bazmandam::Bazmandam()
{
	size = 1;
	arrDegreeX = new int[1];
	arrDegreeY = new int[1];
	arrC = new double[1];
}

Bazmandam::~Bazmandam()
{
	
	//cout << "destruktor" << endl;
}

Bazmandam::Bazmandam(const Bazmandam& obj) {

	size = obj.size;
	arrDegreeX = obj.arrDegreeX;
	arrDegreeY = obj.arrDegreeY;
	arrC = obj.arrC;

}

Bazmandam::Bazmandam(int _size) {
	size = _size;
	arrDegreeX = new int[_size];
	arrDegreeY = new int[_size];
	arrC = new double[_size];
}

Bazmandam S_FG(Bazmandam obj1, Bazmandam obj2) {


	Bazmandam fg_obj1(1), fg_obj2(1);

	int sizeBazmandam1 = obj1.sizeBazmandam();
	int sizeBazmandam2 = obj2.sizeBazmandam();

	Bazmandam finalyobj(sizeBazmandam1 + sizeBazmandam2);


	fg_obj1.FG_GAMA(obj1, obj2);
	fg_obj1.FG_GAMA_Lt(obj1);

	fg_obj2.FG_GAMA(obj1, obj2);
	fg_obj2.FG_GAMA_Lt(obj2);

	for (int i = 0; i < sizeBazmandam1; ++i)
	{
		finalyobj.setParametrsIndex(i, obj1, fg_obj1, 0);
	}

	for (int i = 0; i < sizeBazmandam2; ++i)
	{
		finalyobj.setParametrsIndex(i, obj2, fg_obj2, sizeBazmandam1);
		sizeBazmandam1 = sizeBazmandam1 + 1;
	}

	return finalyobj;
}



int main() {

	const int size1 = 3;
	Bazmandam obj1(size1);
	double arr[size1] = { 1, 3 , 2 };
	int arrX[size1] = { 1 , 0 , 1 };
	int arrY[size1] = { 2 , 2 , 0 };
	obj1.setParametrs(arrX, arrY, arr, size1);
	obj1.printBazmandam("F(X,Y)=");
	obj1.sortGr_LexBazmandam();
	obj1.printBazmandam("grlex F(X,Y)= ");

	cout << endl;

	const int size2 = 2;
	Bazmandam obj2(size2);
	double arr2[size2] = { 1, 3 };
	int arr2X[size2] = { 2, 1 };
	int arr2Y[size2] = { 1 , 1 };
	obj2.setParametrs(arr2X, arr2Y, arr2, size2);
	obj2.printBazmandam("G(X,Y)=");
	obj2.sortGr_LexBazmandam();
	obj2.printBazmandam("grlex G(X,Y)=");
	cout << endl;

	/*const int size1 = 2;
	Bazmandam obj1(size1);
	double arr[size1] = { 1, -1 };
	int arrX[size1] = { 2 ,0 };
	int arrY[size1] = { 1 , 0};
	obj1.setParametrs(arrX, arrY, arr, size1);
	obj1.printBazmandam("F(X,Y)=");
	obj1.sortGr_LexBazmandam();
	obj1.printBazmandam("grlex F(X,Y)=");

	cout << endl;

	const int size2 = 2;
	Bazmandam obj2(size2);
	double arr2[size2] =  { 1,-1 };
	int arr2X[size2] = { 1,1};
	int arr2Y[size2] = { 2,0 };
	obj2.setParametrs(arr2X, arr2Y, arr2, size2);
	obj2.printBazmandam("G(X,Y)=");
	obj2.sortGr_LexBazmandam();
	obj2.printBazmandam("grlex G(X, Y) = ");*/




	std::vector<Bazmandam> _tempv;
	_tempv.reserve(1000);
	_tempv.push_back(obj1);
	_tempv.push_back(obj2);
	
	//std::vector<Bazmandam> v;
	//v.reserve(100);
	

//----Head Algoritm
	int vj = 0;
	int vt = 0;
	int sizeS_FG = 0;

	int count = 0;
	int count1 = 0;

	
	for (int j = 0; j < _tempv.size(); ++j)
	{

		for (int t = j + 1; t < _tempv.size(); ++t)
		{
			vj = _tempv[j].sizeBazmandam();
			vt = _tempv[t].sizeBazmandam();

			
			Bazmandam _tempBazmandam(vj + vt);

			_tempBazmandam = S_FG(_tempv[j], _tempv[t]);
			_tempBazmandam.UpdeteBazmandam();
			_tempBazmandam.sortGr_LexBazmandam();
			_tempBazmandam.printBazmandam("S (F , G ) = ");
			sizeS_FG = _tempBazmandam.sizeBazmandam();

			if (sizeS_FG != 0)
			{
				//---- Divide S_FG in Group G
				Bazmandam objremainder(sizeS_FG);
				Bazmandam *ptrobj;
				ptrobj = &objremainder;
				//Bazmandam tempBazmandam(_tempBazmandam);
				Bazmandam *ptr;
				ptr = &_tempBazmandam;
				
				for (int n = 0; n < sizeS_FG; ++n)
				{
					ptrobj->setOneParametr(n, 0, 0, 0);
				}

				while (ptr->sizeBazmandam() != 0)
				{


					for (int i = 0; i < _tempv.size(); ++i)
					{

						if (ptr->getarrX()[0] >= _tempv[i].getarrX()[0] && ptr->getarrY()[0] >= _tempv[i].getarrY()[0])
						{

							ptr->newElement(_tempv[i]);
							ptr->UpdeteBazmandam();
							ptr->sortGr_LexBazmandam();
							break;
						}
						else
						{
							count = count + 1;
						}


					}

					if (count == _tempv.size())
					{
						ptrobj->setOneParametr(count1, ptr->getarrX()[0], ptr->getarrY()[0], ptr->getarrC()[0]);
						ptr->newElementAfterDelete();
						count1 = count1 + 1;
					}

					count = 0;

				}

				count = 0;
				count1 = 0;

				if (ptrobj->sizeBazmandam() != 0 && ptrobj->getarrC()[0] != 0)
				{
					//cout << "j = " << std::to_string(j) << "  t = " << std::to_string(t) << endl;
					_tempv.push_back(objremainder);
					ptrobj->printBazmandam("remainder = ");
					cout << endl;
				}
				else
				{
					cout << "remainder = 0" << endl;
				}
				//------
//-----Head Algoritm
				vj = 0;
				vt = 0;
			}

    	}
	}
	
	
	
	cout << endl;
	cout << "Grobner bases " << endl;
	for (int i = 0; i < _tempv.size(); ++i)
	{
		_tempv[i].printBazmandam("f" + std::to_string(i) + "(x , y)=");

	}
	cout << endl;
	
	system("pause");
	return 0;

}