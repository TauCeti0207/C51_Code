#ifndef __KEY_H__
#define __KEY_H__

unsigned char Key();

/**
 * @brief  ��ȡ������������
 * @param  ��
 * @retval ���°����ļ��룬��Χ��0~4���ް�������ʱ����ֵΪ0
 */
unsigned char Key()
{
    unsigned char KeyNumber = 0;

    if (P3_1 == 0)
    {
        Delay(20);
        while (P3_1 == 0)
            ;
        Delay(20);
        KeyNumber = 1;
    }
    if (P3_0 == 0)
    {
        Delay(20);
        while (P3_0 == 0)
            ;
        Delay(20);
        KeyNumber = 2;
    }
    if (P3_2 == 0)
    {
        Delay(20);
        while (P3_2 == 0)
            ;
        Delay(20);
        KeyNumber = 3;
    }
    if (P3_3 == 0)
    {
        Delay(20);
        while (P3_3 == 0)
            ;
        Delay(20);
        KeyNumber = 4;
    }

    return KeyNumber;
}

#endif