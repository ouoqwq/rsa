#pragma once
#include "BigInt/bigint.h"

using std :: cout;
using std :: endl;

const Bint pri_num1(3);
const Bint pri_num2(65537);

Bint Exgcd(Bint a, Bint b, Bint &x, Bint &y); //拓展欧几里得

bool prime_judge(Bint A); //Miller-Rabin

Bint prime_create(int a); //质数生成

class RSA
{
private:
    Bint d; //exgcd
    Bint p, q; //prime
    Bint phi_n; //euler
public:
    Bint n; //p*q
    Bint e = pri_num2; //65537
    RSA(int a);
    Bint enc(string A); //加密
    Bint dec(string A); //解密
    Bint sign(string A); //签名
    Bint ver(string A); //验证
};