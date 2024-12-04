#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

struct head{
    uint32_t textString;
    uint8_t ofsetArray;
    uint8_t sizeArray;
    uint64_t LSN;
    uint16_t MFT;
    uint16_t countLinkFile;
    uint16_t ofsetAtributOne;
    uint16_t flags;
    uint32_t realSize;
    uint32_t dedicatedSize;
    uint64_t fileLink;
    uint32_t nextIdentifier;
    uint32_t fileNumber;
};
int main()
{
    vector<char> array1;
    ifstream file("D:\\Downloads\\File_record.dat", ios::binary);
    if(file.is_open())
    {
        cout << "open file" << endl;
    }


    return 0;
}
