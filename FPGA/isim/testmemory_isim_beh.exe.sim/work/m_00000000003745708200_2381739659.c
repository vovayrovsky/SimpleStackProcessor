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
static const char *ng0 = "C:/Users/KekKuLe/Desktop/temp/Code/SSP/SimpleStackProcessor/FPGA/memory.v";
static unsigned int ng1[] = {2U, 0U};
static int ng2[] = {0, 0};
static int ng3[] = {1, 0};
static unsigned int ng4[] = {4096U, 0U};
static const char *ng5 = "P:/input.mem";



static void Cont_22_0(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;

LAB0:    t1 = (t0 + 3784U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(22, ng0);
    t2 = (t0 + 2544);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t0 + 2544);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 2544);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng1)));
    xsi_vlog_generic_get_array_select_value(t5, 16, t4, t8, t11, 2, 1, t12, 16, 2);
    t13 = (t0 + 4696);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memset(t17, 0, 8);
    t18 = 65535U;
    t19 = t18;
    t20 = (t5 + 4);
    t21 = *((unsigned int *)t5);
    t18 = (t18 & t21);
    t22 = *((unsigned int *)t20);
    t19 = (t19 & t22);
    t23 = (t17 + 4);
    t24 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t24 | t18);
    t25 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t25 | t19);
    xsi_driver_vfirst_trans(t13, 0, 15);
    t26 = (t0 + 4600);
    *((int *)t26) = 1;

LAB1:    return;
}

static void Always_24_1(char *t0)
{
    char t13[8];
    char t14[8];
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
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    unsigned int t23;
    int t24;
    char *t25;
    unsigned int t26;
    int t27;
    int t28;
    unsigned int t29;
    unsigned int t30;
    int t31;
    int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;

LAB0:    t1 = (t0 + 4032U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(24, ng0);
    t2 = (t0 + 4616);
    *((int *)t2) = 1;
    t3 = (t0 + 4064);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(25, ng0);

LAB5:    xsi_set_current_line(27, ng0);
    t4 = (t0 + 1344U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(37, ng0);
    t2 = (t0 + 1504U);
    t3 = *((char **)t2);
    t2 = (t0 + 2704);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memset(t13, 0, 8);
    t11 = (t3 + 4);
    t12 = (t5 + 4);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t5);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t11);
    t10 = *((unsigned int *)t12);
    t23 = (t9 ^ t10);
    t26 = (t8 | t23);
    t29 = *((unsigned int *)t11);
    t30 = *((unsigned int *)t12);
    t33 = (t29 | t30);
    t34 = (~(t33));
    t35 = (t26 & t34);
    if (t35 != 0)
        goto LAB13;

LAB12:    if (t33 != 0)
        goto LAB14;

LAB15:    t16 = (t13 + 4);
    t36 = *((unsigned int *)t16);
    t37 = (~(t36));
    t38 = *((unsigned int *)t13);
    t39 = (t38 & t37);
    t40 = (t39 != 0);
    if (t40 > 0)
        goto LAB16;

LAB17:
LAB18:
LAB8:    xsi_set_current_line(46, ng0);
    t2 = (t0 + 2384);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t13, 0, 8);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (~(t6));
    t8 = *((unsigned int *)t4);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB23;

LAB21:    if (*((unsigned int *)t5) == 0)
        goto LAB20;

LAB22:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;

LAB23:    t12 = (t13 + 4);
    t23 = *((unsigned int *)t12);
    t26 = (~(t23));
    t29 = *((unsigned int *)t13);
    t30 = (t29 & t26);
    t33 = (t30 != 0);
    if (t33 > 0)
        goto LAB24;

LAB25:
LAB26:    goto LAB2;

LAB6:    xsi_set_current_line(28, ng0);

LAB9:    xsi_set_current_line(30, ng0);
    t11 = (t0 + 1664U);
    t12 = *((char **)t11);
    t11 = (t0 + 2544);
    t15 = (t0 + 2544);
    t16 = (t15 + 72U);
    t17 = *((char **)t16);
    t18 = (t0 + 2544);
    t19 = (t18 + 64U);
    t20 = *((char **)t19);
    t21 = (t0 + 1504U);
    t22 = *((char **)t21);
    xsi_vlog_generic_convert_array_indices(t13, t14, t17, t20, 2, 1, t22, 16, 2);
    t21 = (t13 + 4);
    t23 = *((unsigned int *)t21);
    t24 = (!(t23));
    t25 = (t14 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (!(t26));
    t28 = (t24 && t27);
    if (t28 == 1)
        goto LAB10;

LAB11:    xsi_set_current_line(31, ng0);
    t2 = (t0 + 1664U);
    t3 = *((char **)t2);
    t2 = (t0 + 2224);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 16, 0LL);
    xsi_set_current_line(32, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2384);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(34, ng0);
    t2 = (t0 + 1504U);
    t3 = *((char **)t2);
    t2 = (t0 + 2704);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 16, 0LL);
    goto LAB8;

LAB10:    t29 = *((unsigned int *)t13);
    t30 = *((unsigned int *)t14);
    t31 = (t29 - t30);
    t32 = (t31 + 1);
    xsi_vlogvar_wait_assign_value(t11, t12, 0, *((unsigned int *)t14), t32, 0LL);
    goto LAB11;

LAB13:    *((unsigned int *)t13) = 1;
    goto LAB15;

LAB14:    t15 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB15;

