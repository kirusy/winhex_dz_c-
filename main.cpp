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
    ifstream file("D:\\Downloads\\File_record.dat", ios::binary);
    if(file.is_open())
    {
        cout << "open file" << endl;

        file.seekg(0, ios::end);
        int sizePoz = file.tellg();
        vector<char> array1(sizePoz, 0);
        file.seekg(0, ios::beg);
        file.read(array1.data(), sizePoz);
        head*p = reinterpret_cast<head*> (&array1[0]);
        cout << p -> textString << endl;
        cout << p -> ofsetAtributOne << endl;
        cout << p -> fileNumber << endl;

    }


    return 0;
}
