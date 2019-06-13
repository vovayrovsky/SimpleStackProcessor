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
static unsigned int ng6[] = {63U, 0U};
static unsigned int ng7[] = {255U, 0U};
static unsigned int ng8[] = {3U, 0U};
static unsigned int ng9[] = {21U, 0U};
static unsigned int ng10[] = {14U, 0U};
static unsigned int ng11[] = {18U, 0U};
static unsigned int ng12[] = {19U, 0U};
static unsigned int ng13[] = {20U, 0U};
static unsigned int ng14[] = {22U, 0U};
static unsigned int ng15[] = {23U, 0U};
static unsigned int ng16[] = {24U, 0U};
static unsigned int ng17[] = {1U, 0U};
static int ng18[] = {1, 0};
static int ng19[] = {0, 0};
static unsigned int ng20[] = {2U, 0U};



static void Always_121_0(char *t0)
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

LAB2:    xsi_set_current_line(121, ng0);
    t2 = (t0 + 5744);
    *((int *)t2) = 1;
    t3 = (t0 + 4960);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(122, ng0);

LAB5:    xsi_set_current_line(124, ng0);
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

LAB6:    xsi_set_current_line(125, ng0);

LAB9:    xsi_set_current_line(127, ng0);
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

LAB16:    t2 = ((char*)((ng11)));
    t15 = xsi_vlog_unsigned_case_compare(t13, 8, t2, 8);
    if (t15 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng12)));
    t15 = xsi_vlog_unsigned_case_compare(t13, 8, t2, 8);
    if (t15 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng13)));
    t15 = xsi_vlog_unsigned_case_compare(t13, 8, t2, 8);
    if (t15 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng9)));
    t15 = xsi_vlog_unsigned_case_compare(t13, 8, t2, 8);
    if (t15 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng14)));
    t15 = xsi_vlog_unsigned_case_compare(t13, 8, t2, 8);
    if (t15 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng15)));
    t15 = xsi_vlog_unsigned_case_compare(t13, 8, t2, 8);
    if (t15 == 1)
        goto LAB27;

LAB28:    t2 = ((char*)((ng16)));
    t15 = xsi_vlog_unsigned_case_compare(t13, 8, t2, 8);
    if (t15 == 1)
        goto LAB29;

LAB30:    t2 = ((char*)((ng10)));
    t15 = xsi_vlog_unsigned_case_compare(t13, 8, t2, 8);
    if (t15 == 1)
        goto LAB31;

LAB32:    t2 = ((char*)((ng7)));
    t15 = xsi_vlog_unsigned_case_compare(t13, 8, t2, 8);
    if (t15 == 1)
        goto LAB33;

LAB34:
LAB36:
LAB35:    xsi_set_current_line(154, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 4008);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);

LAB37:    goto LAB8;

LAB11:    xsi_set_current_line(129, ng0);
    t16 = (t0 + 1208U);
    t17 = *((char **)t16);

LAB38:    t16 = ((char*)((ng2)));
    t18 = xsi_vlog_unsigned_case_compare(t17, 6, t16, 6);
    if (t18 == 1)
        goto LAB39;

LAB40:    t2 = ((char*)((ng4)));
    t15 = xsi_vlog_unsigned_case_compare(t17, 6, t2, 6);
    if (t15 == 1)
        goto LAB41;

LAB42:    t2 = ((char*)((ng6)));
    t15 = xsi_vlog_unsigned_case_compare(t17, 6, t2, 6);
    if (t15 == 1)
        goto LAB43;

LAB44:    t2 = ((char*)((ng8)));
    t15 = xsi_vlog_unsigned_case_compare(t17, 6, t2, 6);
    if (t15 == 1)
        goto LAB45;

LAB46:
LAB47:    goto LAB37;

LAB13:    xsi_set_current_line(138, ng0);
    t3 = ((char*)((ng10)));
    t4 = (t0 + 4008);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 8, 0LL);
    goto LAB37;

LAB15:    xsi_set_current_line(140, ng0);
    t3 = ((char*)((ng11)));
    t4 = (t0 + 4008);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 8, 0LL);
    goto LAB37;

LAB17:    xsi_set_current_line(141, ng0);
    t3 = ((char*)((ng12)));
    t4 = (t0 + 4008);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 8, 0LL);
    goto LAB37;

