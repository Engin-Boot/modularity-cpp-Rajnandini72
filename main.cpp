#include <iostream>
#include<string>
#include <assert.h>    
#include "namespace.h"

void testNumberToPair(int pairNumber,
    TelCoColorCoder::MajorColor expectedMajor,
    TelCoColorCoder::MinorColor expectedMinor)
{
    using namespace TelCoColorCoder;
    TelCoColorCoder::ColorPair colorPair =
        TelCoColorCoder::GetColorFromPairNumber(pairNumber);
    std::cout << "Got pair " << colorPair.ToString() << std::endl;
    assert(colorPair.getMajor() == expectedMajor);
    assert(colorPair.getMinor() == expectedMinor);
}

void testPairToNumber(
    TelCoColorCoder::MajorColor major,
    TelCoColorCoder::MinorColor minor,
    int expectedPairNumber)
{
    using namespace TelCoColorCoder;
    int pairNumber = TelCoColorCoder::GetPairNumberFromColor(major, minor);
    std::cout << "Got pair number " << pairNumber << std::endl;
    assert(pairNumber == expectedPairNumber);
}
std::string ToString()
{
    using namespace TelCoColorCoder;
    int pairNumber;
    int totalPairs = numberOfMinorColors * numberOfMajorColors;
    std::string Manual;
    std::string subString;
    std::cout << std::endl;;
    std::cout << "Color Code Manual" << std::endl;;
    for (pairNumber = 1; pairNumber <= totalPairs; pairNumber++)
    {
        TelCoColorCoder::ColorPair colorPair =
            TelCoColorCoder::GetColorFromPairNumber(pairNumber);
        subString = std::to_string(pairNumber)+ "."+colorPair.ToString()+"\n";
        Manual += subString;
    }
    return Manual;
}

int main() {

    testNumberToPair(4, TelCoColorCoder::WHITE, TelCoColorCoder::BROWN);
    testNumberToPair(5, TelCoColorCoder::WHITE, TelCoColorCoder::SLATE);

    testPairToNumber(TelCoColorCoder::BLACK, TelCoColorCoder::ORANGE, 12);
    testPairToNumber(TelCoColorCoder::VIOLET, TelCoColorCoder::SLATE, 25);

    std::string manual=ToString();
    std::cout << manual << std::endl;

    return 0;
}
