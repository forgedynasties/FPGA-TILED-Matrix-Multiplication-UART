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
static const char *ng0 = "//VBoxSvr/Shared/DSD/Project_Rec_Done_Tran/Baud_Rate_Generator.v";
static unsigned int ng1[] = {0U, 0U};
static int ng2[] = {100000000, 0};
static int ng3[] = {9600, 0};
static int ng4[] = {8, 0};
static unsigned int ng5[] = {1U, 0U};
static int ng6[] = {19200, 0};
static unsigned int ng7[] = {2U, 0U};
static int ng8[] = {57600, 0};
static unsigned int ng9[] = {3U, 0U};
static int ng10[] = {115200, 0};
static int ng11[] = {0, 0};
static int ng12[] = {2, 0};
static int ng13[] = {1, 0};



static void Always_17_0(char *t0)
{
    char t10[8];
    char t11[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;
    char *t9;
    char *t12;

LAB0:    t1 = (t0 + 3328U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(17, ng0);
    t2 = (t0 + 4144);
    *((int *)t2) = 1;
    t3 = (t0 + 3360);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(17, ng0);

LAB5:    xsi_set_current_line(18, ng0);
    t4 = (t0 + 1368U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t4, 2);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng7)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng9)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t6 == 1)
        goto LAB13;

LAB14:
LAB16:
LAB15:    xsi_set_current_line(23, ng0);
    t2 = ((char*)((ng2)));
    t3 = ((char*)((ng3)));
    t4 = ((char*)((ng4)));
    memset(t10, 0, 8);
    xsi_vlog_signed_multiply(t10, 32, t3, 32, t4, 32);
    memset(t11, 0, 8);
    xsi_vlog_signed_divide(t11, 32, t2, 32, t10, 32);
    t7 = (t0 + 2088);
    xsi_vlogvar_assign_value(t7, t11, 0, 0, 16);

LAB17:    goto LAB2;

LAB7:    xsi_set_current_line(19, ng0);
    t7 = ((char*)((ng2)));
    t8 = ((char*)((ng3)));
    t9 = ((char*)((ng4)));
    memset(t10, 0, 8);
    xsi_vlog_signed_multiply(t10, 32, t8, 32, t9, 32);
    memset(t11, 0, 8);
    xsi_vlog_signed_divide(t11, 32, t7, 32, t10, 32);
    t12 = (t0 + 2088);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 16);
    goto LAB17;

LAB9:    xsi_set_current_line(20, ng0);
    t3 = ((char*)((ng2)));
    t4 = ((char*)((ng6)));
    t7 = ((char*)((ng4)));
    memset(t10, 0, 8);
    xsi_vlog_signed_multiply(t10, 32, t4, 32, t7, 32);
    memset(t11, 0, 8);
    xsi_vlog_signed_divide(t11, 32, t3, 32, t10, 32);
    t8 = (t0 + 2088);
    xsi_vlogvar_assign_value(t8, t11, 0, 0, 16);
    goto LAB17;

LAB11:    xsi_set_current_line(21, ng0);
    t3 = ((char*)((ng2)));
    t4 = ((char*)((ng8)));
    t7 = ((char*)((ng4)));
    memset(t10, 0, 8);
    xsi_vlog_signed_multiply(t10, 32, t4, 32, t7, 32);
    memset(t11, 0, 8);
    xsi_vlog_signed_divide(t11, 32, t3, 32, t10, 32);
    t8 = (t0 + 2088);
    xsi_vlogvar_assign_value(t8, t11, 0, 0, 16);
    goto LAB17;

LAB13:    xsi_set_current_line(22, ng0);
    t3 = ((char*)((ng2)));
    t4 = ((char*)((ng10)));
    t7 = ((char*)((ng4)));
    memset(t10, 0, 8);
    xsi_vlog_signed_multiply(t10, 32, t4, 32, t7, 32);
    memset(t11, 0, 8);
    xsi_vlog_signed_divide(t11, 32, t3, 32, t10, 32);
    t8 = (t0 + 2088);
    xsi_vlogvar_assign_value(t8, t11, 0, 0, 16);
    goto LAB17;

}

static void Always_28_1(char *t0)
{
    char t14[8];
    char t16[8];
    char t17[8];
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
    char *t15;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;

LAB0:    t1 = (t0 + 3576U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(28, ng0);
    t2 = (t0 + 4160);
    *((int *)t2) = 1;
    t3 = (t0 + 3608);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(28, ng0);

LAB5:    xsi_set_current_line(29, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(32, ng0);
    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2088);
    t11 = (t5 + 56U);
    t12 = *((char **)t11);
    t13 = ((char*)((ng12)));
    memset(t14, 0, 8);
    xsi_vlog_unsigned_divide(t14, 32, t12, 16, t13, 32);
    t15 = ((char*)((ng13)));
    memset(t16, 0, 8);
    xsi_vlog_unsigned_minus(t16, 32, t14, 32, t15, 32);
    memset(t17, 0, 8);
    t18 = (t4 + 4);
    if (*((unsigned int *)t18) != 0)
        goto LAB11;

LAB10:    t19 = (t16 + 4);
    if (*((unsigned int *)t19) != 0)
        goto LAB11;

LAB14:    if (*((unsigned int *)t4) < *((unsigned int *)t16))
        goto LAB13;

LAB12:    *((unsigned int *)t17) = 1;

LAB13:    t21 = (t17 + 4);
    t6 = *((unsigned int *)t21);
    t7 = (~(t6));
    t8 = *((unsigned int *)t17);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB15;

LAB16:    xsi_set_current_line(35, ng0);

LAB25:    xsi_set_current_line(36, ng0);
    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng13)));
    memset(t14, 0, 8);
    xsi_vlog_unsigned_add(t14, 32, t4, 16, t5, 32);
    t11 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t11, t14, 0, 0, 16, 0LL);