LAB19:    xsi_set_current_line(142, ng0);
    t3 = ((char*)((ng13)));
    t4 = (t0 + 4008);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 8, 0LL);
    goto LAB37;

LAB21:    xsi_set_current_line(143, ng0);
    t3 = ((char*)((ng10)));
    t4 = (t0 + 4008);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 8, 0LL);
    goto LAB37;

LAB23:    xsi_set_current_line(145, ng0);
    t3 = ((char*)((ng14)));
    t4 = (t0 + 4008);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 8, 0LL);
    goto LAB37;

LAB25:    xsi_set_current_line(146, ng0);
    t3 = ((char*)((ng15)));
    t4 = (t0 + 4008);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 8, 0LL);
    goto LAB37;

LAB27:    xsi_set_current_line(147, ng0);
    t3 = ((char*)((ng16)));
    t4 = (t0 + 4008);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 8, 0LL);
    goto LAB37;

LAB29:    xsi_set_current_line(148, ng0);
    t3 = ((char*)((ng10)));
    t4 = (t0 + 4008);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 8, 0LL);
    goto LAB37;

LAB31:    xsi_set_current_line(150, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 4008);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 8, 0LL);
    goto LAB37;

LAB33:    xsi_set_current_line(152, ng0);
    t3 = ((char*)((ng7)));
    t4 = (t0 + 4008);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 8, 0LL);
    goto LAB37;

LAB39:    xsi_set_current_line(131, ng0);
    t19 = ((char*)((ng3)));
    t20 = (t0 + 4008);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 8, 0LL);
    goto LAB47;

LAB41:    xsi_set_current_line(132, ng0);
    t3 = ((char*)((ng5)));
    t4 = (t0 + 4008);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 8, 0LL);
    goto LAB47;

LAB43:    xsi_set_current_line(133, ng0);
    t3 = ((char*)((ng7)));
    t4 = (t0 + 4008);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 8, 0LL);
    goto LAB47;

LAB45:    xsi_set_current_line(134, ng0);
    t3 = ((char*)((ng9)));
    t4 = (t0 + 4008);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 8, 0LL);
    goto LAB47;

}

static void Always_165_1(char *t0)
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

LAB2:    xsi_set_current_line(165, ng0);
    t2 = (t0 + 5760);
    *((int *)t2) = 1;
    t3 = (t0 + 5208);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(166, ng0);

LAB5:    xsi_set_current_line(168, ng0);
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

LAB7:    xsi_set_current_line(396, ng0);

LAB58:    xsi_set_current_line(398, ng0);
    t2 = ((char*)((ng19)));
    t3 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(399, ng0);
    t2 = ((char*)((ng19)));
    t3 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(400, ng0);
    t2 = ((char*)((ng19)));
    t3 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(401, ng0);
    t2 = ((char*)((ng19)));
    t3 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(402, ng0);
    t2 = ((char*)((ng19)));
    t3 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(403, ng0);
    t2 = ((char*)((ng19)));
    t3 = (t0 + 3688);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(169, ng0);

LAB9:    xsi_set_current_line(171, ng0);
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

LAB16:    t2 = ((char*)((ng11)));
    t15 = xsi_vlog_unsigned_case_compare(t13, 8, t2, 8);
    if (t15 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng12)));
    t15 = xsi_vlog_unsigned_case_compare(t13, 8, t2, 8);
    if (t15 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng13)));
    t15 = xsi_vlog_unsigned_case_compare(t13, 8, t2, 8);
    if (t15 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng9)));
    t15 = xsi_vlog_unsigned_case_compare(t13, 8, t2, 8);
    if (t15 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng14)));
    t15 = xsi_vlog_unsigned_case_compare(t13, 8, t2, 8);
    if (t15 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng15)));
    t15 = xsi_vlog_unsigned_case_compare(t13, 8, t2, 8);
    if (t15 == 1)
        goto LAB27;

LAB28:    t2 = ((char*)((ng16)));
    t15 = xsi_vlog_unsigned_case_compare(t13, 8, t2, 8);
    if (t15 == 1)
        goto LAB29;

LAB30:    t2 = ((char*)((ng10)));
    t15 = xsi_vlog_unsigned_case_compare(t13, 8, t2, 8);
    if (t15 == 1)
        goto LAB31;

LAB32:    t2 = ((char*)((ng7)));
    t15 = xsi_vlog_unsigned_case_compare(t13, 8, t2, 8);
    if (t15 == 1)
        goto LAB33;

