#include "rsa.h"
#include "BigInt/bigint.h"

#include <iostream>
#include <ctime>

using std :: cout;
using std :: endl;

int main()
{
    clock_t st_time, ed_time;
    st_time = clock();
    Bint tem("102483959786064941120011909566638047470105899233651834086177867850024802587397");
    //Bint a("15963913232160983449"), b("12874230322390908643");
    //cout << prime_create(256) << endl;
    cout << prime_judge(tem) << endl;
    ed_time = clock();
    cout << (double) (ed_time - st_time) / CLOCKS_PER_SEC << endl;
    return 0;
}