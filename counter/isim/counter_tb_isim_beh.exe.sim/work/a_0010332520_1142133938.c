/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x1cce1bb2 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "D:/_prj/dns-packet-filter/counter/counter.vhd";
extern char *IEEE_P_3620187407;

char *ieee_p_3620187407_sub_674691591_3965413181(char *, char *, char *, char *, unsigned char );
char *ieee_p_3620187407_sub_767740470_3965413181(char *, char *, char *, char *, char *, char *);


static void work_a_0010332520_1142133938_p_0(char *t0)
{
    char t5[16];
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned char t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned char t19;
    unsigned char t20;
    unsigned char t21;
    unsigned char t22;
    unsigned char t23;
    unsigned char t24;
    unsigned char t25;
    char *t26;

LAB0:    xsi_set_current_line(46, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t4 = *((unsigned char *)t2);
    t13 = (t4 == (unsigned char)3);
    if (t13 == 1)
        goto LAB9;

LAB10:    t3 = (unsigned char)0;

LAB11:    if (t3 != 0)
        goto LAB7;

LAB8:
LAB3:    t1 = (t0 + 3680);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(47, ng0);
    t1 = (t0 + 1832U);
    t6 = *((char **)t1);
    t1 = (t0 + 5700U);
    t7 = (t0 + 1832U);
    t8 = *((char **)t7);
    t7 = (t0 + 5700U);
    t9 = ieee_p_3620187407_sub_767740470_3965413181(IEEE_P_3620187407, t5, t6, t1, t8, t7);
    t10 = (t5 + 12U);
    t11 = *((unsigned int *)t10);
    t12 = (1U * t11);
    t13 = (8U != t12);
    if (t13 == 1)
        goto LAB5;

LAB6:    t14 = (t0 + 3776);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    memcpy(t18, t9, 8U);
    xsi_driver_first_trans_fast(t14);
    goto LAB3;

LAB5:    xsi_size_not_matching(8U, t12, 0);
    goto LAB6;

LAB7:    xsi_set_current_line(49, ng0);
    t6 = (t0 + 1512U);
    t7 = *((char **)t6);
    t21 = *((unsigned char *)t7);
    t22 = (t21 == (unsigned char)3);
    if (t22 == 1)
        goto LAB15;

LAB16:    t6 = (t0 + 1352U);
    t8 = *((char **)t6);
    t23 = *((unsigned char *)t8);
    t24 = (t23 == (unsigned char)3);
    t20 = t24;

LAB17:    if (t20 != 0)
        goto LAB12;

LAB14:
LAB13:    goto LAB3;

LAB9:    t1 = (t0 + 992U);
    t19 = xsi_signal_has_event(t1);
    t3 = t19;
    goto LAB11;

LAB12:    xsi_set_current_line(50, ng0);
    t6 = (t0 + 1832U);
    t9 = *((char **)t6);
    t6 = (t0 + 5700U);
    t10 = ieee_p_3620187407_sub_674691591_3965413181(IEEE_P_3620187407, t5, t9, t6, (unsigned char)3);
    t14 = (t5 + 12U);
    t11 = *((unsigned int *)t14);
    t12 = (1U * t11);
    t25 = (8U != t12);
    if (t25 == 1)
        goto LAB18;

LAB19:    t15 = (t0 + 3776);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    t18 = (t17 + 56U);
    t26 = *((char **)t18);
    memcpy(t26, t10, 8U);
    xsi_driver_first_trans_fast(t15);
    goto LAB13;

LAB15:    t20 = (unsigned char)1;
    goto LAB17;

LAB18:    xsi_size_not_matching(8U, t12, 0);
    goto LAB19;

}

static void work_a_0010332520_1142133938_p_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(55, ng0);

LAB3:    t1 = (t0 + 1832U);
    t2 = *((char **)t1);
    t1 = (t0 + 3840);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 8U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 3696);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_0010332520_1142133938_init()
{
	static char *pe[] = {(void *)work_a_0010332520_1142133938_p_0,(void *)work_a_0010332520_1142133938_p_1};
	xsi_register_didat("work_a_0010332520_1142133938", "isim/counter_tb_isim_beh.exe.sim/work/a_0010332520_1142133938.didat");
	xsi_register_executes(pe);
}
