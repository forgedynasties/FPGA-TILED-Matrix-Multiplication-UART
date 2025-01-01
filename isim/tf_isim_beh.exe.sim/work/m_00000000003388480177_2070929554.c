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
static const char *ng0 = "//VBoxSvr/Shared/DSD/Project_Rec_Done_Tran/Transmitter.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {2U, 0U};
static unsigned int ng4[] = {3U, 0U};
static unsigned int ng5[] = {4U, 0U};
static int ng6[] = {1, 0};
static unsigned int ng7[] = {1023U, 0U};
static int ng8[] = {0, 0};
static int ng9[] = {10, 0};



static void Always_35_0(char *t0)
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

LAB0:    t1 = (t0 + 4968U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(35, ng0);
    t2 = (t0 + 6280);
    *((int *)t2) = 1;
    t3 = (t0 + 5000);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(35, ng0);

LAB5:    xsi_set_current_line(36, ng0);
    t4 = (t0 + 2208U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(38, ng0);

LAB10:    xsi_set_current_line(39, ng0);
    t2 = (t0 + 3888);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3728);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 3, 0LL);

LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(36, ng0);

LAB9:    xsi_set_current_line(37, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 3728);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 3, 0LL);
    goto LAB8;

}

static void Always_44_1(char *t0)
{
    char t18[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    int t8;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    char *t17;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;

LAB0:    t1 = (t0 + 5216U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(44, ng0);
    t2 = (t0 + 6296);
    *((int *)t2) = 1;
    t3 = (t0 + 5248);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(44, ng0);

LAB5:    xsi_set_current_line(45, ng0);
    t4 = (t0 + 3728);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);

LAB6:    t7 = ((char*)((ng1)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t7, 3);
    if (t8 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng3)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng4)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng5)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB15;

LAB16:
LAB18:
LAB17:    xsi_set_current_line(64, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3888);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);

LAB19:    goto LAB2;

LAB7:    xsi_set_current_line(46, ng0);

LAB20:    xsi_set_current_line(47, ng0);
    t9 = (t0 + 2048U);
    t10 = *((char **)t9);
    t9 = (t10 + 4);
    t11 = *((unsigned int *)t9);
    t12 = (~(t11));
    t13 = *((unsigned int *)t10);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB21;

LAB22:    xsi_set_current_line(48, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3888);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);

LAB23:    goto LAB19;

LAB9:    xsi_set_current_line(50, ng0);

LAB24:    xsi_set_current_line(51, ng0);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 3888);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 3);
    goto LAB19;

LAB11:    xsi_set_current_line(53, ng0);

LAB25:    xsi_set_current_line(54, ng0);
    t3 = ((char*)((ng4)));
    t4 = (t0 + 3888);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 3);
    goto LAB19;

LAB13:    xsi_set_current_line(56, ng0);

LAB26:    xsi_set_current_line(57, ng0);
    t3 = (t0 + 4048);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t7 = (t5 + 4);
    t11 = *((unsigned int *)t7);
    t12 = (~(t11));
    t13 = *((unsigned int *)t5);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB27;

LAB28:    xsi_set_current_line(58, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 3888);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);

LAB29:    goto LAB19;

LAB15:    xsi_set_current_line(60, ng0);

LAB30:    xsi_set_current_line(61, ng0);
    t3 = (t0 + 4048);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    memset(t18, 0, 8);
    t7 = (t5 + 4);
    t11 = *((unsigned int *)t7);
    t12 = (~(t11));
    t13 = *((unsigned int *)t5);
    t14 = (t13 & t12);
    t15 = (t14 & 1U);
    if (t15 != 0)
        goto LAB34;

LAB32:    if (*((unsigned int *)t7) == 0)
        goto LAB31;

LAB33:    t9 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t9) = 1;

LAB34:    t10 = (t18 + 4);
    t19 = *((unsigned int *)t10);
    t20 = (~(t19));
    t21 = *((unsigned int *)t18);
    t22 = (t21 & t20);
    t23 = (t22 != 0);
    if (t23 > 0)
        goto LAB35;

LAB36:    xsi_set_current_line(62, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 3888);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);