LAB16:    xsi_set_current_line(38, ng0);

LAB19:    xsi_set_current_line(40, ng0);
    t17 = (t0 + 2544);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    t20 = (t0 + 2544);
    t21 = (t20 + 72U);
    t22 = *((char **)t21);
    t25 = (t0 + 2544);
    t41 = (t25 + 64U);
    t42 = *((char **)t41);
    t43 = (t0 + 1504U);
    t44 = *((char **)t43);
    xsi_vlog_generic_get_array_select_value(t14, 16, t19, t22, t42, 2, 1, t44, 16, 2);
    t43 = (t0 + 2224);
    xsi_vlogvar_wait_assign_value(t43, t14, 0, 0, 16, 0LL);
    xsi_set_current_line(41, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2384);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(42, ng0);
    t2 = (t0 + 1504U);
    t3 = *((char **)t2);
    t2 = (t0 + 2704);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 16, 0LL);
    goto LAB18;

LAB20:    *((unsigned int *)t13) = 1;
    goto LAB23;

LAB24:    xsi_set_current_line(47, ng0);
    t15 = ((char*)((ng3)));
    t16 = (t0 + 2384);
    xsi_vlogvar_wait_assign_value(t16, t15, 0, 0, 1, 0LL);
    goto LAB26;

}

static void Initial_53_2(char *t0)
{
    char t5[8];
    char t17[8];
    char t18[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    char *t16;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    unsigned int t29;
    int t30;
    char *t31;
    unsigned int t32;
    int t33;
    int t34;
    unsigned int t35;
    unsigned int t36;
    int t37;
    int t38;

LAB0:    xsi_set_current_line(54, ng0);

LAB2:    xsi_set_current_line(56, ng0);
    xsi_set_current_line(56, ng0);
    t1 = ((char*)((ng2)));
    t2 = (t0 + 2864);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);

LAB3:    t1 = (t0 + 2864);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng4)));
    memset(t5, 0, 8);
    t6 = (t3 + 4);
    if (*((unsigned int *)t6) != 0)
        goto LAB5;

LAB4:    t7 = (t4 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB5;

LAB8:    if (*((unsigned int *)t3) < *((unsigned int *)t4))
        goto LAB6;

LAB7:    t9 = (t5 + 4);
    t10 = *((unsigned int *)t9);
    t11 = (~(t10));
    t12 = *((unsigned int *)t5);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB9;

LAB10:    xsi_set_current_line(59, ng0);
    t1 = (t0 + 2544);
    xsi_vlogfile_readmemh(ng5, 0, t1, 0, 0, 0, 0);
    xsi_set_current_line(61, ng0);
    t1 = (t0 + 2544);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t0 + 2544);
    t6 = (t4 + 72U);
    t7 = *((char **)t6);
    t8 = (t0 + 2544);
    t9 = (t8 + 64U);
    t15 = *((char **)t9);
    t16 = ((char*)((ng2)));
    xsi_vlog_generic_get_array_select_value(t5, 16, t3, t7, t15, 2, 1, t16, 32, 1);
    t19 = (t0 + 2224);
    xsi_vlogvar_assign_value(t19, t5, 0, 0, 16);
    xsi_set_current_line(62, ng0);
    t1 = ((char*)((ng2)));
    t2 = (t0 + 2704);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 16);
    xsi_set_current_line(63, ng0);
    t1 = ((char*)((ng2)));
    t2 = (t0 + 2384);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);

LAB1:    return;
LAB5:    t8 = (t5 + 4);
    *((unsigned int *)t5) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB7;

LAB6:    *((unsigned int *)t5) = 1;
    goto LAB7;

LAB9:    xsi_set_current_line(57, ng0);
    t15 = ((char*)((ng2)));
    t16 = (t0 + 2544);
    t19 = (t0 + 2544);
    t20 = (t19 + 72U);
    t21 = *((char **)t20);
    t22 = (t0 + 2544);
    t23 = (t22 + 64U);
    t24 = *((char **)t23);
    t25 = (t0 + 2864);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    xsi_vlog_generic_convert_array_indices(t17, t18, t21, t24, 2, 1, t27, 32, 1);
    t28 = (t17 + 4);
    t29 = *((unsigned int *)t28);
    t30 = (!(t29));
    t31 = (t18 + 4);
    t32 = *((unsigned int *)t31);
    t33 = (!(t32));
    t34 = (t30 && t33);
    if (t34 == 1)
        goto LAB11;

LAB12:    xsi_set_current_line(56, ng0);
    t1 = (t0 + 2864);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng3)));
    memset(t5, 0, 8);
    xsi_vlog_signed_add(t5, 32, t3, 32, t4, 32);
    t6 = (t0 + 2864);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 32);
    goto LAB3;

LAB11:    t35 = *((unsigned int *)t17);
    t36 = *((unsigned int *)t18);
    t37 = (t35 - t36);
    t38 = (t37 + 1);
    xsi_vlogvar_assign_value(t16, t15, 0, *((unsigned int *)t18), t38);
    goto LAB12;

}


extern void work_m_00000000003745708200_2381739659_init()
{
	static char *pe[] = {(void *)Cont_22_0,(void *)Always_24_1,(void *)Initial_53_2};
	xsi_register_didat("work_m_00000000003745708200_2381739659", "isim/testmemory_isim_beh.exe.sim/work/m_00000000003745708200_2381739659.didat");
	xsi_register_executes(pe);
}
