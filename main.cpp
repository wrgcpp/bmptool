#include <iostream>
#include <fstream>
#include "def.h"
#include "bmp.h"

using namespace std;


int main(int argc, char **argv)
{

    Bitmap bm("test.bmp");
    try{
        bm.read();
    }
    catch(std::runtime_error e)
    {
        cout << "FAIL" << endl;
        cout << e.what() << endl;
        return -1;
    }

    cout << "OK" << endl;
    bm.print();
    //bm.write("test2.bmp");

	return 0;
}
