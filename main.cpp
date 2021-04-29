#include "ga_h.h"
#include <iostream>

using namespace std;
double objectf(vector<double> x, vector<double> extra)
{
	double temp[] = { 1.5,2.5,3.5,4.5,5.5 };
	double r = 0;
	for (int j = 0; j < x.size(); j++)
	{
		r += pow(x[j] - temp[j], 2);
	}
	return r;
}
vector<vector<double>> bounds = { {0,2},{1,3},{3,5},{4,7},{5,8} };

int main()
{
	ga ga1;
	ga1.Is_Show_Result = true;
	ga1.run(objectf, bounds);

}