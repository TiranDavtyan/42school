
int main(void)
{
    char    a;
    int     b;
    char    *c;
    int     d;
    int     ct0;
    int     ct1;

    a = 'v';
    b = -23456;
    c = "abc";
    d = 5105;
    ct0 = ft_printf ("abc\n");
    ct1 = printf ("abc\n");
    printf ("0: %d\n1: %d\n", ct0, ct1);
    ct0 = ft_printf ("%%Test %c take %d print %s then %i hex %x heX %X next %p also %u\n", a, b, c, d, d, d, c, b);
    ct1 = printf ("%%Test %c take %d print %s then %i hex %x heX %X next %p also %u\n", a, b, c, d, d, d, c, b);
    printf ("0: %d\n1: %d\n", ct0, ct1);
    return (0);
}
