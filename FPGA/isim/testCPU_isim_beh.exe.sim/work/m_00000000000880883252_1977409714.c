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
static const char *ng0 = "C:/Users/KekKuLe/Desktop/temp/Code/SSP/SimpleStackProcessor/FPGA/sign.v";
static int ng1[] = {1, 0};



static void Always_10_0(char *t0)
{
    char t4[8];
    char t5[8];
    char t9[8];
    char t20[8];
    char *t1;
    char *t2;
    char *t3;
    char *t6;
    char *t7;
    char *t8;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    char *t27;

LAB0:    t1 = (t0 + 2528U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(10, ng0);
    t2 = (t0 + 2848);
    *((int *)t2) = 1;
    t3 = (t0 + 2560);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(11, ng0);

LAB5:    xsi_set_current_line(13, ng0);
    t6 = (t0 + 1208U);
    t7 = *((char **)t6);
    t6 = (t0 + 1048U);
    t8 = *((char **)t6);
    memset(t9, 0, 8);
    xsi_vlog_unsigned_add(t9, 16, t7, 16, t8, 1);
    memset(t5, 0, 8);
    t6 = (t9 + 4);
    t10 = *((unsigned int *)t6);
    t11 = (~(t10));
    t12 = *((unsigned int *)t9);
    t13 = (t12 & t11);
    t14 = (t13 & 65535U);
    if (t14 != 0)
        goto LAB6;

LAB7:    if (*((unsigned int *)t6) != 0)
        goto LAB8;

LAB9:    t16 = (t5 + 4);
    t17 = *((unsigned int *)t5);
    t18 = *((unsigned int *)t16);
    t19 = (t17 || t18);
    if (t19 > 0)
        goto LAB10;

LAB11:    t22 = *((unsigned int *)t5);
    t23 = (~(t22));
    t24 = *((unsigned int *)t16);
    t25 = (t23 || t24);
    if (t25 > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t16) > 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t5) > 0)
        goto LAB16;

LAB17:    memcpy(t4, t26, 8);

LAB18:    t27 = (t0 + 1608);
    xsi_vlogvar_assign_value(t27, t4, 0, 0, 16);
    goto LAB2;

LAB6:    *((unsigned int *)t5) = 1;
    goto LAB9;

LAB8:    t15 = (t5 + 4);
    *((unsigned int *)t5) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB9;

LAB10:    t21 = ((char*)((ng1)));
    memset(t20, 0, 8);
    xsi_vlog_signed_unary_minus(t20, 32, t21, 32);
    goto LAB11;

LAB12:    t26 = ((char*)((ng1)));
    goto LAB13;

LAB14:    xsi_vlog_unsigned_bit_combine(t4, 32, t20, 32, t26, 32);
    goto LAB18;

LAB16:    memcpy(t4, t20, 8);
    goto LAB18;

}


extern void work_m_00000000000880883252_1977409714_init()
{
	static char *pe[] = {(void *)Always_10_0};
	xsi_register_didat("work_m_00000000000880883252_1977409714", "isim/testCPU_isim_beh.exe.sim/work/m_00000000000880883252_1977409714.didat");
	xsi_register_executes(pe);
}
