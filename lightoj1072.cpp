
#include<bits/stdc++.h>
#include<math.h>


using namespace std;
int main()
{

    int cases;
    scanf("%d", &cases);
    double pi = 2 * acos(0.0);
    for (int i = 1; i <= cases; i++)
    {
        double R;
        int n;
        scanf("%lf %d", &R, &n);
        double r = (R * sin(pi / n * 1.0)) / (1 + sin(pi / n * 1.0));
        printf("Case %d: %.10lf\n", i, r);
    }
    return 0;
}
