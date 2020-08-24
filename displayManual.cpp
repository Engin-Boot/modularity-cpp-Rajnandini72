#include <iostream>
#include <assert.h>    

//using namespace TelCoColorCoder;

void  displayManual()
{
    using namespace TelCoColorCoder;
    int numberOfMinorColors;
    int numberOfMajorColors;
    int pairNumber;
    int totalPairs=numberOfMinorColors*numberOfMajorColors;
    std::cout << std::endl;;
    std::cout << "Color Code Manual"<< std::endl;;
    for(pairNumber=1;pairNumber<=totalPairs;pairNumber++)
    {
        TelCoColorCoder::ColorPair colorPair =
            TelCoColorCoder::GetColorFromPairNumber(pairNumber);
        std::cout << pairNumber<<"." << colorPair.ToString() << std::endl;
    }

}