LAB37:    goto LAB19;

LAB21:    xsi_set_current_line(47, ng0);
    t16 = ((char*)((ng2)));
    t17 = (t0 + 3888);
    xsi_vlogvar_assign_value(t17, t16, 0, 0, 3);
    goto LAB23;

LAB27:    xsi_set_current_line(57, ng0);
    t9 = ((char*)((ng5)));
    t10 = (t0 + 3888);
    xsi_vlogvar_assign_value(t10, t9, 0, 0, 3);
    goto LAB29;

LAB31:    *((unsigned int *)t18) = 1;
    goto LAB34;

LAB35:    xsi_set_current_line(61, ng0);
    t16 = ((char*)((ng1)));
    t17 = (t0 + 3888);
    xsi_vlogvar_assign_value(t17, t16, 0, 0, 3);
    goto LAB37;

}

static void Always_69_2(char *t0)
{
    char t16[8];
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
    int t13;
    char *t14;
    char *t15;

LAB0:    t1 = (t0 + 5464U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(69, ng0);
    t2 = (t0 + 6312);
    *((int *)t2) = 1;
    t3 = (t0 + 5496);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(69, ng0);

LAB5:    xsi_set_current_line(70, ng0);
    t4 = (t0 + 2208U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(73, ng0);

LAB10:    xsi_set_current_line(74, ng0);
    t2 = (t0 + 3728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);

LAB11:    t5 = ((char*)((ng1)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 3, t5, 3);
    if (t13 == 1)
        goto LAB12;

LAB13:    t2 = ((char*)((ng2)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t13 == 1)
        goto LAB14;

LAB15:    t2 = ((char*)((ng3)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t13 == 1)
        goto LAB16;

LAB17:
LAB18:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(70, ng0);

LAB9:    xsi_set_current_line(71, ng0);
    t11 = ((char*)((ng6)));
    t12 = (t0 + 3088);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 1, 0LL);
    xsi_set_current_line(72, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 3248);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 10, 0LL);
    goto LAB8;

LAB12:    xsi_set_current_line(75, ng0);

LAB19:    xsi_set_current_line(76, ng0);
    t11 = (t0 + 2048U);
    t12 = *((char **)t11);
    t11 = (t12 + 4);
    t6 = *((unsigned int *)t11);
    t7 = (~(t6));
    t8 = *((unsigned int *)t12);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB20;

LAB21:    xsi_set_current_line(79, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 3088);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB22:    goto LAB18;

LAB14:    xsi_set_current_line(81, ng0);

LAB23:    xsi_set_current_line(82, ng0);
    t3 = ((char*)((ng8)));
    t5 = (t0 + 3088);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(83, ng0);
    t2 = (t0 + 1728U);
    t3 = *((char **)t2);
    t2 = (t0 + 3568);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 8, 0LL);
    goto LAB18;

LAB16:    xsi_set_current_line(85, ng0);

LAB24:    xsi_set_current_line(86, ng0);
    t3 = ((char*)((ng1)));
    t5 = (t0 + 3568);
    t11 = (t5 + 56U);
    t12 = *((char **)t11);
    t14 = ((char*)((ng2)));
    xsi_vlogtype_concat(t16, 10, 10, 3U, t14, 1, t12, 8, t3, 1);
    t15 = (t0 + 3248);
    xsi_vlogvar_wait_assign_value(t15, t16, 0, 0, 10, 0LL);
    goto LAB18;

LAB20:    xsi_set_current_line(77, ng0);
    t14 = ((char*)((ng8)));
    t15 = (t0 + 3088);
    xsi_vlogvar_wait_assign_value(t15, t14, 0, 0, 1, 0LL);
    goto LAB22;

}

static void Always_93_3(char *t0)
{
    char t15[8];
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
    int t13;
    char *t14;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;

LAB0:    t1 = (t0 + 5712U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(93, ng0);
    t2 = (t0 + 6328);
    *((int *)t2) = 1;
    t3 = (t0 + 5744);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(93, ng0);

LAB5:    xsi_set_current_line(94, ng0);
    t4 = (t0 + 2208U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(98, ng0);

LAB10:    xsi_set_current_line(99, ng0);
    t2 = (t0 + 3728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);

LAB11:    t5 = ((char*)((ng4)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 3, t5, 3);
    if (t13 == 1)
        goto LAB12;

LAB13:    t2 = ((char*)((ng5)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t13 == 1)
        goto LAB14;

LAB15:
LAB16:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(94, ng0);

LAB9:    xsi_set_current_line(95, ng0);
    t11 = ((char*)((ng6)));
    t12 = (t0 + 2928);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 1, 0LL);
    xsi_set_current_line(96, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 3408);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(97, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 4048);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB8;

LAB12:    xsi_set_current_line(100, ng0);

LAB17:    xsi_set_current_line(101, ng0);
    t11 = (t0 + 3248);
    t12 = (t11 + 56U);
    t14 = *((char **)t12);
    t16 = (t0 + 3248);
    t17 = (t16 + 72U);
    t18 = *((char **)t17);
    t19 = (t0 + 3408);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    xsi_vlog_generic_get_index_select_value(t15, 1, t14, t18, 2, t21, 4, 2);
    t22 = (t0 + 2928);
    xsi_vlogvar_wait_assign_value(t22, t15, 0, 0, 1, 0LL);
    xsi_set_current_line(102, ng0);
    t2 = (t0 + 3408);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = ((char*)((ng9)));
    memset(t15, 0, 8);
    t12 = (t5 + 4);
    t14 = (t11 + 4);
    t6 = *((unsigned int *)t5);
    t7 = *((unsigned int *)t11);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t12);
    t10 = *((unsigned int *)t14);
    t23 = (t9 ^ t10);
    t24 = (t8 | t23);
    t25 = *((unsigned int *)t12);
    t26 = *((unsigned int *)t14);
    t27 = (t25 | t26);
    t28 = (~(t27));
    t29 = (t24 & t28);
    if (t29 != 0)
        goto LAB21;

LAB18:    if (t27 != 0)
        goto LAB20;

LAB19:    *((unsigned int *)t15) = 1;

LAB21:    t17 = (t15 + 4);
    t30 = *((unsigned int *)t17);
    t31 = (~(t30));
    t32 = *((unsigned int *)t15);
    t33 = (t32 & t31);
    t34 = (t33 != 0);
    if (t34 > 0)
        goto LAB22;

LAB23:    xsi_set_current_line(107, ng0);
    t2 = (t0 + 3408);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = ((char*)((ng6)));
    memset(t15, 0, 8);
    xsi_vlog_unsigned_add(t15, 32, t5, 4, t11, 32);
    t12 = (t0 + 3408);
    xsi_vlogvar_wait_assign_value(t12, t15, 0, 0, 4, 0LL);

LAB24:    goto LAB16;

LAB14:    xsi_set_current_line(109, ng0);

LAB26:    xsi_set_current_line(110, ng0);
    t3 = ((char*)((ng8)));
    t5 = (t0 + 4048);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 1, 0LL);
    goto LAB16;

LAB20:    t16 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB21;

LAB22:    xsi_set_current_line(102, ng0);

LAB25:    xsi_set_current_line(103, ng0);
    t18 = ((char*)((ng6)));
    t19 = (t0 + 4048);
    xsi_vlogvar_wait_assign_value(t19, t18, 0, 0, 1, 0LL);
    xsi_set_current_line(104, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 3408);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(105, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 2928);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB24;

}

static void implSig1_execute(char *t0)
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
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;

LAB0:    t1 = (t0 + 5960U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = ((char*)((ng1)));
    t3 = (t0 + 6408);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 3U;
    t9 = t8;
    t10 = (t2 + 4);
    t11 = *((unsigned int *)t2);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t3, 0, 1);

LAB1:    return;
}


extern void work_m_00000000003388480177_2070929554_init()
{
	static char *pe[] = {(void *)Always_35_0,(void *)Always_44_1,(void *)Always_69_2,(void *)Always_93_3,(void *)implSig1_execute};
	xsi_register_didat("work_m_00000000003388480177_2070929554", "isim/tf_isim_beh.exe.sim/work/m_00000000003388480177_2070929554.didat");
	xsi_register_executes(pe);
}
