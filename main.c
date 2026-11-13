#include <stdio.h>

int main(void)
{
    double ylimit;
    double g = 3.71; // 火星の重力加速度
    double y = 0.0;
    double v = 0.0;
    double t;

    // double型として入力を受け取る
    scanf("%lf", &ylimit);

    // 0未満（負）の場合はNGを出力して終了
    if (ylimit < 0.0)
    {
        printf("NG");
        return 0;
    }

    // 0.0秒から0.1秒おきにシミュレーションを行う
    for (t = 0.0; y < ylimit; t += 0.1)
    {
        v = g * t;
        y = g * t * t / 2.0;
    }

    // 小数点以下3桁で速度を表示する
    printf("%.3f", v);
    return 0;
}
