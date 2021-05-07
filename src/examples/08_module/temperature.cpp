//function code
#include <iostream>
#include <fstream>
using std::cout

void write_to_file()
{
    std::ofstream out_file;
    out_file.open("name.dat");

    cout<<"Writting to file...\n";

    out_file<<"Joe\n";
    out_file<<"Mary\n";
    out_file<<"John\n";

    cout<<"Closing file...\n";

    out_file.close();

}


void read_from_file()
{
    std::ifstream in_file;
    in_file.open("name.dat");


    cout<<"";    
    
    if(in_file.open())
        while()


}
