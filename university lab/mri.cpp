#include <iostream>

#include <fstream>

using namespace std;

int main() {

ofstream MyFile("filen.txt");

MyFile<< "File created";

MyFile.close();

}