LAB17:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(29, ng0);

LAB9:    xsi_set_current_line(30, ng0);
    t11 = ((char*)((ng11)));
    t12 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 16, 0LL);
    xsi_set_current_line(31, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB8;

LAB11:    t20 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB13;

LAB15:    xsi_set_current_line(32, ng0);

LAB18:    xsi_set_current_line(33, ng0);
    t22 = ((char*)((ng11)));
    t23 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t23, t22, 0, 0, 16, 0LL);
    xsi_set_current_line(34, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t14, 0, 8);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (~(t6));
    t8 = *((unsigned int *)t4);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB22;

LAB20:    if (*((unsigned int *)t5) == 0)
        goto LAB19;

LAB21:    t11 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t11) = 1;

LAB22:    t12 = (t14 + 4);
    t13 = (t4 + 4);
    t24 = *((unsigned int *)t4);
    t25 = (~(t24));
    *((unsigned int *)t14) = t25;
    *((unsigned int *)t12) = 0;
    if (*((unsigned int *)t13) != 0)
        goto LAB24;

LAB23:    t30 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t30 & 1U);
    t31 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t31 & 1U);
    t15 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t15, t14, 0, 0, 1, 0LL);
    goto LAB17;

LAB19:    *((unsigned int *)t14) = 1;
    goto LAB22;

LAB24:    t26 = *((unsigned int *)t14);
    t27 = *((unsigned int *)t13);
    *((unsigned int *)t14) = (t26 | t27);
    t28 = *((unsigned int *)t12);
    t29 = *((unsigned int *)t13);
    *((unsigned int *)t12) = (t28 | t29);
    goto LAB23;

}

static void Always_41_2(char *t0)
{
    char t13[8];
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
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;

LAB0:    t1 = (t0 + 3824U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(41, ng0);
    t2 = (t0 + 4176);
    *((int *)t2) = 1;
    t3 = (t0 + 3856);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(41, ng0);

LAB5:    xsi_set_current_line(42, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(45, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng9)));
    memset(t13, 0, 8);
    t11 = (t4 + 4);
    t12 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t5);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t11);
    t10 = *((unsigned int *)t12);
    t14 = (t9 ^ t10);
    t15 = (t8 | t14);
    t16 = *((unsigned int *)t11);
    t17 = *((unsigned int *)t12);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB13;

LAB10:    if (t18 != 0)
        goto LAB12;

LAB11:    *((unsigned int *)t13) = 1;

LAB13:    t22 = (t13 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t13);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB14;

LAB15:    xsi_set_current_line(48, ng0);

LAB24:    xsi_set_current_line(49, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng13)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_add(t13, 32, t4, 3, t5, 32);
    t11 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t11, t13, 0, 0, 3, 0LL);

LAB16:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(42, ng0);

LAB9:    xsi_set_current_line(43, ng0);
    t11 = ((char*)((ng11)));
    t12 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 3, 0LL);
    xsi_set_current_line(44, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB8;

LAB12:    t21 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB13;

LAB14:    xsi_set_current_line(45, ng0);

LAB17:    xsi_set_current_line(46, ng0);
    t28 = ((char*)((ng11)));
    t29 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t29, t28, 0, 0, 3, 0LL);
    xsi_set_current_line(47, ng0);
    t2 = (t0 + 1768);
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
        goto LAB21;

LAB19:    if (*((unsigned int *)t5) == 0)
        goto LAB18;

LAB20:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;

LAB21:    t12 = (t13 + 4);
    t21 = (t4 + 4);
    t14 = *((unsigned int *)t4);
    t15 = (~(t14));
    *((unsigned int *)t13) = t15;
    *((unsigned int *)t12) = 0;
    if (*((unsigned int *)t21) != 0)
        goto LAB23;

LAB22:    t20 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t20 & 1U);
    t23 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t23 & 1U);
    t22 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t22, t13, 0, 0, 1, 0LL);
    goto LAB16;

LAB18:    *((unsigned int *)t13) = 1;
    goto LAB21;

LAB23:    t16 = *((unsigned int *)t13);
    t17 = *((unsigned int *)t21);
    *((unsigned int *)t13) = (t16 | t17);
    t18 = *((unsigned int *)t12);
    t19 = *((unsigned int *)t21);
    *((unsigned int *)t12) = (t18 | t19);
    goto LAB22;

}


extern void work_m_00000000000061179892_3553382713_init()
{
	static char *pe[] = {(void *)Always_17_0,(void *)Always_28_1,(void *)Always_41_2};
	xsi_register_didat("work_m_00000000000061179892_3553382713", "isim/tf_isim_beh.exe.sim/work/m_00000000000061179892_3553382713.didat");
	xsi_register_executes(pe);
}
