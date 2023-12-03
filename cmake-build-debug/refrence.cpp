int gcd(int a, int b) { return !b ? a : gcd(b, a % b); }
int lcm(int a, int b) { return a * (b / gcd(a, b)); }
int fixmod(int a) { return (a % mod + mod) % mod; }

// power of two
// is power of two ??
// الرقم الباور اوف تو التمثيل بتاعه بيكون فيه واحد واحد بس والباقي كله اصفار
// فاحنا مممكن مثلا نعد الوحايد ولو واحد بس يبقى تمام
// n & (n-1) => هتنفع برضو


// ---------------------------------------
// لو عايز اعرف اكبر باور اصغر مني او يساويني
// 1
cout << (1 << (31 - __builtin_clzll(122)));
// 2
cout << (1 << (__lg(155)));
// 3
int n=33;
int indx=0;
while(1<<indx < n)
    indx++;
//-----------------------------------------------------------
// لو عايز اطير اول واحد في الباينري
// n & n-1
// 1001000111000
// &
// 1001000110111
// 1001000110000
// --------------------------------------------------------------
//
// لو عايز قيمة اخر بت "اول بت من اليمين"
//  n&~(n-1)
// 1010011100 & 1010011011 => 0000000100


void printNumber(ll num)
{
    if (num <= 1)
    {
        cout << num;
        return;
    }
    printNumber(num / 2);
    cout << num % 2;
}
int getBit(ll num, int indx)
{
    return (num >> indx) & 1;
}
int setBit1(ll num, int indx)
{
    return num | (1 << indx);
}
int setBit0(ll num, int indx)
{
    return num & ~(1 << indx);
}
int flipBit(ll num, int indx)
{
    return num ^ (1 << indx);
}
int countBits1(ll num)
{
    int cnt = 0;
    while (num)
    {
        cnt++;
        num &= (num - 1);
    }
    return cnt;
}
int changefirst0(ll num)
{
    return num|(num + 1);
}
int changefirst1(ll num)
{
    return num & (num - 1);
}
int lastBitvalue(ll num)
{
    return num & ~(num - 1);
}
int changeAllto1(ll num)
{
    return num | (num - 1);
}
int changeAllto0(ll num)
{
    return num & (num + 1);
}
bool isPowerOfTwo(ll num)
{
    return (num & num - 1) == 0;
}








// is on
#define ison(x, idxbit) (1<<idxbit)&num
#define ison(x, idxbit) (num>>idxbit)&1
#define setbit1(x, idxbit) (x|(1<<idxbit));
#define setbit0(x, idxbit) (x&~(1<<idxbit));
#define flibbit(x, idxbit) (x^(1<<idxbit));
// n-1 -> بتشيل اول بت يقابلها ويقلب اللي قبلها كلهم اصفار
// 16 -> 10000 || 15 -> 0111 ||| 28 -> 11100 || 27 -> 11011
// n & n-1 -> بشيل اول بت منورة
// 28 & 27 -> 11100 & 11011 -> 11000
// n&~n-1 -> بجييب قيمة اخر بت
//                      ممكن استخدم الحاجات دي في اني اعد عدد البتس
//                                            how??
//count bits => __builtin_popcount()
int countbits(int mask) {
    int ret = 0;
    while (mask)
        mask &= mask - 1, ret++;
    return ret;
}

//int dx[] = {0, 0, 1, 1, 1, -1, -1, -1}, dy[] = {-1, 1, -1, 0, 1, -1, 0, 1};
int dx[] = {0, 0, 1, -1}, dy[] = {-1, 1, 0, 0};

int fpow(int base, int power) {
    if (!base)
        return 1;
    int ret = fpow(base, power >>1);
    return power & 1 ? base * ret * ret : ret * ret;
}
// ordered set
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/detail/standard_policies.hpp>
using namespace __gnu_pbds;

#define oset tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
cout << 10000 << " " << 4 << endl;
int n = 10000;
while (n--)
cout << 1 << " " << 1 << " " << 1 << " " << 1 << endl;
-1+sqrt(1+8*n)/2
(sqrt(1 + (8 * n)) - 1)/2
vector<int> factors(int n) {
    vector<int> ret;
    for (int i = 2; i * i <= n; ++i) {
        while (!(n % i))
            ret.push_back(i), n /= i;
    }
    if (n > 1)
        ret.push_back(n);
    return ret;
}map<int, int> getfactors(int n) {
    map<int, int> ret;
    for (int i = 2; i * i <= n; i++)
        while (!(n % i))
            ret[i]++, n /= i;
    if (n > 1)
        ret[n]++;
    return ret;
}
bool isprime(int n) {
    for (int i = 2; i * i <= n; ++i)
        if (!(n % i))
            return false;

    return true;
}