#include "testlib.h"

using namespace std;

int main(int argc, char* argv[]) 
{
    registerValidation(argc, argv);

    
    int x = inf.readInt(1, 100'000, "x");
    inf.readEoln();

    ensuref(x >= 1 && x <= 100000, "number of elements must be between 1 and 100000");
    
    inf.readEof();
    return 0;
}
