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

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "D:/cbradford/NewADCFirmware/GEL_CAPTAN/ClockLatchSignals.vhd";
extern char *IEEE_P_1242562249;

char *ieee_p_1242562249_sub_1919365254_1035706684(char *, char *, char *, char *, int );
unsigned char ieee_p_1242562249_sub_2110375371_1035706684(char *, char *, char *, char *, char *);


static void work_a_3042481592_3212880686_p_0(char *t0)
{
    char t13[16];
    unsigned char t1;
    char *t2;
    char *t3;
    unsigned char t4;
    unsigned char t5;
    char *t6;
    unsigned char t7;
    unsigned char t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t14;
    int t15;
    unsigned int t16;
    unsigned char t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    unsigned int t24;

LAB0:    xsi_set_current_line(61, ng0);
    t2 = (t0 + 1192U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = (t4 == (unsigned char)3);
    if (t5 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    xsi_set_current_line(66, ng0);
    t2 = (t0 + 1832U);
    t3 = *((char **)t2);
    t1 = *((unsigned char *)t3);
    t4 = (t1 == (unsigned char)0);
    if (t4 != 0)
        goto LAB8;

LAB10:
LAB9:    xsi_set_current_line(70, ng0);
    t2 = (t0 + 1992U);
    t3 = *((char **)t2);
    t1 = *((unsigned char *)t3);
    t4 = (t1 == (unsigned char)0);
    if (t4 != 0)
        goto LAB11;

LAB13:
LAB12:    xsi_set_current_line(74, ng0);
    t2 = (t0 + 1832U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = (t4 == (unsigned char)3);
    if (t5 == 1)
        goto LAB17;

LAB18:    t1 = (unsigned char)0;

LAB19:    if (t1 != 0)
        goto LAB14;

LAB16:
LAB15:    xsi_set_current_line(125, ng0);
    t2 = (t0 + 1832U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = (t4 == (unsigned char)3);
    if (t5 == 1)
        goto LAB57;

LAB58:    t1 = (unsigned char)0;

LAB59:    if (t1 != 0)
        goto LAB54;

LAB56:
LAB55:    t2 = (t0 + 3472);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(62, ng0);
    t2 = (t0 + 3552);
    t9 = (t2 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(63, ng0);
    t2 = (t0 + 3616);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t9 = (t6 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    goto LAB3;

LAB5:    t2 = (t0 + 1832U);
    t6 = *((char **)t2);
    t7 = *((unsigned char *)t6);
    t8 = (t7 == (unsigned char)2);
    t1 = t8;
    goto LAB7;

LAB8:    xsi_set_current_line(67, ng0);
    t2 = (t0 + 3552);
    t6 = (t2 + 56U);
    t9 = *((char **)t6);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    goto LAB9;

LAB11:    xsi_set_current_line(71, ng0);
    t2 = (t0 + 3616);
    t6 = (t2 + 56U);
    t9 = *((char **)t6);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    goto LAB12;

LAB14:    xsi_set_current_line(76, ng0);
    t2 = (t0 + 1512U);
    t9 = *((char **)t2);
    t2 = (t0 + 5940U);
    t10 = (t0 + 5991);
    t12 = (t13 + 0U);
    t14 = (t12 + 0U);
    *((int *)t14) = 0;
    t14 = (t12 + 4U);
    *((int *)t14) = 3;
    t14 = (t12 + 8U);
    *((int *)t14) = 1;
    t15 = (3 - 0);
    t16 = (t15 * 1);
    t16 = (t16 + 1);
    t14 = (t12 + 12U);
    *((unsigned int *)t14) = t16;
    t17 = ieee_p_1242562249_sub_2110375371_1035706684(IEEE_P_1242562249, t9, t2, t10, t13);
    if (t17 != 0)
        goto LAB20;

LAB22:    xsi_set_current_line(120, ng0);
    t2 = (t0 + 1512U);
    t3 = *((char **)t2);
    t2 = (t0 + 5940U);
    t6 = ieee_p_1242562249_sub_1919365254_1035706684(IEEE_P_1242562249, t13, t3, t2, 1);
    t9 = (t13 + 12U);
    t16 = *((unsigned int *)t9);
    t24 = (1U * t16);
    t1 = (4U != t24);
    if (t1 == 1)
        goto LAB52;

LAB53:    t10 = (t0 + 3680);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t14 = (t12 + 56U);
    t18 = *((char **)t14);
    memcpy(t18, t6, 4U);
    xsi_driver_first_trans_fast(t10);

LAB21:    goto LAB15;

LAB17:    t2 = (t0 + 1992U);
    t6 = *((char **)t2);
    t7 = *((unsigned char *)t6);
    t8 = (t7 == (unsigned char)2);
    t1 = t8;
    goto LAB19;

LAB20:    xsi_set_current_line(77, ng0);
    t14 = (t0 + 5995);
    t19 = (t0 + 3680);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    memcpy(t23, t14, 4U);
    xsi_driver_first_trans_fast(t19);
    xsi_set_current_line(78, ng0);
    t2 = (t0 + 1672U);
    t3 = *((char **)t2);
    t2 = (t0 + 5956U);
    t6 = (t0 + 5999);
    t10 = (t13 + 0U);
    t11 = (t10 + 0U);
    *((int *)t11) = 0;
    t11 = (t10 + 4U);
    *((int *)t11) = 2;
    t11 = (t10 + 8U);
    *((int *)t11) = 1;
    t15 = (2 - 0);
    t16 = (t15 * 1);
    t16 = (t16 + 1);
    t11 = (t10 + 12U);
    *((unsigned int *)t11) = t16;
    t1 = ieee_p_1242562249_sub_2110375371_1035706684(IEEE_P_1242562249, t3, t2, t6, t13);
    if (t1 != 0)
        goto LAB23;

LAB25:    xsi_set_current_line(82, ng0);
    t2 = (t0 + 1672U);
    t3 = *((char **)t2);
    t2 = (t0 + 5956U);
    t6 = ieee_p_1242562249_sub_1919365254_1035706684(IEEE_P_1242562249, t13, t3, t2, 1);
    t9 = (t13 + 12U);
    t16 = *((unsigned int *)t9);
    t24 = (1U * t16);
    t1 = (3U != t24);
    if (t1 == 1)
        goto LAB26;

LAB27:    t10 = (t0 + 3744);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t14 = (t12 + 56U);
    t18 = *((char **)t14);
    memcpy(t18, t6, 3U);
    xsi_driver_first_trans_fast(t10);

LAB24:    xsi_set_current_line(87, ng0);
    t2 = (t0 + 1672U);
    t3 = *((char **)t2);
    t2 = (t0 + 5956U);
    t6 = (t0 + 6005);
    t10 = (t13 + 0U);
    t11 = (t10 + 0U);
    *((int *)t11) = 0;
    t11 = (t10 + 4U);
    *((int *)t11) = 2;
    t11 = (t10 + 8U);
    *((int *)t11) = 1;
    t15 = (2 - 0);
    t16 = (t15 * 1);
    t16 = (t16 + 1);
    t11 = (t10 + 12U);
    *((unsigned int *)t11) = t16;
    t1 = ieee_p_1242562249_sub_2110375371_1035706684(IEEE_P_1242562249, t3, t2, t6, t13);
    if (t1 != 0)
        goto LAB28;

LAB30:
LAB29:    xsi_set_current_line(91, ng0);
    t2 = (t0 + 1672U);
    t3 = *((char **)t2);
    t2 = (t0 + 5956U);
    t6 = (t0 + 6016);
    t10 = (t13 + 0U);
    t11 = (t10 + 0U);
    *((int *)t11) = 0;
    t11 = (t10 + 4U);
    *((int *)t11) = 2;
    t11 = (t10 + 8U);
    *((int *)t11) = 1;
    t15 = (2 - 0);
    t16 = (t15 * 1);
    t16 = (t16 + 1);
    t11 = (t10 + 12U);
    *((unsigned int *)t11) = t16;
    t1 = ieee_p_1242562249_sub_2110375371_1035706684(IEEE_P_1242562249, t3, t2, t6, t13);
    if (t1 != 0)
        goto LAB31;

LAB33:
LAB32:    xsi_set_current_line(95, ng0);
    t2 = (t0 + 1672U);
    t3 = *((char **)t2);
    t2 = (t0 + 5956U);
    t6 = (t0 + 6027);
    t10 = (t13 + 0U);
    t11 = (t10 + 0U);
    *((int *)t11) = 0;
    t11 = (t10 + 4U);
    *((int *)t11) = 2;
    t11 = (t10 + 8U);
    *((int *)t11) = 1;
    t15 = (2 - 0);
    t16 = (t15 * 1);
    t16 = (t16 + 1);
    t11 = (t10 + 12U);
    *((unsigned int *)t11) = t16;
    t1 = ieee_p_1242562249_sub_2110375371_1035706684(IEEE_P_1242562249, t3, t2, t6, t13);
    if (t1 != 0)
        goto LAB34;

LAB36:
LAB35:    xsi_set_current_line(99, ng0);
    t2 = (t0 + 1672U);
    t3 = *((char **)t2);
    t2 = (t0 + 5956U);
    t6 = (t0 + 6038);
    t10 = (t13 + 0U);
    t11 = (t10 + 0U);
    *((int *)t11) = 0;
    t11 = (t10 + 4U);
    *((int *)t11) = 2;
    t11 = (t10 + 8U);
    *((int *)t11) = 1;
    t15 = (2 - 0);
    t16 = (t15 * 1);
    t16 = (t16 + 1);
    t11 = (t10 + 12U);
    *((unsigned int *)t11) = t16;
    t1 = ieee_p_1242562249_sub_2110375371_1035706684(IEEE_P_1242562249, t3, t2, t6, t13);
    if (t1 != 0)
        goto LAB37;

LAB39:
LAB38:    xsi_set_current_line(103, ng0);
    t2 = (t0 + 1672U);
    t3 = *((char **)t2);
    t2 = (t0 + 5956U);
    t6 = (t0 + 6049);
    t10 = (t13 + 0U);
    t11 = (t10 + 0U);
    *((int *)t11) = 0;
    t11 = (t10 + 4U);
    *((int *)t11) = 2;
    t11 = (t10 + 8U);
    *((int *)t11) = 1;
    t15 = (2 - 0);
    t16 = (t15 * 1);
    t16 = (t16 + 1);
    t11 = (t10 + 12U);
    *((unsigned int *)t11) = t16;
    t1 = ieee_p_1242562249_sub_2110375371_1035706684(IEEE_P_1242562249, t3, t2, t6, t13);
    if (t1 != 0)
        goto LAB40;

LAB42:
LAB41:    xsi_set_current_line(107, ng0);
    t2 = (t0 + 1672U);
    t3 = *((char **)t2);
    t2 = (t0 + 5956U);
    t6 = (t0 + 6060);
    t10 = (t13 + 0U);
    t11 = (t10 + 0U);
    *((int *)t11) = 0;
    t11 = (t10 + 4U);
    *((int *)t11) = 2;
    t11 = (t10 + 8U);
    *((int *)t11) = 1;
    t15 = (2 - 0);
    t16 = (t15 * 1);
    t16 = (t16 + 1);
    t11 = (t10 + 12U);
    *((unsigned int *)t11) = t16;
    t1 = ieee_p_1242562249_sub_2110375371_1035706684(IEEE_P_1242562249, t3, t2, t6, t13);
    if (t1 != 0)
        goto LAB43;

LAB45:
LAB44:    xsi_set_current_line(111, ng0);
    t2 = (t0 + 1672U);
    t3 = *((char **)t2);
    t2 = (t0 + 5956U);
    t6 = (t0 + 6071);
    t10 = (t13 + 0U);
    t11 = (t10 + 0U);
    *((int *)t11) = 0;
    t11 = (t10 + 4U);
    *((int *)t11) = 2;
    t11 = (t10 + 8U);
    *((int *)t11) = 1;
    t15 = (2 - 0);
    t16 = (t15 * 1);
    t16 = (t16 + 1);
    t11 = (t10 + 12U);
    *((unsigned int *)t11) = t16;
    t1 = ieee_p_1242562249_sub_2110375371_1035706684(IEEE_P_1242562249, t3, t2, t6, t13);
    if (t1 != 0)
        goto LAB46;

LAB48:
LAB47:    xsi_set_current_line(115, ng0);
    t2 = (t0 + 1672U);
    t3 = *((char **)t2);
    t2 = (t0 + 5956U);
    t6 = (t0 + 6082);
    t10 = (t13 + 0U);
    t11 = (t10 + 0U);
    *((int *)t11) = 0;
    t11 = (t10 + 4U);
    *((int *)t11) = 2;
    t11 = (t10 + 8U);
    *((int *)t11) = 1;
    t15 = (2 - 0);
    t16 = (t15 * 1);
    t16 = (t16 + 1);
    t11 = (t10 + 12U);
    *((unsigned int *)t11) = t16;
    t1 = ieee_p_1242562249_sub_2110375371_1035706684(IEEE_P_1242562249, t3, t2, t6, t13);
    if (t1 != 0)
        goto LAB49;

LAB51:
LAB50:    goto LAB21;

LAB23:    xsi_set_current_line(79, ng0);
    t11 = (t0 + 6002);
    t14 = (t0 + 3744);
    t18 = (t14 + 56U);
    t19 = *((char **)t18);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    memcpy(t21, t11, 3U);
    xsi_driver_first_trans_fast(t14);
    xsi_set_current_line(80, ng0);
    t2 = (t0 + 3616);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t9 = (t6 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    goto LAB24;

LAB26:    xsi_size_not_matching(3U, t24, 0);
    goto LAB27;

LAB28:    xsi_set_current_line(88, ng0);
    t11 = (t0 + 6008);
    t14 = (t0 + 3808);
    t18 = (t14 + 56U);
    t19 = *((char **)t18);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    memcpy(t21, t11, 8U);
    xsi_driver_first_trans_fast_port(t14);
    goto LAB29;

LAB31:    xsi_set_current_line(92, ng0);
    t11 = (t0 + 6019);
    t14 = (t0 + 3808);
    t18 = (t14 + 56U);
    t19 = *((char **)t18);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    memcpy(t21, t11, 8U);
    xsi_driver_first_trans_fast_port(t14);
    goto LAB32;

LAB34:    xsi_set_current_line(96, ng0);
    t11 = (t0 + 6030);
    t14 = (t0 + 3808);
    t18 = (t14 + 56U);
    t19 = *((char **)t18);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    memcpy(t21, t11, 8U);
    xsi_driver_first_trans_fast_port(t14);
    goto LAB35;

LAB37:    xsi_set_current_line(100, ng0);
    t11 = (t0 + 6041);
    t14 = (t0 + 3808);
    t18 = (t14 + 56U);
    t19 = *((char **)t18);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    memcpy(t21, t11, 8U);
    xsi_driver_first_trans_fast_port(t14);
    goto LAB38;

LAB40:    xsi_set_current_line(104, ng0);
    t11 = (t0 + 6052);
    t14 = (t0 + 3808);
    t18 = (t14 + 56U);
    t19 = *((char **)t18);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    memcpy(t21, t11, 8U);
    xsi_driver_first_trans_fast_port(t14);
    goto LAB41;

LAB43:    xsi_set_current_line(108, ng0);
    t11 = (t0 + 6063);
    t14 = (t0 + 3808);
    t18 = (t14 + 56U);
    t19 = *((char **)t18);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    memcpy(t21, t11, 8U);
    xsi_driver_first_trans_fast_port(t14);
    goto LAB44;

LAB46:    xsi_set_current_line(112, ng0);
    t11 = (t0 + 6074);
    t14 = (t0 + 3808);
    t18 = (t14 + 56U);
    t19 = *((char **)t18);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    memcpy(t21, t11, 8U);
    xsi_driver_first_trans_fast_port(t14);
    goto LAB47;

LAB49:    xsi_set_current_line(116, ng0);
    t11 = (t0 + 6085);
    t14 = (t0 + 3808);
    t18 = (t14 + 56U);
    t19 = *((char **)t18);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    memcpy(t21, t11, 8U);
    xsi_driver_first_trans_fast_port(t14);
    goto LAB50;

LAB52:    xsi_size_not_matching(4U, t24, 0);
    goto LAB53;

LAB54:    xsi_set_current_line(126, ng0);
    t2 = (t0 + 3552);
    t9 = (t2 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(127, ng0);
    t2 = (t0 + 3616);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t9 = (t6 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(128, ng0);
    t2 = (t0 + 6093);
    t6 = (t0 + 3808);
    t9 = (t6 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t2, 8U);
    xsi_driver_first_trans_fast_port(t6);
    goto LAB55;

LAB57:    t2 = (t0 + 1992U);
    t6 = *((char **)t2);
    t7 = *((unsigned char *)t6);
    t8 = (t7 == (unsigned char)3);
    t1 = t8;
    goto LAB59;

}


extern void work_a_3042481592_3212880686_init()
{
	static char *pe[] = {(void *)work_a_3042481592_3212880686_p_0};
	xsi_register_didat("work_a_3042481592_3212880686", "isim/ClockLatchSignals_tb_isim_beh.exe.sim/work/a_3042481592_3212880686.didat");
	xsi_register_executes(pe);
}
