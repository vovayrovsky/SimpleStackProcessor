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
static const char *ng0 = "C:/Users/KekKuLe/Desktop/temp/Code/SSP/SimpleStackProcessor/FPGA/ControlUnit.v";
static unsigned int ng1[] = {15U, 0U};
static unsigned int ng2[] = {0U, 0U};
static unsigned int ng3[] = {16U, 0U};
static unsigned int ng4[] = {48U, 0U};
static unsigned int ng5[] = {17U, 0U};
static unsigned int ng6[] = {14U, 0U};
static unsigned int ng7[] = {18U, 0U};
static unsigned int ng8[] = {19U, 0U};
static unsigned int ng9[] = {20U, 0U};
static unsigned int ng10[] = {1U, 0U};
static unsigned int ng11[] = {3U, 0U};
static int ng12[] = {1, 0};
static unsigned int ng13[] = {2U, 0U};
static int ng14[] = {0, 0};



static void Always_114_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    int t15;
    char *t16;
    char *t17;
    int t18;
    char *t19;
    char *t20;

LAB0:    t1 = (t0 + 4928U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(114, ng0);
    t2 = (t0 + 5992);
    *((int *)t2) = 1;
    t3 = (t0 + 4960);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(115, ng0);

LAB5:    xsi_set_current_line(117, ng0);
    t4 = (t0 + 1368U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(118, ng0);

LAB9:    xsi_set_current_line(120, ng0);
    t11 = (t0 + 4008);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);

LAB10:    t14 = ((char*)((ng1)));
    t15 = xsi_vlog_unsigned_case_compare(t13, 8, t14, 8);
    if (t15 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng3)));
    t15 = xsi_vlog_unsigned_case_compare(t13, 8, t2, 8);
    if (t15 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng5)));
    t15 = xsi_vlog_unsigned_case_compare(t13, 8, t2, 8);
    if (t15 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng7)));
    t15 = xsi_vlog_unsigned_case_compare(t13, 8, t2, 8);
    if (t15 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng8)));
    t15 = xsi_vlog_unsigned_case_compare(t13, 8, t2, 8);
    if (t15 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng9)));
    t15 = xsi_vlog_unsigned_case_compare(t13, 8, t2, 8);
    if (t15 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng6)));
    t15 = xsi_vlog_unsigned_case_compare(t13, 8, t2, 8);
    if (t15 == 1)
        goto LAB23;

LAB24:
LAB25:    goto LAB8;

LAB11:    xsi_set_current_line(122, ng0);
    t16 = (t0 + 1208U);
    t17 = *((char **)t16);

LAB26:    t16 = ((char*)((ng2)));
    t18 = xsi_vlog_unsigned_case_compare(t17, 6, t16, 6);
    if (t18 == 1)
        goto LAB27;

LAB28:    t2 = ((char*)((ng4)));
    t15 = xsi_vlog_unsigned_case_compare(t17, 6, t2, 6);
    if (t15 == 1)
        goto LAB29;

LAB30:
LAB31:    goto LAB25;

LAB13:    xsi_set_current_line(129, ng0);
    t3 = ((char*)((ng6)));
    t4 = (t0 + 4008);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 8, 0LL);
    goto LAB25;

LAB15:    xsi_set_current_line(131, ng0);
    t3 = ((char*)((ng7)));
    t4 = (t0 + 4008);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 8, 0LL);
    goto LAB25;

LAB17:    xsi_set_current_line(132, ng0);
    t3 = ((char*)((ng8)));
    t4 = (t0 + 4008);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 8, 0LL);
    goto LAB25;

LAB19:    xsi_set_current_line(133, ng0);
    t3 = ((char*)((ng9)));
    t4 = (t0 + 4008);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 8, 0LL);
    goto LAB25;

LAB21:    xsi_set_current_line(134, ng0);
    t3 = ((char*)((ng6)));
    t4 = (t0 + 4008);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 8, 0LL);
    goto LAB25;

LAB23:    xsi_set_current_line(136, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 4008);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 8, 0LL);
    goto LAB25;

LAB27:    xsi_set_current_line(124, ng0);
    t19 = ((char*)((ng3)));
    t20 = (t0 + 4008);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 8, 0LL);
    goto LAB31;

LAB29:    xsi_set_current_line(125, ng0);
    t3 = ((char*)((ng5)));
    t4 = (t0 + 4008);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 8, 0LL);
    goto LAB31;

}

