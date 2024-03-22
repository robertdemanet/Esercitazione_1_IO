#include <iostream>
#include <fstream>
#include <iomanip>


double map(double N)
{
    return (3*N-7)/4;
}

int main()
{
    std::string fileName = "data.csv";
    std::ifstream ifstr(fileName);
    std::ofstream outFile("result.csv");

    double val = 0;
    double sumVals = 0;
    unsigned int countVal = 0;

    outFile << "# N Mean" << std::endl;
    while(ifstr >> val)
    {
        double newVal = map(val);
        countVal++;
        sumVals = sumVals + newVal;
        double media = sumVals/countVal;
        outFile << countVal << " " << media << std::setprecision(16) << std::scientific <<std::endl;
    }


    ifstr.close();



    return 0;
}
