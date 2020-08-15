#include <math.h>
#include <stdbool.h>
#include <stdio.h>

//定义
struct rational
{
    int a, b;
};

//生成
struct rational make_rational(int a, int b)
{
    return (struct rational){a, b};
}

//表示
int a_part(struct rational z)
{
    return z.a;
}

int b_part(struct rational z)
{
    return z.b;
}

//运算
int gcd(int a, int b)
{
    if(b == 0)
        return a;
    else
        return gcd(b, a%b);
}

int lcm(int a, int b)
{
    if(a * b == 0)
        return 0;
    return (a*b)/gcd(a,b);
}

struct rational yue(struct rational z)//约分
{
    if(a_part(z)==b_part(z))
        return (struct rational){1, 1};
    else if(gcd(a_part(z),b_part(z))!=1)
        return (struct rational){a_part(z) / gcd(a_part(z), b_part(z)), b_part(z) / gcd(a_part(z), b_part(z))};
    else
        return z;
}

_Bool rational_y(struct rational z1,struct rational z2)
{
    if(b_part(z1)==b_part(z2))
        return true;
    else
        return false;
}



struct rational add_rational(struct rational z1, struct rational z2)
{
    if(rational_y(z1,z2))
        return (struct rational){a_part(z1) + a_part(z2), b_part(z1) + b_part(z2)};
    int b, a1, a2;
    b = lcm(b_part(z1), b_part(z2));
    a1 = a_part(z1) * (b_part(z1) / b);
    a2 = a_part(z2) * (b_part(z2) / b);
    return yue(make_rational(a1 + a2, b));
}

struct rational sub_rational(struct rational z1, struct rational z2)
{
    if(rational_y(z1,z2))
        return (struct rational){a_part(z1) - a_part(z2), b_part(z1) + b_part(z2)};
    int b, a1, a2;
    b = lcm(b_part(z1), b_part(z2));
    a1 = a_part(z1) * (b_part(z1) / b);
    a2 = a_part(z2) * (b_part(z2) / b);
    return yue(make_rational(a1 - a2, b));
}

void print_rational(struct rational z)
{
    if(a_part(z)==0||b_part(z)==0)  printf("%d\n", 0);
    else printf("%d/%d\n", a_part(z),b_part(z));
}


int main(void)
{
    struct rational a = make_rational(1, 8);  /* a=1/8 */
    struct rational b = make_rational(-1, 8); /* b=-1/8 */
    print_rational(add_rational(a, b));
    print_rational(sub_rational(a, b));
//    print_rational(mul_rational(a, b));
//    print_rational(div_rational(a, b));

    return 0;
}