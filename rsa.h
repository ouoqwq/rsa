#pragma once
#include "BigInt/bigint.h"

using std :: cout;
using std :: endl;

Bint Exgcd(Bint a, Bint b, Bint &x, Bint &y); //拓展欧几里得

bool prime_judge(Bint A); //Miller-Rabin

Bint prime_create(int a); //质数生成