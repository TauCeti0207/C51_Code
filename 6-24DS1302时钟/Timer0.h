#ifndef __TIMER0_H__
#define __TIMER0_H__

void Timer0Init(void);

/**
 * @brief  定时器0初始化，1毫秒@11.0592MHz
 * @param  无
 * @retval 无
 */
void Timer0Init(void)
{
    TMOD &= 0xF0; //设置定时器模式
    TMOD |= 0x01; //设置定时器模式
    TL0 = 0x66;   //设置定时初值
    TH0 = 0xFC;   //设置定时初值
    TF0 = 0;      //清除TF0标志
    TR0 = 1;      //定时器0开始计时
    ET0 = 1;
    EA = 1;       //总开关
    PT0 = 0;      //低优先级
}

/*定时器中断函数模板
void Timer0_Routine() interrupt 1
{
    static unsigned int T0Count;
    TL0 = 0x66;		//设置定时初值
    TH0 = 0xFC;		//设置定时初值
    T0Count++;
    if(T0Count>=1000)
    {
        T0Count=0;

    }
}
*/

#endif
