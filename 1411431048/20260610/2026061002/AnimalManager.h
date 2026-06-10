#pragma once
#include <string>

class AnimalManager {
public:

    AnimalManager(const std::string& fileName);


    void writeAnimalData(int count);


    void readAndDisplayData();

    void calculateAndAppendAverage();

private:
    std::string m_fileName;
};