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
static const char *ng0 = "D:/_prj/dns-packet-filter/dns-regex/dns_regex.vhd";
extern char *IEEE_P_3620187407;

unsigned char ieee_p_3620187407_sub_1742983514_3965413181(char *, char *, char *, char *, char *);
unsigned char ieee_p_3620187407_sub_4058165771_3965413181(char *, char *, char *, char *, char *);


static void work_a_2124964593_3212880686_p_0(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    unsigned char t9;
    unsigned char t10;
    unsigned char t11;
    char *t12;
    char *t13;

LAB0:    xsi_set_current_line(66, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 992U);
    t4 = xsi_signal_has_event(t1);
    if (t4 == 1)
        goto LAB7;

LAB8:    t3 = (unsigned char)0;

LAB9:    if (t3 != 0)
        goto LAB5;

LAB6:
LAB3:    t1 = (t0 + 6712);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(67, ng0);
    t1 = (t0 + 6872);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    goto LAB3;

LAB5:    xsi_set_current_line(69, ng0);
    t2 = (t0 + 2472U);
    t6 = *((char **)t2);
    t11 = *((unsigned char *)t6);
    t2 = (t0 + 6872);
    t7 = (t2 + 56U);
    t8 = *((char **)t7);
    t12 = (t8 + 56U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = t11;
    xsi_driver_first_trans_fast(t2);
    goto LAB3;

LAB7:    t2 = (t0 + 1032U);
    t5 = *((char **)t2);
    t9 = *((unsigned char *)t5);
    t10 = (t9 == (unsigned char)3);
    t3 = t10;
    goto LAB9;

}

static void work_a_2124964593_3212880686_p_1(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    unsigned char t9;
    unsigned char t10;
    unsigned char t11;
    char *t12;
    char *t13;

LAB0:    xsi_set_current_line(76, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 992U);
    t4 = xsi_signal_has_event(t1);
    if (t4 == 1)
        goto LAB7;

LAB8:    t3 = (unsigned char)0;

LAB9:    if (t3 != 0)
        goto LAB5;

LAB6:
LAB3:    t1 = (t0 + 6728);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(77, ng0);
    t1 = (t0 + 6936);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(78, ng0);
    t1 = (t0 + 7000);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB3;

LAB5:    xsi_set_current_line(80, ng0);
    t2 = (t0 + 2792U);
    t6 = *((char **)t2);
    t11 = *((unsigned char *)t6);
    t2 = (t0 + 6936);
    t7 = (t2 + 56U);
    t8 = *((char **)t7);
    t12 = (t8 + 56U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = t11;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(81, ng0);
    t1 = (t0 + 3112U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 7000);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t3;
    xsi_driver_first_trans_fast(t1);
    goto LAB3;

LAB7:    t2 = (t0 + 1032U);
    t5 = *((char **)t2);
    t9 = *((unsigned char *)t5);
    t10 = (t9 == (unsigned char)3);
    t3 = t10;
    goto LAB9;

}

static void work_a_2124964593_3212880686_p_2(char *t0)
{
    char t16[16];
    char t22[16];
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    unsigned char t7;
    unsigned char t8;
    char *t9;
    unsigned char t10;
    unsigned char t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    int t17;
    unsigned int t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    char *t23;
    char *t24;
    int t25;
    unsigned int t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    static char *nl0[] = {&&LAB3, &&LAB4, &&LAB5, &&LAB6, &&LAB7, &&LAB8, &&LAB9, &&LAB10};

LAB0:    xsi_set_current_line(94, ng0);
    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (char *)((nl0) + t3);
    goto **((char **)t1);

LAB2:    t1 = (t0 + 6744);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(96, ng0);
    t5 = (t0 + 1512U);
    t6 = *((char **)t5);
    t7 = *((unsigned char *)t6);
    t8 = (t7 == (unsigned char)2);
    if (t8 == 1)
        goto LAB14;

LAB15:    t4 = (unsigned char)0;

LAB16:    if (t4 != 0)
        goto LAB11;

LAB13:    xsi_set_current_line(100, ng0);
    t1 = (t0 + 7128);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t9 = *((char **)t6);
    *((unsigned char *)t9) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(101, ng0);
    t1 = (t0 + 7064);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t9 = *((char **)t6);
    *((unsigned char *)t9) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);

LAB12:    goto LAB2;

LAB4:    xsi_set_current_line(104, ng0);
    t1 = (t0 + 7128);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t9 = *((char **)t6);
    *((unsigned char *)t9) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(105, ng0);
    t1 = (t0 + 3272U);
    t2 = *((char **)t1);
    t1 = (t0 + 10916U);
    t5 = (t0 + 10994);
    t9 = (t16 + 0U);
    t12 = (t9 + 0U);
    *((int *)t12) = 0;
    t12 = (t9 + 4U);
    *((int *)t12) = 7;
    t12 = (t9 + 8U);
    *((int *)t12) = 1;
    t17 = (7 - 0);
    t18 = (t17 * 1);
    t18 = (t18 + 1);
    t12 = (t9 + 12U);
    *((unsigned int *)t12) = t18;
    t3 = ieee_p_3620187407_sub_1742983514_3965413181(IEEE_P_3620187407, t2, t1, t5, t16);
    if (t3 != 0)
        goto LAB17;

LAB19:    xsi_set_current_line(108, ng0);
    t1 = (t0 + 7064);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t9 = *((char **)t6);
    *((unsigned char *)t9) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);

LAB18:    goto LAB2;

LAB5:    xsi_set_current_line(111, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t1 = (t0 + 10900U);
    t5 = (t0 + 11002);
    t9 = (t0 + 10868U);
    t3 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t2, t1, t5, t9);
    if (t3 != 0)
        goto LAB20;

LAB22:    xsi_set_current_line(115, ng0);
    t1 = (t0 + 7128);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t9 = *((char **)t6);
    *((unsigned char *)t9) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(116, ng0);
    t1 = (t0 + 7064);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t9 = *((char **)t6);
    *((unsigned char *)t9) = (unsigned char)7;
    xsi_driver_first_trans_fast(t1);

LAB21:    goto LAB2;

LAB6:    xsi_set_current_line(119, ng0);
    t1 = (t0 + 7128);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t9 = *((char **)t6);
    *((unsigned char *)t9) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(120, ng0);
    t1 = (t0 + 3272U);
    t2 = *((char **)t1);
    t1 = (t0 + 10916U);
    t5 = (t0 + 11010);
    t9 = (t16 + 0U);
    t12 = (t9 + 0U);
    *((int *)t12) = 0;
    t12 = (t9 + 4U);
    *((int *)t12) = 7;
    t12 = (t9 + 8U);
    *((int *)t12) = 1;
    t17 = (7 - 0);
    t18 = (t17 * 1);
    t18 = (t18 + 1);
    t12 = (t9 + 12U);
    *((unsigned int *)t12) = t18;
    t3 = ieee_p_3620187407_sub_1742983514_3965413181(IEEE_P_3620187407, t2, t1, t5, t16);
    if (t3 != 0)
        goto LAB23;

LAB25:    xsi_set_current_line(123, ng0);
    t1 = (t0 + 7064);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t9 = *((char **)t6);
    *((unsigned char *)t9) = (unsigned char)4;
    xsi_driver_first_trans_fast(t1);

LAB24:    goto LAB2;

LAB7:    xsi_set_current_line(126, ng0);
    t1 = (t0 + 7128);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t9 = *((char **)t6);
    *((unsigned char *)t9) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(127, ng0);
    t1 = (t0 + 3272U);
    t2 = *((char **)t1);
    t1 = (t0 + 10916U);
    t5 = (t0 + 11018);
    t9 = (t16 + 0U);
    t12 = (t9 + 0U);
    *((int *)t12) = 0;
    t12 = (t9 + 4U);
    *((int *)t12) = 7;
    t12 = (t9 + 8U);
    *((int *)t12) = 1;
    t17 = (7 - 0);
    t18 = (t17 * 1);
    t18 = (t18 + 1);
    t12 = (t9 + 12U);
    *((unsigned int *)t12) = t18;
    t3 = ieee_p_3620187407_sub_1742983514_3965413181(IEEE_P_3620187407, t2, t1, t5, t16);
    if (t3 != 0)
        goto LAB26;

LAB28:    xsi_set_current_line(134, ng0);
    t1 = (t0 + 7064);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t9 = *((char **)t6);
    *((unsigned char *)t9) = (unsigned char)7;
    xsi_driver_first_trans_fast(t1);

LAB27:    goto LAB2;

LAB8:    xsi_set_current_line(137, ng0);
    t1 = (t0 + 7128);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t9 = *((char **)t6);
    *((unsigned char *)t9) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(138, ng0);
    t1 = (t0 + 3272U);
    t2 = *((char **)t1);
    t1 = (t0 + 10916U);
    t5 = (t0 + 11042);
    t9 = (t16 + 0U);
    t12 = (t9 + 0U);
    *((int *)t12) = 0;
    t12 = (t9 + 4U);
    *((int *)t12) = 7;
    t12 = (t9 + 8U);
    *((int *)t12) = 1;
    t17 = (7 - 0);
    t18 = (t17 * 1);
    t18 = (t18 + 1);
    t12 = (t9 + 12U);
    *((unsigned int *)t12) = t18;
    t3 = ieee_p_3620187407_sub_4058165771_3965413181(IEEE_P_3620187407, t2, t1, t5, t16);
    if (t3 != 0)
        goto LAB32;

LAB34:    xsi_set_current_line(145, ng0);
    t1 = (t0 + 7064);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t9 = *((char **)t6);
    *((unsigned char *)t9) = (unsigned char)7;
    xsi_driver_first_trans_fast(t1);

LAB33:    goto LAB2;

LAB9:    xsi_set_current_line(148, ng0);
    t1 = (t0 + 7128);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t9 = *((char **)t6);
    *((unsigned char *)t9) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(149, ng0);
    t1 = (t0 + 7064);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t9 = *((char **)t6);
    *((unsigned char *)t9) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB10:    xsi_set_current_line(151, ng0);
    t1 = (t0 + 7128);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t9 = *((char **)t6);
    *((unsigned char *)t9) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(152, ng0);
    t1 = (t0 + 7064);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t9 = *((char **)t6);
    *((unsigned char *)t9) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB11:    xsi_set_current_line(97, ng0);
    t5 = (t0 + 7064);
    t12 = (t5 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    *((unsigned char *)t15) = (unsigned char)1;
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(98, ng0);
    t1 = (t0 + 7128);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t9 = *((char **)t6);
    *((unsigned char *)t9) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB12;

LAB14:    t5 = (t0 + 1832U);
    t9 = *((char **)t5);
    t10 = *((unsigned char *)t9);
    t11 = (t10 == (unsigned char)2);
    t4 = t11;
    goto LAB16;

LAB17:    xsi_set_current_line(106, ng0);
    t12 = (t0 + 7064);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t19 = *((char **)t15);
    *((unsigned char *)t19) = (unsigned char)1;
    xsi_driver_first_trans_fast(t12);
    goto LAB18;

LAB20:    xsi_set_current_line(112, ng0);
    t12 = (t0 + 7064);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t19 = *((char **)t15);
    *((unsigned char *)t19) = (unsigned char)3;
    xsi_driver_first_trans_fast(t12);
    xsi_set_current_line(113, ng0);
    t1 = (t0 + 7128);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t9 = *((char **)t6);
    *((unsigned char *)t9) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB21;

LAB23:    xsi_set_current_line(121, ng0);
    t12 = (t0 + 7064);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t19 = *((char **)t15);
    *((unsigned char *)t19) = (unsigned char)3;
    xsi_driver_first_trans_fast(t12);
    goto LAB24;

LAB26:    xsi_set_current_line(128, ng0);
    t12 = (t0 + 1352U);
    t13 = *((char **)t12);
    t12 = (t0 + 10900U);
    t14 = (t0 + 11026);
    t18 = (15 - 15);
    t20 = (t18 * 1U);
    t21 = (0 + t20);
    t19 = (t14 + t21);
    t23 = (t22 + 0U);
    t24 = (t23 + 0U);
    *((int *)t24) = 15;
    t24 = (t23 + 4U);
    *((int *)t24) = 8;
    t24 = (t23 + 8U);
    *((int *)t24) = -1;
    t25 = (8 - 15);
    t26 = (t25 * -1);
    t26 = (t26 + 1);
    t24 = (t23 + 12U);
    *((unsigned int *)t24) = t26;
    t4 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t13, t12, t19, t22);
    if (t4 != 0)
        goto LAB29;

LAB31:    xsi_set_current_line(131, ng0);
    t1 = (t0 + 7064);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t9 = *((char **)t6);
    *((unsigned char *)t9) = (unsigned char)4;
    xsi_driver_first_trans_fast(t1);

LAB30:    goto LAB27;

LAB29:    xsi_set_current_line(129, ng0);
    t24 = (t0 + 7064);
    t27 = (t24 + 56U);
    t28 = *((char **)t27);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    *((unsigned char *)t30) = (unsigned char)5;
    xsi_driver_first_trans_fast(t24);
    goto LAB30;

LAB32:    xsi_set_current_line(139, ng0);
    t12 = (t0 + 1352U);
    t13 = *((char **)t12);
    t12 = (t0 + 10900U);
    t14 = (t0 + 11050);
    t18 = (15 - 7);
    t20 = (t18 * 1U);
    t21 = (0 + t20);
    t19 = (t14 + t21);
    t23 = (t22 + 0U);
    t24 = (t23 + 0U);
    *((int *)t24) = 7;
    t24 = (t23 + 4U);
    *((int *)t24) = 0;
    t24 = (t23 + 8U);
    *((int *)t24) = -1;
    t25 = (0 - 7);
    t26 = (t25 * -1);
    t26 = (t26 + 1);
    t24 = (t23 + 12U);
    *((unsigned int *)t24) = t26;
    t4 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t13, t12, t19, t22);
    if (t4 != 0)
        goto LAB35;