LAB34:
LAB35:    goto LAB8;

LAB11:    xsi_set_current_line(173, ng0);
    t16 = (t0 + 1208U);
    t17 = *((char **)t16);

LAB36:    t16 = ((char*)((ng2)));
    t18 = xsi_vlog_unsigned_case_compare(t17, 6, t16, 6);
    if (t18 == 1)
        goto LAB37;

LAB38:    t2 = ((char*)((ng4)));
    t15 = xsi_vlog_unsigned_case_compare(t17, 6, t2, 6);
    if (t15 == 1)
        goto LAB39;

LAB40:    t2 = ((char*)((ng8)));
    t15 = xsi_vlog_unsigned_case_compare(t17, 6, t2, 6);
    if (t15 == 1)
        goto LAB41;

LAB42:
LAB43:    goto LAB35;

LAB13:    xsi_set_current_line(225, ng0);

LAB47:    xsi_set_current_line(227, ng0);
    t3 = ((char*)((ng18)));
    t4 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(229, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(230, ng0);
    t2 = ((char*)((ng17)));
    t3 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(231, ng0);
    t2 = ((char*)((ng18)));
    t3 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(233, ng0);
    t2 = ((char*)((ng19)));
    t3 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(234, ng0);
    t2 = ((char*)((ng19)));
    t3 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(235, ng0);
    t2 = ((char*)((ng19)));
    t3 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(236, ng0);
    t2 = ((char*)((ng19)));
    t3 = (t0 + 3688);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB35;

LAB15:    xsi_set_current_line(243, ng0);

LAB48:    xsi_set_current_line(245, ng0);
    t3 = ((char*)((ng17)));
    t4 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 2, 0LL);
    xsi_set_current_line(246, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(247, ng0);
    t2 = ((char*)((ng17)));
    t3 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(249, ng0);
    t2 = ((char*)((ng18)));
    t3 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(251, ng0);
    t2 = ((char*)((ng19)));
    t3 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(252, ng0);
    t2 = ((char*)((ng19)));
    t3 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(253, ng0);
    t2 = ((char*)((ng19)));
    t3 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(254, ng0);
    t2 = ((char*)((ng19)));
    t3 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(255, ng0);
    t2 = ((char*)((ng19)));
    t3 = (t0 + 3688);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB35;

LAB17:    xsi_set_current_line(259, ng0);

LAB49:    xsi_set_current_line(261, ng0);
    t3 = ((char*)((ng18)));
    t4 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(262, ng0);
    t2 = ((char*)((ng18)));
    t3 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(264, ng0);
    t2 = ((char*)((ng19)));
    t3 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(265, ng0);
    t2 = ((char*)((ng19)));
    t3 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(266, ng0);
    t2 = ((char*)((ng19)));
    t3 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(267, ng0);
    t2 = ((char*)((ng19)));
    t3 = (t0 + 3688);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB35;

LAB19:    xsi_set_current_line(271, ng0);

LAB50:    xsi_set_current_line(273, ng0);
    t3 = ((char*)((ng8)));
    t4 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 2, 0LL);
    xsi_set_current_line(274, ng0);
    t2 = ((char*)((ng20)));
    t3 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(276, ng0);
    t2 = ((char*)((ng18)));
    t3 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(278, ng0);
    t2 = ((char*)((ng18)));
    t3 = (t0 + 3688);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(280, ng0);
    t2 = ((char*)((ng19)));
    t3 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(281, ng0);
    t2 = ((char*)((ng19)));
    t3 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(282, ng0);
    t2 = ((char*)((ng19)));
    t3 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(283, ng0);
    t2 = ((char*)((ng19)));
    t3 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(284, ng0);
    t2 = ((char*)((ng19)));
    t3 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB35;

LAB21:    xsi_set_current_line(288, ng0);