static void Always_148_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    int t15;
    char *t16;
    char *t17;
    int t18;
    char *t19;
    char *t20;

LAB0:    t1 = (t0 + 5176U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(148, ng0);
    t2 = (t0 + 6008);
    *((int *)t2) = 1;
    t3 = (t0 + 5208);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(149, ng0);

LAB5:    xsi_set_current_line(151, ng0);
    t4 = (t0 + 1368U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(152, ng0);

LAB9:    xsi_set_current_line(154, ng0);
    t11 = (t0 + 4008);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);

LAB10:    t14 = ((char*)((ng1)));
    t15 = xsi_vlog_unsigned_case_compare(t13, 8, t14, 8);
    if (t15 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng3)));
    t15 = xsi_vlog_unsigned_case_compare(t13, 8, t2, 8);
    if (t15 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng5)));
    t15 = xsi_vlog_unsigned_case_compare(t13, 8, t2, 8);
    if (t15 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng7)));
    t15 = xsi_vlog_unsigned_case_compare(t13, 8, t2, 8);
    if (t15 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng8)));
    t15 = xsi_vlog_unsigned_case_compare(t13, 8, t2, 8);
    if (t15 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng9)));
    t15 = xsi_vlog_unsigned_case_compare(t13, 8, t2, 8);
    if (t15 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng6)));
    t15 = xsi_vlog_unsigned_case_compare(t13, 8, t2, 8);
    if (t15 == 1)
        goto LAB23;

LAB24:
LAB25:    goto LAB8;

LAB11:    xsi_set_current_line(156, ng0);
    t16 = (t0 + 1208U);
    t17 = *((char **)t16);

LAB26:    t16 = ((char*)((ng2)));
    t18 = xsi_vlog_unsigned_case_compare(t17, 6, t16, 6);
    if (t18 == 1)
        goto LAB27;

LAB28:    t2 = ((char*)((ng4)));
    t15 = xsi_vlog_unsigned_case_compare(t17, 6, t2, 6);
    if (t15 == 1)
        goto LAB29;

LAB30:
LAB31:    goto LAB25;

LAB13:    xsi_set_current_line(184, ng0);