LAB37:    xsi_set_current_line(142, ng0);
    t1 = (t0 + 7064);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t9 = *((char **)t6);
    *((unsigned char *)t9) = (unsigned char)4;
    xsi_driver_first_trans_fast(t1);

LAB36:    goto LAB33;

LAB35:    xsi_set_current_line(140, ng0);
    t24 = (t0 + 7064);
    t27 = (t24 + 56U);
    t28 = *((char **)t27);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    *((unsigned char *)t30) = (unsigned char)6;
    xsi_driver_first_trans_fast(t24);
    goto LAB36;

}

static void work_a_2124964593_3212880686_p_3(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned char t6;
    char *t7;
    char *t8;
    static char *nl0[] = {&&LAB3, &&LAB4, &&LAB5, &&LAB6, &&LAB7, &&LAB8, &&LAB9, &&LAB10};

LAB0:    xsi_set_current_line(159, ng0);
    t1 = (t0 + 7192);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(160, ng0);
    t1 = (t0 + 7256);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(161, ng0);
    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t6 = *((unsigned char *)t2);
    t1 = (char *)((nl0) + t6);
    goto **((char **)t1);

LAB2:    t1 = (t0 + 6760);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    goto LAB2;

LAB4:    goto LAB2;

LAB5:    goto LAB2;

LAB6:    goto LAB2;

LAB7:    goto LAB2;

LAB8:    goto LAB2;

LAB9:    xsi_set_current_line(169, ng0);
    t3 = (t0 + 7192);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t3);
    xsi_set_current_line(170, ng0);
    t1 = (t0 + 7256);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB10:    xsi_set_current_line(172, ng0);
    t1 = (t0 + 7256);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

}

static void work_a_2124964593_3212880686_p_4(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(177, ng0);

LAB3:    t1 = (t0 + 2632U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 7320);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 6776);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_2124964593_3212880686_p_5(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(178, ng0);

LAB3:    t1 = (t0 + 2952U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 7384);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 6792);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_2124964593_3212880686_init()
{
	static char *pe[] = {(void *)work_a_2124964593_3212880686_p_0,(void *)work_a_2124964593_3212880686_p_1,(void *)work_a_2124964593_3212880686_p_2,(void *)work_a_2124964593_3212880686_p_3,(void *)work_a_2124964593_3212880686_p_4,(void *)work_a_2124964593_3212880686_p_5};
	xsi_register_didat("work_a_2124964593_3212880686", "isim/dns_regex_tb_isim_beh.exe.sim/work/a_2124964593_3212880686.didat");
	xsi_register_executes(pe);
}