LAB51:    xsi_set_current_line(290, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(291, ng0);
    t2 = ((char*)((ng17)));
    t3 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(292, ng0);
    t2 = ((char*)((ng18)));
    t3 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(294, ng0);
    t2 = ((char*)((ng19)));
    t3 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(295, ng0);
    t2 = ((char*)((ng19)));
    t3 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(296, ng0);
    t2 = ((char*)((ng19)));
    t3 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(297, ng0);
    t2 = ((char*)((ng19)));
    t3 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(298, ng0);
    t2 = ((char*)((ng19)));
    t3 = (t0 + 3688);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB35;

LAB23:    xsi_set_current_line(305, ng0);

LAB52:    xsi_set_current_line(307, ng0);
    t3 = ((char*)((ng17)));
    t4 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 2, 0LL);
    xsi_set_current_line(308, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(310, ng0);
    t2 = ((char*)((ng19)));
    t3 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(311, ng0);
    t2 = ((char*)((ng18)));
    t3 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(312, ng0);
    t2 = ((char*)((ng19)));
    t3 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(313, ng0);
    t2 = ((char*)((ng19)));
    t3 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(314, ng0);
    t2 = ((char*)((ng19)));
    t3 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(315, ng0);
    t2 = ((char*)((ng19)));
    t3 = (t0 + 3688);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB35;

LAB25:    xsi_set_current_line(319, ng0);

LAB53:    xsi_set_current_line(321, ng0);
    t3 = ((char*)((ng20)));
    t4 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 2, 0LL);
    xsi_set_current_line(323, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(325, ng0);
    t2 = ((char*)((ng19)));
    t3 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(326, ng0);
    t2 = ((char*)((ng19)));
    t3 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(327, ng0);
    t2 = ((char*)((ng18)));
    t3 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(328, ng0);
    t2 = ((char*)((ng19)));
    t3 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(329, ng0);
    t2 = ((char*)((ng19)));
    t3 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(330, ng0);
    t2 = ((char*)((ng18)));
    t3 = (t0 + 3688);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB35;

LAB27:    xsi_set_current_line(334, ng0);

LAB54:    xsi_set_current_line(336, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 2, 0LL);
    xsi_set_current_line(338, ng0);
    t2 = ((char*)((ng17)));
    t3 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(340, ng0);
    t2 = ((char*)((ng19)));
    t3 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(341, ng0);
    t2 = ((char*)((ng19)));
    t3 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(342, ng0);
    t2 = ((char*)((ng19)));
    t3 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(343, ng0);
    t2 = ((char*)((ng19)));
    t3 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(344, ng0);
    t2 = ((char*)((ng19)));
    t3 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(345, ng0);
    t2 = ((char*)((ng18)));
    t3 = (t0 + 3688);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB35;

LAB29:    xsi_set_current_line(349, ng0);

LAB55:    xsi_set_current_line(351, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(352, ng0);
    t2 = ((char*)((ng17)));
    t3 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(353, ng0);
    t2 = ((char*)((ng18)));
    t3 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(355, ng0);
    t2 = ((char*)((ng19)));
    t3 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(356, ng0);
    t2 = ((char*)((ng19)));
    t3 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(357, ng0);
    t2 = ((char*)((ng19)));
    t3 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(358, ng0);
    t2 = ((char*)((ng19)));
    t3 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(359, ng0);
    t2 = ((char*)((ng19)));
    t3 = (t0 + 3688);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB35;

LAB31:    xsi_set_current_line(366, ng0);

LAB56:    xsi_set_current_line(368, ng0);
    t3 = ((char*)((ng20)));
    t4 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 2, 0LL);
    xsi_set_current_line(370, ng0);
    t2 = ((char*)((ng19)));
    t3 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(371, ng0);
    t2 = ((char*)((ng19)));
    t3 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(372, ng0);
    t2 = ((char*)((ng19)));
    t3 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(373, ng0);
    t2 = ((char*)((ng19)));
    t3 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(374, ng0);
    t2 = ((char*)((ng19)));
    t3 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(375, ng0);
    t2 = ((char*)((ng19)));
    t3 = (t0 + 3688);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB35;

LAB33:    xsi_set_current_line(379, ng0);

LAB57:    xsi_set_current_line(381, ng0);
    t3 = ((char*)((ng18)));
    t4 = (t0 + 3848);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(383, ng0);
    t2 = ((char*)((ng19)));
    t3 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(384, ng0);
    t2 = ((char*)((ng19)));
    t3 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(385, ng0);
    t2 = ((char*)((ng19)));
    t3 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(386, ng0);
    t2 = ((char*)((ng19)));
    t3 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(387, ng0);
    t2 = ((char*)((ng19)));
    t3 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(388, ng0);
    t2 = ((char*)((ng19)));
    t3 = (t0 + 3688);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB35;

LAB37:    xsi_set_current_line(175, ng0);

LAB44:    xsi_set_current_line(177, ng0);
    t19 = ((char*)((ng17)));
    t20 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 2, 0LL);
    xsi_set_current_line(178, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(180, ng0);
    t2 = ((char*)((ng17)));
    t3 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(181, ng0);
    t2 = ((char*)((ng17)));
    t3 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(183, ng0);
    t2 = ((char*)((ng18)));
    t3 = (t0 + 3688);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(185, ng0);
    t2 = ((char*)((ng19)));
    t3 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(186, ng0);
    t2 = ((char*)((ng19)));
    t3 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(187, ng0);
    t2 = ((char*)((ng19)));
    t3 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(188, ng0);
    t2 = ((char*)((ng19)));
    t3 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(189, ng0);
    t2 = ((char*)((ng19)));
    t3 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB43;

LAB39:    xsi_set_current_line(193, ng0);

LAB45:    xsi_set_current_line(195, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 2, 0LL);
    xsi_set_current_line(197, ng0);
    t2 = ((char*)((ng19)));
    t3 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(198, ng0);
    t2 = ((char*)((ng19)));
    t3 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(199, ng0);
    t2 = ((char*)((ng19)));
    t3 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(200, ng0);
    t2 = ((char*)((ng19)));
    t3 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(201, ng0);
    t2 = ((char*)((ng19)));
    t3 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(202, ng0);
    t2 = ((char*)((ng19)));
    t3 = (t0 + 3688);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB43;

LAB41:    xsi_set_current_line(206, ng0);

LAB46:    xsi_set_current_line(208, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 2, 0LL);
    xsi_set_current_line(210, ng0);
    t2 = ((char*)((ng19)));
    t3 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(211, ng0);
    t2 = ((char*)((ng19)));
    t3 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(212, ng0);
    t2 = ((char*)((ng19)));
    t3 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(213, ng0);
    t2 = ((char*)((ng19)));
    t3 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(214, ng0);
    t2 = ((char*)((ng19)));
    t3 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(215, ng0);
    t2 = ((char*)((ng19)));
    t3 = (t0 + 3688);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB43;

}

