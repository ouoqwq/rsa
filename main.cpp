#include <iostream>
#include <ctime>
#include "rsa.h"

using std :: cout;
using std :: endl;

int main()
{
    clock_t st_time, ed_time;
    st_time = clock();
    cout << prime_create(512) << endl;
    ed_time = clock();
    cout << (double) (ed_time - st_time) / CLOCKS_PER_SEC << endl;
    return 0;
}