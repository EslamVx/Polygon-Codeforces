#include "testlib.h"
using namespace std;

int main(int argc, char *argv[]) 
{
    registerGen(argc, argv, 1);

    int N = rnd.next(1, 100'000);
    cout << N << endl;
    return 0;
}