static void Initial_440_2(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(441, ng0);

LAB2:    xsi_set_current_line(443, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 4008);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 8);
    xsi_set_current_line(445, ng0);
    t1 = ((char*)((ng19)));
    t2 = (t0 + 1768);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    xsi_set_current_line(446, ng0);
    t1 = ((char*)((ng19)));
    t2 = (t0 + 1928);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    xsi_set_current_line(447, ng0);
    t1 = ((char*)((ng19)));
    t2 = (t0 + 2088);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    xsi_set_current_line(449, ng0);
    t1 = ((char*)((ng19)));
    t2 = (t0 + 2248);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    xsi_set_current_line(450, ng0);
    t1 = ((char*)((ng19)));
    t2 = (t0 + 2408);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    xsi_set_current_line(452, ng0);
    t1 = ((char*)((ng19)));
    t2 = (t0 + 2568);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    xsi_set_current_line(453, ng0);
    t1 = ((char*)((ng19)));
    t2 = (t0 + 2728);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    xsi_set_current_line(455, ng0);
    t1 = ((char*)((ng17)));
    t2 = (t0 + 2888);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 2);
    xsi_set_current_line(456, ng0);
    t1 = ((char*)((ng17)));
    t2 = (t0 + 3048);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 2);
    xsi_set_current_line(458, ng0);
    t1 = ((char*)((ng19)));
    t2 = (t0 + 3208);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 4);
    xsi_set_current_line(460, ng0);
    t1 = ((char*)((ng20)));
    t2 = (t0 + 3368);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 2);
    xsi_set_current_line(461, ng0);
    t1 = ((char*)((ng20)));
    t2 = (t0 + 3528);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 2);
    xsi_set_current_line(463, ng0);
    t1 = ((char*)((ng19)));
    t2 = (t0 + 3688);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    xsi_set_current_line(465, ng0);
    t1 = ((char*)((ng19)));
    t2 = (t0 + 3848);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);

LAB1:    return;
}


extern void work_m_00000000002506486667_1938225339_init()
{
	static char *pe[] = {(void *)Always_121_0,(void *)Always_165_1,(void *)Initial_440_2};
	xsi_register_didat("work_m_00000000002506486667_1938225339", "isim/testtop_isim_beh.exe.sim/work/m_00000000002506486667_1938225339.didat");
	xsi_register_executes(pe);
}