LAB34:    xsi_set_current_line(186, ng0);
    t3 = ((char*)((ng12)));
    t4 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(188, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(189, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(190, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB25;

LAB15:    xsi_set_current_line(197, ng0);

LAB35:    xsi_set_current_line(199, ng0);
    t3 = ((char*)((ng10)));
    t4 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 2, 0LL);
    xsi_set_current_line(200, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(201, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(203, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB25;

LAB17:    xsi_set_current_line(207, ng0);

LAB36:    xsi_set_current_line(209, ng0);
    t3 = ((char*)((ng12)));
    t4 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(210, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB25;

LAB19:    xsi_set_current_line(214, ng0);

LAB37:    xsi_set_current_line(216, ng0);
    t3 = ((char*)((ng11)));
    t4 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 2, 0LL);
    xsi_set_current_line(217, ng0);
    t2 = ((char*)((ng13)));
    t3 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(219, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(221, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 3688);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB25;

LAB21:    xsi_set_current_line(225, ng0);

LAB38:    xsi_set_current_line(227, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(228, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(229, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB25;

LAB23:    xsi_set_current_line(236, ng0);

LAB39:    xsi_set_current_line(238, ng0);
    t3 = ((char*)((ng13)));
    t4 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 2, 0LL);
    goto LAB25;

LAB27:    xsi_set_current_line(158, ng0);

LAB32:    xsi_set_current_line(160, ng0);
    t19 = ((char*)((ng10)));
    t20 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 2, 0LL);
    xsi_set_current_line(161, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(163, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(164, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(166, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 3688);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(167, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB31;

LAB29:    xsi_set_current_line(171, ng0);

LAB33:    xsi_set_current_line(173, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 2, 0LL);
    xsi_set_current_line(174, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB31;

}

static void Always_251_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;

LAB0:    t1 = (t0 + 5424U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(251, ng0);
    t2 = (t0 + 6024);
    *((int *)t2) = 1;
    t3 = (t0 + 5456);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(252, ng0);

LAB5:    xsi_set_current_line(254, ng0);
    t4 = (t0 + 1768);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB6;

LAB7:
LAB8:    xsi_set_current_line(257, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (~(t8));
    t10 = *((unsigned int *)t4);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB9;

LAB10:
LAB11:    xsi_set_current_line(260, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (~(t8));
    t10 = *((unsigned int *)t4);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB12;

LAB13:
LAB14:    xsi_set_current_line(263, ng0);
    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (~(t8));
    t10 = *((unsigned int *)t4);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB15;

LAB16:
LAB17:    xsi_set_current_line(266, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (~(t8));
    t10 = *((unsigned int *)t4);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB18;

LAB19:
LAB20:    xsi_set_current_line(269, ng0);
    t2 = (t0 + 3688);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (~(t8));
    t10 = *((unsigned int *)t4);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB21;

LAB22:
LAB23:    goto LAB2;

LAB6:    xsi_set_current_line(255, ng0);
    t13 = ((char*)((ng14)));
    t14 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t14, t13, 0, 0, 1, 0LL);
    goto LAB8;

LAB9:    xsi_set_current_line(258, ng0);
    t6 = ((char*)((ng14)));
    t7 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t7, t6, 0, 0, 1, 0LL);
    goto LAB11;

LAB12:    xsi_set_current_line(261, ng0);
    t6 = ((char*)((ng14)));
    t7 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t7, t6, 0, 0, 1, 0LL);
    goto LAB14;

LAB15:    xsi_set_current_line(264, ng0);
    t6 = ((char*)((ng14)));
    t7 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t7, t6, 0, 0, 1, 0LL);
    goto LAB17;

LAB18:    xsi_set_current_line(267, ng0);
    t6 = ((char*)((ng14)));
    t7 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t7, t6, 0, 0, 1, 0LL);
    goto LAB20;

LAB21:    xsi_set_current_line(270, ng0);
    t6 = ((char*)((ng14)));
    t7 = (t0 + 3688);
    xsi_vlogvar_wait_assign_value(t7, t6, 0, 0, 1, 0LL);
    goto LAB23;

}

static void Initial_277_3(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(278, ng0);

LAB2:    xsi_set_current_line(280, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 4008);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 8);
    xsi_set_current_line(282, ng0);
    t1 = ((char*)((ng14)));
    t2 = (t0 + 1768);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    xsi_set_current_line(283, ng0);
    t1 = ((char*)((ng14)));
    t2 = (t0 + 1928);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    xsi_set_current_line(284, ng0);
    t1 = ((char*)((ng14)));
    t2 = (t0 + 2088);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    xsi_set_current_line(286, ng0);
    t1 = ((char*)((ng14)));
    t2 = (t0 + 2248);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    xsi_set_current_line(287, ng0);
    t1 = ((char*)((ng14)));
    t2 = (t0 + 2408);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    xsi_set_current_line(289, ng0);
    t1 = ((char*)((ng14)));
    t2 = (t0 + 2568);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    xsi_set_current_line(290, ng0);
    t1 = ((char*)((ng14)));
    t2 = (t0 + 2728);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    xsi_set_current_line(292, ng0);
    t1 = ((char*)((ng10)));
    t2 = (t0 + 2888);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 2);
    xsi_set_current_line(293, ng0);
    t1 = ((char*)((ng10)));
    t2 = (t0 + 3048);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 2);
    xsi_set_current_line(295, ng0);
    t1 = ((char*)((ng14)));
    t2 = (t0 + 3208);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 4);
    xsi_set_current_line(297, ng0);
    t1 = ((char*)((ng13)));
    t2 = (t0 + 3368);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 2);
    xsi_set_current_line(298, ng0);
    t1 = ((char*)((ng13)));
    t2 = (t0 + 3528);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 2);
    xsi_set_current_line(300, ng0);
    t1 = ((char*)((ng14)));
    t2 = (t0 + 3688);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    xsi_set_current_line(302, ng0);
    t1 = ((char*)((ng14)));
    t2 = (t0 + 3848);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);

LAB1:    return;
}


extern void work_m_00000000002506486667_1938225339_init()
{
	static char *pe[] = {(void *)Always_114_0,(void *)Always_148_1,(void *)Always_251_2,(void *)Initial_277_3};
	xsi_register_didat("work_m_00000000002506486667_1938225339", "isim/testCPU_isim_beh.exe.sim/work/m_00000000002506486667_1938225339.didat");
	xsi_register_executes(pe);
}
