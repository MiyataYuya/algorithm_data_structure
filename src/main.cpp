#include <iostream>

int main()
{
    /**
     * @brief
     *       2 a
     *     * c b
     *    -------
     *     e 3 d
     *     g f
     *    -------
     *     h 4 d
     */

    for (int a = 0; a < 10; a++)
    {
        for (int b = 4; b < 10; b++)
        {
            if (((((20 + a) * b) / 10) % 10 == 3) && (((20 + a) * b) / 100 != 0))
            {
                for (int c = 1; c < 10; c++)
                {
                    int f = (20 + a) * c % 10;
                    if ((((20 + a) * c) / 10 != 0) && ((20 + a) * c < 100) && (3 + f) % 10 == 4)
                    {
                        if ((20 + a) * (10 * c + b) < 1000)
                        {
                            std::cout << "a=" << a << ", b=" << b << ", c=" << c << "\n";
                        }
                    }
                }
            }
        }
    }

    /**
     * @brief
     *
     *
     */
    for (unsigned long X = 100000; X < 1000000; X++)
    {
        for (unsigned long Y = 1000; Y < 10000; Y++)
        {
            unsigned long six_six = X * (Y % 10) / 10000;
            if (six_six == 66)
            {
                unsigned long six = X * ((Y / 10) % 10) / 100000;
                if (six == 6)
                {
                    unsigned long sss = (X * ((Y / 100) % 10) / 100) % 1000;
                    if (sss == 666)
                    {
                        unsigned long s_s = (X * (Y / 1000));
                        unsigned long u = (s_s / 1000) % 10;
                        unsigned long l = (s_s % 1000) % 10;
                        if ((u == 6) && (l == 6))
                        {
                            unsigned long ans = X * Y;
                            if (((ans / 10000) % 100) == 66)
                            {
                                if (ans / 1000000000 != 0)
                                {
                                    std::cout << "X=" << X << ", Y=" << Y << ", XY=" << ans << "\n";
                                    std::cout << X * (Y % 10) << ", " << X * ((Y / 10) % 10) << ", " << X * ((Y / 100) % 10) << ", " << s_s << "\n";
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    return 0;
}