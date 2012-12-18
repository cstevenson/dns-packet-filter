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
static const char *ng0 = "D:/_prj/dns-packet-filter/simulation/dns_regex_tb.vhd";
extern char *STD_TEXTIO;
extern char *IEEE_P_3564397177;

void ieee_p_3564397177_sub_2321505904_91900896(char *, char *, char *, char *, char *);
void ieee_p_3564397177_sub_3902175275_91900896(char *, char *, char *, char *, char *, char *);


static void work_a_3459610876_2372691052_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int64 t7;
    int64 t8;

LAB0:    t1 = (t0 + 4792U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(105, ng0);
    t2 = (t0 + 5424);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(106, ng0);
    t2 = (t0 + 2448U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 4600);
    xsi_process_wait(t2, t8);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(107, ng0);
    t2 = (t0 + 5424);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(108, ng0);
    t2 = (t0 + 2448U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 4600);
    xsi_process_wait(t2, t8);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    goto LAB2;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

}

static void work_a_3459610876_2372691052_p_1(char *t0)
{
    char t34[8];
    char t35[8];
    char *t1;
    char *t2;
    int64 t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    int64 t8;
    unsigned char t9;
    unsigned char t10;
    char *t11;
    unsigned char t12;
    int t13;
    unsigned char t14;
    int t15;
    int t16;
    unsigned int t17;
    int t18;
    int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    int t26;
    int t27;
    char *t28;
    int t29;
    int t30;
    int t31;
    unsigned int t32;
    unsigned int t33;

LAB0:    t1 = (t0 + 5040U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(126, ng0);
    t3 = (100 * 1000LL);
    t2 = (t0 + 4848);
    xsi_process_wait(t2, t3);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(128, ng0);
    t2 = (t0 + 2448U);
    t4 = *((char **)t2);
    t3 = *((int64 *)t4);
    t2 = (t0 + 4848);
    xsi_process_wait(t2, t3);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    xsi_set_current_line(129, ng0);
    t2 = (t0 + 5488);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(130, ng0);
    t2 = (t0 + 2448U);
    t4 = *((char **)t2);
    t3 = *((int64 *)t4);
    t8 = (t3 * 4);
    t2 = (t0 + 4848);
    xsi_process_wait(t2, t8);

LAB14:    *((char **)t1) = &&LAB15;
    goto LAB1;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

LAB12:    xsi_set_current_line(131, ng0);
    t2 = (t0 + 5488);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(132, ng0);
    t2 = (t0 + 2448U);
    t4 = *((char **)t2);
    t3 = *((int64 *)t4);
    t2 = (t0 + 4848);
    xsi_process_wait(t2, t3);

LAB18:    *((char **)t1) = &&LAB19;
    goto LAB1;

LAB13:    goto LAB12;

LAB15:    goto LAB13;

LAB16:    xsi_set_current_line(134, ng0);

LAB20:    t2 = (t0 + 3496U);
    t9 = std_textio_endfile(t2);
    t10 = (!(t9));
    if (t10 != 0)
        goto LAB21;

LAB23:    xsi_set_current_line(182, ng0);
    t2 = (t0 + 3600U);
    std_textio_file_close(t2);
    xsi_set_current_line(183, ng0);
    t2 = (t0 + 3496U);
    std_textio_file_close(t2);
    xsi_set_current_line(185, ng0);

LAB51:    *((char **)t1) = &&LAB52;
    goto LAB1;

LAB17:    goto LAB16;

LAB19:    goto LAB17;

LAB21:    xsi_set_current_line(136, ng0);
    if ((unsigned char)0 == 0)
        goto LAB24;

LAB25:    xsi_set_current_line(139, ng0);
    t2 = (t0 + 4848);
    t4 = (t0 + 3496U);
    t5 = (t0 + 3776U);
    std_textio_readline(STD_TEXTIO, t2, t4, t5);
    xsi_set_current_line(141, ng0);
    t2 = (t0 + 4848);
    t4 = (t0 + 3776U);
    t5 = (t0 + 2568U);
    t6 = *((char **)t5);
    t5 = (t0 + 9052U);
    t7 = (t0 + 2808U);
    t11 = *((char **)t7);
    t7 = (t11 + 0);
    ieee_p_3564397177_sub_3902175275_91900896(IEEE_P_3564397177, t2, t4, t6, t5, t7);
    xsi_set_current_line(142, ng0);
    t2 = (t0 + 2808U);
    t4 = *((char **)t2);
    t9 = *((unsigned char *)t4);
    if (t9 == 0)
        goto LAB26;

LAB27:    xsi_set_current_line(146, ng0);
    t2 = (t0 + 4848);
    t4 = (t0 + 3776U);
    t5 = (t0 + 3168U);
    t6 = *((char **)t5);
    t5 = (t6 + 0);
    t7 = (t0 + 2808U);
    t11 = *((char **)t7);
    t7 = (t11 + 0);
    ieee_p_3564397177_sub_2321505904_91900896(IEEE_P_3564397177, t2, t4, t5, t7);
    xsi_set_current_line(147, ng0);
    t2 = (t0 + 2808U);
    t4 = *((char **)t2);
    t9 = *((unsigned char *)t4);
    if (t9 == 0)
        goto LAB28;

LAB29:    xsi_set_current_line(151, ng0);
    t2 = (t0 + 3048U);
    t4 = *((char **)t2);
    t2 = (t4 + 0);
    *((unsigned char *)t2) = (unsigned char)0;
    xsi_set_current_line(152, ng0);
    t2 = (t0 + 2928U);
    t4 = *((char **)t2);
    t2 = (t4 + 0);
    *((int *)t2) = 1264;
    xsi_set_current_line(153, ng0);
    t2 = (t0 + 5552);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(154, ng0);
    t2 = (t0 + 5616);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(155, ng0);
    t2 = (t0 + 5680);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(156, ng0);

LAB30:    t2 = (t0 + 3048U);
    t4 = *((char **)t2);
    t10 = *((unsigned char *)t4);
    t12 = (!(t10));
    if (t12 == 1)
        goto LAB34;

LAB35:    t9 = (unsigned char)0;

LAB36:    if (t9 != 0)
        goto LAB31;

LAB33:    xsi_set_current_line(171, ng0);
    if ((unsigned char)0 == 0)
        goto LAB44;

LAB45:    xsi_set_current_line(174, ng0);
    t2 = (t0 + 2152U);
    t4 = *((char **)t2);
    t9 = *((unsigned char *)t4);
    t2 = (t0 + 3168U);
    t5 = *((char **)t2);
    t10 = *((unsigned char *)t5);
    t12 = (t9 == t10);
    if (t12 != 0)
        goto LAB46;

LAB48:    xsi_set_current_line(177, ng0);
    t2 = (t0 + 4848);
    t4 = (t0 + 3848U);
    t5 = (t0 + 4208U);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t35, t7, 4U);
    t6 = (t0 + 9020U);
    std_textio_write7(STD_TEXTIO, t2, t4, t35, t6, (unsigned char)0, 0);

LAB47:    xsi_set_current_line(179, ng0);
    t2 = (t0 + 4848);
    t4 = (t0 + 3600U);
    t5 = (t0 + 3848U);
    std_textio_writeline(STD_TEXTIO, t2, t4, t5);
    goto LAB20;

LAB22:;
LAB24:    t4 = (t0 + 10606);
    xsi_report(t4, 26U, (unsigned char)0);
    goto LAB25;

LAB26:    t2 = (t0 + 10632);
    xsi_report(t2, 23U, (unsigned char)3);
    goto LAB27;

LAB28:    t2 = (t0 + 10655);
    xsi_report(t2, 33U, (unsigned char)3);
    goto LAB29;

LAB31:    xsi_set_current_line(158, ng0);
    t2 = (t0 + 2568U);
    t6 = *((char **)t2);
    t2 = (t0 + 2928U);
    t7 = *((char **)t2);
    t15 = *((int *)t7);
    t16 = (t15 - 1);
    t17 = (1263 - t16);
    t2 = (t0 + 2928U);
    t11 = *((char **)t2);
    t18 = *((int *)t11);
    t19 = (t18 - 8);
    xsi_vhdl_check_range_of_slice(1263, 0, -1, t16, t19, -1);
    t20 = (t17 * 1U);
    t21 = (0 + t20);
    t2 = (t6 + t21);
    t22 = (t0 + 2688U);
    t23 = *((char **)t22);
    t22 = (t23 + 0);
    t24 = (t0 + 2928U);
    t25 = *((char **)t24);
    t26 = *((int *)t25);
    t27 = (t26 - 1);
    t24 = (t0 + 2928U);
    t28 = *((char **)t24);
    t29 = *((int *)t28);
    t30 = (t29 - 8);
    t31 = (t30 - t27);
    t32 = (t31 * -1);
    t32 = (t32 + 1);
    t33 = (1U * t32);
    memcpy(t22, t2, t33);
    xsi_set_current_line(159, ng0);
    t2 = (t0 + 2928U);
    t4 = *((char **)t2);
    t13 = *((int *)t4);
    t15 = (t13 - 8);
    t2 = (t0 + 2928U);
    t5 = *((char **)t2);
    t2 = (t5 + 0);
    *((int *)t2) = t15;
    xsi_set_current_line(160, ng0);
    t2 = (t0 + 2688U);
    t4 = *((char **)t2);
    t2 = (t0 + 5744);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t11 = *((char **)t7);
    memcpy(t11, t4, 8U);
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(162, ng0);
    t2 = (t0 + 2448U);
    t4 = *((char **)t2);
    t3 = *((int64 *)t4);
    t2 = (t0 + 4848);
    xsi_process_wait(t2, t3);

LAB39:    *((char **)t1) = &&LAB40;
    goto LAB1;

LAB32:;
LAB34:    t2 = (t0 + 2928U);
    t5 = *((char **)t2);
    t13 = *((int *)t5);
    t14 = (t13 > 0);
    t9 = t14;
    goto LAB36;

LAB37:    xsi_set_current_line(163, ng0);
    t2 = (t0 + 5552);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(164, ng0);
    t2 = (t0 + 1992U);
    t4 = *((char **)t2);
    t9 = *((unsigned char *)t4);
    t10 = (t9 == (unsigned char)3);
    if (t10 != 0)
        goto LAB41;

LAB43:
LAB42:    goto LAB30;

LAB38:    goto LAB37;

LAB40:    goto LAB38;

LAB41:    xsi_set_current_line(165, ng0);
    t2 = (t0 + 3048U);
    t5 = *((char **)t2);
    t2 = (t5 + 0);
    *((unsigned char *)t2) = (unsigned char)1;
    goto LAB42;

LAB44:    t2 = (t0 + 10688);
    xsi_report(t2, 24U, (unsigned char)0);
    goto LAB45;

LAB46:    xsi_set_current_line(175, ng0);
    t2 = (t0 + 4848);
    t6 = (t0 + 3848U);
    t7 = (t0 + 4064U);
    t11 = (t7 + 56U);
    t22 = *((char **)t11);
    memcpy(t34, t22, 4U);
    t11 = (t0 + 9004U);
    std_textio_write7(STD_TEXTIO, t2, t6, t34, t11, (unsigned char)0, 0);
    goto LAB47;

LAB49:    goto LAB2;

LAB50:    goto LAB49;

LAB52:    goto LAB50;

}


extern void work_a_3459610876_2372691052_init()
{
	static char *pe[] = {(void *)work_a_3459610876_2372691052_p_0,(void *)work_a_3459610876_2372691052_p_1};
	xsi_register_didat("work_a_3459610876_2372691052", "isim/dns_regex_tb_isim_beh.exe.sim/work/a_3459610876_2372691052.didat");
	xsi_register_executes(pe);
}
