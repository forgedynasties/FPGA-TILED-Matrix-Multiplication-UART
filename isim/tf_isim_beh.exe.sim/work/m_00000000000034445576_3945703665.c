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
static const char *ng0 = "//VBoxSvr/Shared/DSD/Project_Rec_Done_Tran/Top_Module.v";
static int ng1[] = {0, 0};
static int ng2[] = {10, 0};
static unsigned int ng3[] = {0U, 0U};
static int ng4[] = {1, 0};
static unsigned int ng5[] = {1U, 0U};
static unsigned int ng6[] = {2U, 0U};
static unsigned int ng7[] = {3U, 0U};
static unsigned int ng8[] = {4U, 0U};
static unsigned int ng9[] = {5U, 0U};
static int ng10[] = {3, 0};
static unsigned int ng11[] = {10U, 0U};
static int ng12[] = {8, 0};



static void Initial_44_0(char *t0)
{
    char t5[8];
    char t14[8];
    char t15[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t16;
    char *t17;
    char *t18;
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

LAB0:    xsi_set_current_line(44, ng0);

LAB2:    xsi_set_current_line(45, ng0);
    xsi_set_current_line(45, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 5464);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);

LAB3:    t1 = (t0 + 5464);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng2)));
    memset(t5, 0, 8);
    xsi_vlog_signed_less(t5, 32, t3, 32, t4, 32);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB4;

LAB5:
LAB1:    return;
LAB4:    xsi_set_current_line(45, ng0);

LAB6:    xsi_set_current_line(46, ng0);
    xsi_set_current_line(46, ng0);
    t12 = ((char*)((ng1)));
    t13 = (t0 + 5624);
    xsi_vlogvar_assign_value(t13, t12, 0, 0, 32);

LAB7:    t1 = (t0 + 5624);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng2)));
    memset(t5, 0, 8);
    xsi_vlog_signed_less(t5, 32, t3, 32, t4, 32);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB8;

LAB9:    xsi_set_current_line(45, ng0);
    t1 = (t0 + 5464);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng4)));
    memset(t5, 0, 8);
    xsi_vlog_signed_add(t5, 32, t3, 32, t4, 32);
    t6 = (t0 + 5464);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 32);
    goto LAB3;

LAB8:    xsi_set_current_line(46, ng0);

LAB10:    xsi_set_current_line(47, ng0);
    t12 = ((char*)((ng3)));
    t13 = (t0 + 4824);
    t16 = (t0 + 4824);
    t17 = (t16 + 72U);
    t18 = *((char **)t17);
    t19 = (t0 + 4824);
    t20 = (t19 + 64U);
    t21 = *((char **)t20);
    t22 = (t0 + 5464);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    t25 = (t0 + 5624);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    xsi_vlog_generic_convert_array_indices(t14, t15, t18, t21, 2, 2, t24, 32, 1, t27, 32, 1);
    t28 = (t14 + 4);
    t29 = *((unsigned int *)t28);
    t30 = (!(t29));
    t31 = (t15 + 4);
    t32 = *((unsigned int *)t31);
    t33 = (!(t32));
    t34 = (t30 && t33);
    if (t34 == 1)
        goto LAB11;

LAB12:    xsi_set_current_line(48, ng0);
    t1 = ((char*)((ng3)));
    t2 = (t0 + 4984);
    t3 = (t0 + 4984);
    t4 = (t3 + 72U);
    t6 = *((char **)t4);
    t12 = (t0 + 4984);
    t13 = (t12 + 64U);
    t16 = *((char **)t13);
    t17 = (t0 + 5464);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    t20 = (t0 + 5624);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    xsi_vlog_generic_convert_array_indices(t5, t14, t6, t16, 2, 2, t19, 32, 1, t22, 32, 1);
    t23 = (t5 + 4);
    t7 = *((unsigned int *)t23);
    t30 = (!(t7));
    t24 = (t14 + 4);
    t8 = *((unsigned int *)t24);
    t33 = (!(t8));
    t34 = (t30 && t33);
    if (t34 == 1)
        goto LAB13;

LAB14:    xsi_set_current_line(46, ng0);
    t1 = (t0 + 5624);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng4)));
    memset(t5, 0, 8);
    xsi_vlog_signed_add(t5, 32, t3, 32, t4, 32);
    t6 = (t0 + 5624);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 32);
    goto LAB7;

LAB11:    t35 = *((unsigned int *)t14);
    t36 = *((unsigned int *)t15);
    t37 = (t35 - t36);
    t38 = (t37 + 1);
    xsi_vlogvar_assign_value(t13, t12, 0, *((unsigned int *)t15), t38);
    goto LAB12;

LAB13:    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t14);
    t37 = (t9 - t10);
    t38 = (t37 + 1);
    xsi_vlogvar_assign_value(t2, t1, 0, *((unsigned int *)t14), t38);
    goto LAB14;

}

static void Always_72_1(char *t0)
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

LAB0:    t1 = (t0 + 6792U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(72, ng0);
    t2 = (t0 + 8104);
    *((int *)t2) = 1;
    t3 = (t0 + 6824);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(72, ng0);

LAB5:    xsi_set_current_line(73, ng0);
    t4 = (t0 + 2024U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(75, ng0);

LAB10:    xsi_set_current_line(76, ng0);
    t2 = (t0 + 4184);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4024);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 3, 0LL);

LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(73, ng0);

LAB9:    xsi_set_current_line(74, ng0);
    t11 = ((char*)((ng3)));
    t12 = (t0 + 4024);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 3, 0LL);
    goto LAB8;

}

static void Always_81_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;

LAB0:    t1 = (t0 + 7040U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(81, ng0);
    t2 = (t0 + 8120);
    *((int *)t2) = 1;
    t3 = (t0 + 7072);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(81, ng0);

LAB5:    xsi_set_current_line(82, ng0);
    t4 = (t0 + 4024);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 4184);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 3);
    xsi_set_current_line(83, ng0);
    t2 = (t0 + 4024);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);

LAB6:    t5 = ((char*)((ng3)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 3, t5, 3);
    if (t8 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng5)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t8 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng6)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t8 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng7)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t8 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng8)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t8 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng9)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t8 == 1)
        goto LAB17;

LAB18:
LAB19:    goto LAB2;

LAB7:    xsi_set_current_line(84, ng0);

LAB20:    xsi_set_current_line(85, ng0);
    t6 = (t0 + 2504U);
    t7 = *((char **)t6);
    t6 = (t7 + 4);
    t9 = *((unsigned int *)t6);
    t10 = (~(t9));
    t11 = *((unsigned int *)t7);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB21;

LAB22:
LAB23:    goto LAB19;

LAB9:    xsi_set_current_line(89, ng0);

LAB25:    xsi_set_current_line(90, ng0);
    t3 = (t0 + 4664);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (~(t9));
    t11 = *((unsigned int *)t6);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB26;

LAB27:
LAB28:    goto LAB19;

LAB11:    xsi_set_current_line(94, ng0);

LAB30:    xsi_set_current_line(95, ng0);
    t3 = (t0 + 5144);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (~(t9));
    t11 = *((unsigned int *)t6);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB31;

LAB32:
LAB33:    goto LAB19;

LAB13:    xsi_set_current_line(99, ng0);

LAB35:    xsi_set_current_line(100, ng0);
    t3 = (t0 + 5304);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (~(t9));
    t11 = *((unsigned int *)t6);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB36;

LAB37:
LAB38:    goto LAB19;

LAB15:    xsi_set_current_line(104, ng0);

LAB40:    xsi_set_current_line(105, ng0);
    t3 = ((char*)((ng9)));
    t5 = (t0 + 4184);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 3);
    goto LAB19;

LAB17:    xsi_set_current_line(107, ng0);

LAB41:    xsi_set_current_line(108, ng0);
    t3 = ((char*)((ng3)));
    t5 = (t0 + 4184);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 3);
    goto LAB19;

LAB21:    xsi_set_current_line(85, ng0);

LAB24:    xsi_set_current_line(86, ng0);
    t14 = ((char*)((ng5)));
    t15 = (t0 + 4184);
    xsi_vlogvar_assign_value(t15, t14, 0, 0, 3);
    goto LAB23;

LAB26:    xsi_set_current_line(90, ng0);

LAB29:    xsi_set_current_line(91, ng0);
    t14 = ((char*)((ng6)));
    t15 = (t0 + 4184);
    xsi_vlogvar_assign_value(t15, t14, 0, 0, 3);
    goto LAB28;

LAB31:    xsi_set_current_line(95, ng0);

LAB34:    xsi_set_current_line(96, ng0);
    t14 = ((char*)((ng7)));
    t15 = (t0 + 4184);
    xsi_vlogvar_assign_value(t15, t14, 0, 0, 3);
    goto LAB33;

LAB36:    xsi_set_current_line(100, ng0);

LAB39:    xsi_set_current_line(101, ng0);
    t14 = ((char*)((ng8)));
    t15 = (t0 + 4184);
    xsi_vlogvar_assign_value(t15, t14, 0, 0, 3);
    goto LAB38;

}

static void Always_114_3(char *t0)
{
    char t16[8];
    char t32[8];
    char t48[8];
    char t52[8];
    char t60[8];
    char t92[8];
    char t108[8];
    char t112[8];
    char t120[8];
    char t152[8];
    char t169[8];
    char t185[8];
    char t193[8];
    char t229[8];
    char t230[8];
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
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    char *t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    char *t44;
    char *t45;
    char *t46;
    char *t47;
    char *t49;
    char *t50;
    char *t51;
    char *t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    char *t59;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    char *t64;
    char *t65;
    char *t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    char *t74;
    char *t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    int t84;
    int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    char *t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    char *t99;
    char *t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    char *t104;
    char *t105;
    char *t106;
    char *t107;
    char *t109;
    char *t110;
    char *t111;
    char *t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    char *t119;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    char *t124;
    char *t125;
    char *t126;
    unsigned int t127;
    unsigned int t128;
    unsigned int t129;
    unsigned int t130;
    unsigned int t131;
    unsigned int t132;
    unsigned int t133;
    char *t134;
    char *t135;
    unsigned int t136;
    unsigned int t137;
    unsigned int t138;
    unsigned int t139;
    unsigned int t140;
    unsigned int t141;
    unsigned int t142;
    unsigned int t143;
    int t144;
    int t145;
    unsigned int t146;
    unsigned int t147;
    unsigned int t148;
    unsigned int t149;
    unsigned int t150;
    unsigned int t151;
    char *t153;
    unsigned int t154;
    unsigned int t155;
    unsigned int t156;
    unsigned int t157;
    unsigned int t158;
    char *t159;
    char *t160;
    unsigned int t161;
    unsigned int t162;
    unsigned int t163;
    unsigned int t164;
    char *t165;
    char *t166;
    char *t167;
    char *t168;
    char *t170;
    char *t171;
    unsigned int t172;
    unsigned int t173;
    unsigned int t174;
    unsigned int t175;
    unsigned int t176;
    unsigned int t177;
    unsigned int t178;
    unsigned int t179;
    unsigned int t180;
    unsigned int t181;
    unsigned int t182;
    unsigned int t183;
    char *t184;
    char *t186;
    unsigned int t187;
    unsigned int t188;
    unsigned int t189;
    unsigned int t190;
    unsigned int t191;
    char *t192;
    unsigned int t194;
    unsigned int t195;
    unsigned int t196;
    char *t197;
    char *t198;
    char *t199;
    unsigned int t200;
    unsigned int t201;
    unsigned int t202;
    unsigned int t203;
    unsigned int t204;
    unsigned int t205;
    unsigned int t206;
    char *t207;
    char *t208;
    unsigned int t209;
    unsigned int t210;
    unsigned int t211;
    int t212;
    unsigned int t213;
    unsigned int t214;
    unsigned int t215;
    int t216;
    unsigned int t217;
    unsigned int t218;
    unsigned int t219;
    unsigned int t220;
    char *t221;
    unsigned int t222;
    unsigned int t223;
    unsigned int t224;
    unsigned int t225;
    unsigned int t226;
    char *t227;
    char *t228;
    char *t231;
    char *t232;
    char *t233;
    char *t234;
    char *t235;
    char *t236;
    char *t237;
    char *t238;
    char *t239;
    char *t240;
    char *t241;
    char *t242;
    char *t243;
    unsigned int t244;
    int t245;
    char *t246;
    unsigned int t247;
    int t248;
    int t249;
    unsigned int t250;
    unsigned int t251;
    int t252;
    int t253;

LAB0:    t1 = (t0 + 7288U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(114, ng0);
    t2 = (t0 + 8136);
    *((int *)t2) = 1;
    t3 = (t0 + 7320);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(114, ng0);

LAB5:    xsi_set_current_line(115, ng0);
    t4 = (t0 + 2024U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(128, ng0);

LAB10:    xsi_set_current_line(129, ng0);
    t2 = (t0 + 4024);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);

LAB11:    t5 = ((char*)((ng3)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 3, t5, 3);
    if (t13 == 1)
        goto LAB12;

LAB13:    t2 = ((char*)((ng5)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t13 == 1)
        goto LAB14;

LAB15:    t2 = ((char*)((ng6)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t13 == 1)
        goto LAB16;

LAB17:    t2 = ((char*)((ng7)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t13 == 1)
        goto LAB18;

LAB19:
LAB20:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(115, ng0);

LAB9:    xsi_set_current_line(116, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 4344);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 4, 0LL);
    xsi_set_current_line(117, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4504);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(118, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3384);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    xsi_set_current_line(119, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4664);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(120, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5144);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(121, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5304);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB8;

LAB12:    xsi_set_current_line(130, ng0);

LAB21:    xsi_set_current_line(131, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 4344);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 4, 0LL);
    xsi_set_current_line(132, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4504);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(133, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4664);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(134, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5144);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(135, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5304);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB20;

LAB14:    xsi_set_current_line(137, ng0);

LAB22:    xsi_set_current_line(138, ng0);
    t3 = (t0 + 2504U);
    t5 = *((char **)t3);
    t3 = (t5 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB23;

LAB24:
LAB25:    goto LAB20;

LAB16:    xsi_set_current_line(143, ng0);

LAB27:    xsi_set_current_line(144, ng0);
    t3 = (t0 + 2504U);
    t5 = *((char **)t3);
    t3 = (t5 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB28;

LAB29:
LAB30:    goto LAB20;

LAB18:    xsi_set_current_line(164, ng0);

LAB116:    xsi_set_current_line(165, ng0);
    t3 = (t0 + 2504U);
    t5 = *((char **)t3);
    t3 = (t5 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB117;

LAB118:
LAB119:    goto LAB20;

LAB23:    xsi_set_current_line(138, ng0);

LAB26:    xsi_set_current_line(139, ng0);
    t11 = (t0 + 2344U);
    t12 = *((char **)t11);
    t11 = (t0 + 3384);
    xsi_vlogvar_wait_assign_value(t11, t12, 0, 0, 8, 0LL);
    xsi_set_current_line(140, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 4664);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB25;

LAB28:    xsi_set_current_line(144, ng0);

LAB31:    xsi_set_current_line(145, ng0);
    t11 = (t0 + 3384);
    t12 = (t11 + 56U);
    t14 = *((char **)t12);
    t15 = ((char*)((ng7)));
    memset(t16, 0, 8);
    t17 = (t14 + 4);
    t18 = (t15 + 4);
    t19 = *((unsigned int *)t14);
    t20 = *((unsigned int *)t15);
    t21 = (t19 ^ t20);
    t22 = *((unsigned int *)t17);
    t23 = *((unsigned int *)t18);
    t24 = (t22 ^ t23);
    t25 = (t21 | t24);
    t26 = *((unsigned int *)t17);
    t27 = *((unsigned int *)t18);
    t28 = (t26 | t27);
    t29 = (~(t28));
    t30 = (t25 & t29);
    if (t30 != 0)
        goto LAB35;

LAB32:    if (t28 != 0)
        goto LAB34;

LAB33:    *((unsigned int *)t16) = 1;

LAB35:    memset(t32, 0, 8);
    t33 = (t16 + 4);
    t34 = *((unsigned int *)t33);
    t35 = (~(t34));
    t36 = *((unsigned int *)t16);
    t37 = (t36 & t35);
    t38 = (t37 & 1U);
    if (t38 != 0)
        goto LAB36;

LAB37:    if (*((unsigned int *)t33) != 0)
        goto LAB38;

LAB39:    t40 = (t32 + 4);
    t41 = *((unsigned int *)t32);
    t42 = *((unsigned int *)t40);
    t43 = (t41 || t42);
    if (t43 > 0)
        goto LAB40;

LAB41:    memcpy(t60, t32, 8);

LAB42:    memset(t92, 0, 8);
    t93 = (t60 + 4);
    t94 = *((unsigned int *)t93);
    t95 = (~(t94));
    t96 = *((unsigned int *)t60);
    t97 = (t96 & t95);
    t98 = (t97 & 1U);
    if (t98 != 0)
        goto LAB55;

LAB56:    if (*((unsigned int *)t93) != 0)
        goto LAB57;

LAB58:    t100 = (t92 + 4);
    t101 = *((unsigned int *)t92);
    t102 = *((unsigned int *)t100);
    t103 = (t101 || t102);
    if (t103 > 0)
        goto LAB59;

LAB60:    memcpy(t120, t92, 8);

LAB61:    memset(t152, 0, 8);
    t153 = (t120 + 4);
    t154 = *((unsigned int *)t153);
    t155 = (~(t154));
    t156 = *((unsigned int *)t120);
    t157 = (t156 & t155);
    t158 = (t157 & 1U);
    if (t158 != 0)
        goto LAB74;

LAB75:    if (*((unsigned int *)t153) != 0)
        goto LAB76;

LAB77:    t160 = (t152 + 4);
    t161 = *((unsigned int *)t152);
    t162 = (!(t161));
    t163 = *((unsigned int *)t160);
    t164 = (t162 || t163);
    if (t164 > 0)
        goto LAB78;

LAB79:    memcpy(t193, t152, 8);

LAB80:    t221 = (t193 + 4);
    t222 = *((unsigned int *)t221);
    t223 = (~(t222));
    t224 = *((unsigned int *)t193);
    t225 = (t224 & t223);
    t226 = (t225 != 0);
    if (t226 > 0)
        goto LAB92;

LAB93:
LAB94:    xsi_set_current_line(151, ng0);
    t2 = (t0 + 4504);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = (t0 + 3384);
    t12 = (t11 + 56U);
    t14 = *((char **)t12);
    t15 = ((char*)((ng4)));
    memset(t16, 0, 8);
    xsi_vlog_unsigned_minus(t16, 32, t14, 8, t15, 32);
    memset(t32, 0, 8);
    t17 = (t5 + 4);
    t18 = (t16 + 4);
    t6 = *((unsigned int *)t5);
    t7 = *((unsigned int *)t16);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t17);
    t10 = *((unsigned int *)t18);
    t19 = (t9 ^ t10);
    t20 = (t8 | t19);
    t21 = *((unsigned int *)t17);
    t22 = *((unsigned int *)t18);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB101;

LAB98:    if (t23 != 0)
        goto LAB100;

LAB99:    *((unsigned int *)t32) = 1;

LAB101:    t33 = (t32 + 4);
    t26 = *((unsigned int *)t33);
    t27 = (~(t26));
    t28 = *((unsigned int *)t32);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB102;

LAB103:    xsi_set_current_line(159, ng0);

LAB115:    xsi_set_current_line(160, ng0);
    t2 = (t0 + 4504);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = ((char*)((ng4)));
    memset(t16, 0, 8);
    xsi_vlog_unsigned_add(t16, 32, t5, 4, t11, 32);
    t12 = (t0 + 4504);
    xsi_vlogvar_wait_assign_value(t12, t16, 0, 0, 4, 0LL);

LAB104:    goto LAB30;

LAB34:    t31 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t31) = 1;
    goto LAB35;

LAB36:    *((unsigned int *)t32) = 1;
    goto LAB39;

LAB38:    t39 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t39) = 1;
    goto LAB39;

LAB40:    t44 = (t0 + 4344);
    t45 = (t44 + 56U);
    t46 = *((char **)t45);
    t47 = ((char*)((ng10)));
    memset(t48, 0, 8);
    t49 = (t46 + 4);
    if (*((unsigned int *)t49) != 0)
        goto LAB44;

LAB43:    t50 = (t47 + 4);
    if (*((unsigned int *)t50) != 0)
        goto LAB44;

LAB47:    if (*((unsigned int *)t46) < *((unsigned int *)t47))
        goto LAB45;

LAB46:    memset(t52, 0, 8);
    t53 = (t48 + 4);
    t54 = *((unsigned int *)t53);
    t55 = (~(t54));
    t56 = *((unsigned int *)t48);
    t57 = (t56 & t55);
    t58 = (t57 & 1U);
    if (t58 != 0)
        goto LAB48;

LAB49:    if (*((unsigned int *)t53) != 0)
        goto LAB50;

LAB51:    t61 = *((unsigned int *)t32);
    t62 = *((unsigned int *)t52);
    t63 = (t61 & t62);
    *((unsigned int *)t60) = t63;
    t64 = (t32 + 4);
    t65 = (t52 + 4);
    t66 = (t60 + 4);
    t67 = *((unsigned int *)t64);
    t68 = *((unsigned int *)t65);
    t69 = (t67 | t68);
    *((unsigned int *)t66) = t69;
    t70 = *((unsigned int *)t66);
    t71 = (t70 != 0);
    if (t71 == 1)
        goto LAB52;

LAB53:
LAB54:    goto LAB42;

LAB44:    t51 = (t48 + 4);
    *((unsigned int *)t48) = 1;
    *((unsigned int *)t51) = 1;
    goto LAB46;

LAB45:    *((unsigned int *)t48) = 1;
    goto LAB46;

LAB48:    *((unsigned int *)t52) = 1;
    goto LAB51;

LAB50:    t59 = (t52 + 4);
    *((unsigned int *)t52) = 1;
    *((unsigned int *)t59) = 1;
    goto LAB51;

LAB52:    t72 = *((unsigned int *)t60);
    t73 = *((unsigned int *)t66);
    *((unsigned int *)t60) = (t72 | t73);
    t74 = (t32 + 4);
    t75 = (t52 + 4);
    t76 = *((unsigned int *)t32);
    t77 = (~(t76));
    t78 = *((unsigned int *)t74);
    t79 = (~(t78));
    t80 = *((unsigned int *)t52);
    t81 = (~(t80));
    t82 = *((unsigned int *)t75);
    t83 = (~(t82));
    t84 = (t77 & t79);
    t85 = (t81 & t83);
    t86 = (~(t84));
    t87 = (~(t85));
    t88 = *((unsigned int *)t66);
    *((unsigned int *)t66) = (t88 & t86);
    t89 = *((unsigned int *)t66);
    *((unsigned int *)t66) = (t89 & t87);
    t90 = *((unsigned int *)t60);
    *((unsigned int *)t60) = (t90 & t86);
    t91 = *((unsigned int *)t60);
    *((unsigned int *)t60) = (t91 & t87);
    goto LAB54;

LAB55:    *((unsigned int *)t92) = 1;
    goto LAB58;

LAB57:    t99 = (t92 + 4);
    *((unsigned int *)t92) = 1;
    *((unsigned int *)t99) = 1;
    goto LAB58;

LAB59:    t104 = (t0 + 4504);
    t105 = (t104 + 56U);
    t106 = *((char **)t105);
    t107 = ((char*)((ng10)));
    memset(t108, 0, 8);
    t109 = (t106 + 4);
    if (*((unsigned int *)t109) != 0)
        goto LAB63;

LAB62:    t110 = (t107 + 4);
    if (*((unsigned int *)t110) != 0)
        goto LAB63;

LAB66:    if (*((unsigned int *)t106) < *((unsigned int *)t107))
        goto LAB64;

LAB65:    memset(t112, 0, 8);
    t113 = (t108 + 4);
    t114 = *((unsigned int *)t113);
    t115 = (~(t114));
    t116 = *((unsigned int *)t108);
    t117 = (t116 & t115);
    t118 = (t117 & 1U);
    if (t118 != 0)
        goto LAB67;

LAB68:    if (*((unsigned int *)t113) != 0)
        goto LAB69;

LAB70:    t121 = *((unsigned int *)t92);
    t122 = *((unsigned int *)t112);
    t123 = (t121 & t122);
    *((unsigned int *)t120) = t123;
    t124 = (t92 + 4);
    t125 = (t112 + 4);
    t126 = (t120 + 4);
    t127 = *((unsigned int *)t124);
    t128 = *((unsigned int *)t125);
    t129 = (t127 | t128);
    *((unsigned int *)t126) = t129;
    t130 = *((unsigned int *)t126);
    t131 = (t130 != 0);
    if (t131 == 1)
        goto LAB71;

LAB72:
LAB73:    goto LAB61;

LAB63:    t111 = (t108 + 4);
    *((unsigned int *)t108) = 1;
    *((unsigned int *)t111) = 1;
    goto LAB65;

LAB64:    *((unsigned int *)t108) = 1;
    goto LAB65;

LAB67:    *((unsigned int *)t112) = 1;
    goto LAB70;

LAB69:    t119 = (t112 + 4);
    *((unsigned int *)t112) = 1;
    *((unsigned int *)t119) = 1;
    goto LAB70;

LAB71:    t132 = *((unsigned int *)t120);
    t133 = *((unsigned int *)t126);
    *((unsigned int *)t120) = (t132 | t133);
    t134 = (t92 + 4);
    t135 = (t112 + 4);
    t136 = *((unsigned int *)t92);
    t137 = (~(t136));
    t138 = *((unsigned int *)t134);
    t139 = (~(t138));
    t140 = *((unsigned int *)t112);
    t141 = (~(t140));
    t142 = *((unsigned int *)t135);
    t143 = (~(t142));
    t144 = (t137 & t139);
    t145 = (t141 & t143);
    t146 = (~(t144));
    t147 = (~(t145));
    t148 = *((unsigned int *)t126);
    *((unsigned int *)t126) = (t148 & t146);
    t149 = *((unsigned int *)t126);
    *((unsigned int *)t126) = (t149 & t147);
    t150 = *((unsigned int *)t120);
    *((unsigned int *)t120) = (t150 & t146);
    t151 = *((unsigned int *)t120);
    *((unsigned int *)t120) = (t151 & t147);
    goto LAB73;

LAB74:    *((unsigned int *)t152) = 1;
    goto LAB77;

LAB76:    t159 = (t152 + 4);
    *((unsigned int *)t152) = 1;
    *((unsigned int *)t159) = 1;
    goto LAB77;

LAB78:    t165 = (t0 + 3384);
    t166 = (t165 + 56U);
    t167 = *((char **)t166);
    t168 = ((char*)((ng11)));
    memset(t169, 0, 8);
    t170 = (t167 + 4);
    t171 = (t168 + 4);
    t172 = *((unsigned int *)t167);
    t173 = *((unsigned int *)t168);
    t174 = (t172 ^ t173);
    t175 = *((unsigned int *)t170);
    t176 = *((unsigned int *)t171);
    t177 = (t175 ^ t176);
    t178 = (t174 | t177);
    t179 = *((unsigned int *)t170);
    t180 = *((unsigned int *)t171);
    t181 = (t179 | t180);
    t182 = (~(t181));
    t183 = (t178 & t182);
    if (t183 != 0)
        goto LAB84;

LAB81:    if (t181 != 0)
        goto LAB83;

LAB82:    *((unsigned int *)t169) = 1;

LAB84:    memset(t185, 0, 8);
    t186 = (t169 + 4);
    t187 = *((unsigned int *)t186);
    t188 = (~(t187));
    t189 = *((unsigned int *)t169);
    t190 = (t189 & t188);
    t191 = (t190 & 1U);
    if (t191 != 0)
        goto LAB85;

LAB86:    if (*((unsigned int *)t186) != 0)
        goto LAB87;

LAB88:    t194 = *((unsigned int *)t152);
    t195 = *((unsigned int *)t185);
    t196 = (t194 | t195);
    *((unsigned int *)t193) = t196;
    t197 = (t152 + 4);
    t198 = (t185 + 4);
    t199 = (t193 + 4);
    t200 = *((unsigned int *)t197);
    t201 = *((unsigned int *)t198);
    t202 = (t200 | t201);
    *((unsigned int *)t199) = t202;
    t203 = *((unsigned int *)t199);
    t204 = (t203 != 0);
    if (t204 == 1)
        goto LAB89;

LAB90:
LAB91:    goto LAB80;

LAB83:    t184 = (t169 + 4);
    *((unsigned int *)t169) = 1;
    *((unsigned int *)t184) = 1;
    goto LAB84;

LAB85:    *((unsigned int *)t185) = 1;
    goto LAB88;

LAB87:    t192 = (t185 + 4);
    *((unsigned int *)t185) = 1;
    *((unsigned int *)t192) = 1;
    goto LAB88;

LAB89:    t205 = *((unsigned int *)t193);
    t206 = *((unsigned int *)t199);
    *((unsigned int *)t193) = (t205 | t206);
    t207 = (t152 + 4);
    t208 = (t185 + 4);
    t209 = *((unsigned int *)t207);
    t210 = (~(t209));
    t211 = *((unsigned int *)t152);
    t212 = (t211 & t210);
    t213 = *((unsigned int *)t208);
    t214 = (~(t213));
    t215 = *((unsigned int *)t185);
    t216 = (t215 & t214);
    t217 = (~(t212));
    t218 = (~(t216));
    t219 = *((unsigned int *)t199);
    *((unsigned int *)t199) = (t219 & t217);
    t220 = *((unsigned int *)t199);
    *((unsigned int *)t199) = (t220 & t218);
    goto LAB91;

LAB92:    xsi_set_current_line(146, ng0);

LAB95:    xsi_set_current_line(147, ng0);
    t227 = (t0 + 2344U);
    t228 = *((char **)t227);
    t227 = (t0 + 4824);
    t231 = (t0 + 4824);
    t232 = (t231 + 72U);
    t233 = *((char **)t232);
    t234 = (t0 + 4824);
    t235 = (t234 + 64U);
    t236 = *((char **)t235);
    t237 = (t0 + 4344);
    t238 = (t237 + 56U);
    t239 = *((char **)t238);
    t240 = (t0 + 4504);
    t241 = (t240 + 56U);
    t242 = *((char **)t241);
    xsi_vlog_generic_convert_array_indices(t229, t230, t233, t236, 2, 2, t239, 4, 2, t242, 4, 2);
    t243 = (t229 + 4);
    t244 = *((unsigned int *)t243);
    t245 = (!(t244));
    t246 = (t230 + 4);
    t247 = *((unsigned int *)t246);
    t248 = (!(t247));
    t249 = (t245 && t248);
    if (t249 == 1)
        goto LAB96;

LAB97:    goto LAB94;

LAB96:    t250 = *((unsigned int *)t229);
    t251 = *((unsigned int *)t230);
    t252 = (t250 - t251);
    t253 = (t252 + 1);
    xsi_vlogvar_wait_assign_value(t227, t228, 0, *((unsigned int *)t230), t253, 0LL);
    goto LAB97;

LAB100:    t31 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t31) = 1;
    goto LAB101;

LAB102:    xsi_set_current_line(151, ng0);

LAB105:    xsi_set_current_line(152, ng0);
    t39 = ((char*)((ng1)));
    t40 = (t0 + 4504);
    xsi_vlogvar_wait_assign_value(t40, t39, 0, 0, 4, 0LL);
    xsi_set_current_line(153, ng0);
    t2 = (t0 + 4344);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = (t0 + 3384);
    t12 = (t11 + 56U);
    t14 = *((char **)t12);
    t15 = ((char*)((ng4)));
    memset(t16, 0, 8);
    xsi_vlog_unsigned_minus(t16, 32, t14, 8, t15, 32);
    memset(t32, 0, 8);
    t17 = (t5 + 4);
    t18 = (t16 + 4);
    t6 = *((unsigned int *)t5);
    t7 = *((unsigned int *)t16);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t17);
    t10 = *((unsigned int *)t18);
    t19 = (t9 ^ t10);
    t20 = (t8 | t19);
    t21 = *((unsigned int *)t17);
    t22 = *((unsigned int *)t18);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB109;

LAB106:    if (t23 != 0)
        goto LAB108;

LAB107:    *((unsigned int *)t32) = 1;

LAB109:    t33 = (t32 + 4);
    t26 = *((unsigned int *)t33);
    t27 = (~(t26));
    t28 = *((unsigned int *)t32);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB110;

LAB111:    xsi_set_current_line(156, ng0);

LAB114:    xsi_set_current_line(157, ng0);
    t2 = (t0 + 4344);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = ((char*)((ng4)));
    memset(t16, 0, 8);
    xsi_vlog_unsigned_add(t16, 32, t5, 4, t11, 32);
    t12 = (t0 + 4344);
    xsi_vlogvar_wait_assign_value(t12, t16, 0, 0, 4, 0LL);

LAB112:    goto LAB104;

LAB108:    t31 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t31) = 1;
    goto LAB109;

LAB110:    xsi_set_current_line(153, ng0);

LAB113:    xsi_set_current_line(154, ng0);
    t39 = ((char*)((ng1)));
    t40 = (t0 + 4344);
    xsi_vlogvar_wait_assign_value(t40, t39, 0, 0, 4, 0LL);
    xsi_set_current_line(155, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 5144);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB112;

LAB117:    xsi_set_current_line(165, ng0);

LAB120:    xsi_set_current_line(166, ng0);
    t11 = (t0 + 3384);
    t12 = (t11 + 56U);
    t14 = *((char **)t12);
    t15 = ((char*)((ng7)));
    memset(t16, 0, 8);
    t17 = (t14 + 4);
    t18 = (t15 + 4);
    t19 = *((unsigned int *)t14);
    t20 = *((unsigned int *)t15);
    t21 = (t19 ^ t20);
    t22 = *((unsigned int *)t17);
    t23 = *((unsigned int *)t18);
    t24 = (t22 ^ t23);
    t25 = (t21 | t24);
    t26 = *((unsigned int *)t17);
    t27 = *((unsigned int *)t18);
    t28 = (t26 | t27);
    t29 = (~(t28));
    t30 = (t25 & t29);
    if (t30 != 0)
        goto LAB124;

LAB121:    if (t28 != 0)
        goto LAB123;

LAB122:    *((unsigned int *)t16) = 1;

LAB124:    memset(t32, 0, 8);
    t33 = (t16 + 4);
    t34 = *((unsigned int *)t33);
    t35 = (~(t34));
    t36 = *((unsigned int *)t16);
    t37 = (t36 & t35);
    t38 = (t37 & 1U);
    if (t38 != 0)
        goto LAB125;

LAB126:    if (*((unsigned int *)t33) != 0)
        goto LAB127;

LAB128:    t40 = (t32 + 4);
    t41 = *((unsigned int *)t32);
    t42 = *((unsigned int *)t40);
    t43 = (t41 || t42);
    if (t43 > 0)
        goto LAB129;

LAB130:    memcpy(t60, t32, 8);

LAB131:    memset(t92, 0, 8);
    t93 = (t60 + 4);
    t94 = *((unsigned int *)t93);
    t95 = (~(t94));
    t96 = *((unsigned int *)t60);
    t97 = (t96 & t95);
    t98 = (t97 & 1U);
    if (t98 != 0)
        goto LAB144;

LAB145:    if (*((unsigned int *)t93) != 0)
        goto LAB146;

LAB147:    t100 = (t92 + 4);
    t101 = *((unsigned int *)t92);
    t102 = *((unsigned int *)t100);
    t103 = (t101 || t102);
    if (t103 > 0)
        goto LAB148;

LAB149:    memcpy(t120, t92, 8);

LAB150:    memset(t152, 0, 8);
    t153 = (t120 + 4);
    t154 = *((unsigned int *)t153);
    t155 = (~(t154));
    t156 = *((unsigned int *)t120);
    t157 = (t156 & t155);
    t158 = (t157 & 1U);
    if (t158 != 0)
        goto LAB163;

LAB164:    if (*((unsigned int *)t153) != 0)
        goto LAB165;

LAB166:    t160 = (t152 + 4);
    t161 = *((unsigned int *)t152);
    t162 = (!(t161));
    t163 = *((unsigned int *)t160);
    t164 = (t162 || t163);
    if (t164 > 0)
        goto LAB167;

LAB168:    memcpy(t193, t152, 8);

LAB169:    t221 = (t193 + 4);
    t222 = *((unsigned int *)t221);
    t223 = (~(t222));
    t224 = *((unsigned int *)t193);
    t225 = (t224 & t223);
    t226 = (t225 != 0);
    if (t226 > 0)
        goto LAB181;

LAB182:
LAB183:    xsi_set_current_line(170, ng0);
    t2 = (t0 + 4504);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = (t0 + 3384);
    t12 = (t11 + 56U);
    t14 = *((char **)t12);
    t15 = ((char*)((ng4)));
    memset(t16, 0, 8);
    xsi_vlog_unsigned_minus(t16, 32, t14, 8, t15, 32);
    memset(t32, 0, 8);
    t17 = (t5 + 4);
    t18 = (t16 + 4);
    t6 = *((unsigned int *)t5);
    t7 = *((unsigned int *)t16);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t17);
    t10 = *((unsigned int *)t18);
    t19 = (t9 ^ t10);
    t20 = (t8 | t19);
    t21 = *((unsigned int *)t17);
    t22 = *((unsigned int *)t18);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB190;

LAB187:    if (t23 != 0)
        goto LAB189;

LAB188:    *((unsigned int *)t32) = 1;

LAB190:    t33 = (t32 + 4);
    t26 = *((unsigned int *)t33);
    t27 = (~(t26));
    t28 = *((unsigned int *)t32);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB191;

LAB192:    xsi_set_current_line(178, ng0);

LAB204:    xsi_set_current_line(179, ng0);
    t2 = (t0 + 4504);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = ((char*)((ng4)));
    memset(t16, 0, 8);
    xsi_vlog_unsigned_add(t16, 32, t5, 4, t11, 32);
    t12 = (t0 + 4504);
    xsi_vlogvar_wait_assign_value(t12, t16, 0, 0, 4, 0LL);

LAB193:    goto LAB119;

LAB123:    t31 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t31) = 1;
    goto LAB124;

LAB125:    *((unsigned int *)t32) = 1;
    goto LAB128;

LAB127:    t39 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t39) = 1;
    goto LAB128;

LAB129:    t44 = (t0 + 4344);
    t45 = (t44 + 56U);
    t46 = *((char **)t45);
    t47 = ((char*)((ng10)));
    memset(t48, 0, 8);
    t49 = (t46 + 4);
    if (*((unsigned int *)t49) != 0)
        goto LAB133;

LAB132:    t50 = (t47 + 4);
    if (*((unsigned int *)t50) != 0)
        goto LAB133;

LAB136:    if (*((unsigned int *)t46) < *((unsigned int *)t47))
        goto LAB134;

LAB135:    memset(t52, 0, 8);
    t53 = (t48 + 4);
    t54 = *((unsigned int *)t53);
    t55 = (~(t54));
    t56 = *((unsigned int *)t48);
    t57 = (t56 & t55);
    t58 = (t57 & 1U);
    if (t58 != 0)
        goto LAB137;

LAB138:    if (*((unsigned int *)t53) != 0)
        goto LAB139;

LAB140:    t61 = *((unsigned int *)t32);
    t62 = *((unsigned int *)t52);
    t63 = (t61 & t62);
    *((unsigned int *)t60) = t63;
    t64 = (t32 + 4);
    t65 = (t52 + 4);
    t66 = (t60 + 4);
    t67 = *((unsigned int *)t64);
    t68 = *((unsigned int *)t65);
    t69 = (t67 | t68);
    *((unsigned int *)t66) = t69;
    t70 = *((unsigned int *)t66);
    t71 = (t70 != 0);
    if (t71 == 1)
        goto LAB141;

LAB142:
LAB143:    goto LAB131;

LAB133:    t51 = (t48 + 4);
    *((unsigned int *)t48) = 1;
    *((unsigned int *)t51) = 1;
    goto LAB135;

LAB134:    *((unsigned int *)t48) = 1;
    goto LAB135;

LAB137:    *((unsigned int *)t52) = 1;
    goto LAB140;

LAB139:    t59 = (t52 + 4);
    *((unsigned int *)t52) = 1;
    *((unsigned int *)t59) = 1;
    goto LAB140;

LAB141:    t72 = *((unsigned int *)t60);
    t73 = *((unsigned int *)t66);
    *((unsigned int *)t60) = (t72 | t73);
    t74 = (t32 + 4);
    t75 = (t52 + 4);
    t76 = *((unsigned int *)t32);
    t77 = (~(t76));
    t78 = *((unsigned int *)t74);
    t79 = (~(t78));
    t80 = *((unsigned int *)t52);
    t81 = (~(t80));
    t82 = *((unsigned int *)t75);
    t83 = (~(t82));
    t84 = (t77 & t79);
    t85 = (t81 & t83);
    t86 = (~(t84));
    t87 = (~(t85));
    t88 = *((unsigned int *)t66);
    *((unsigned int *)t66) = (t88 & t86);
    t89 = *((unsigned int *)t66);
    *((unsigned int *)t66) = (t89 & t87);
    t90 = *((unsigned int *)t60);
    *((unsigned int *)t60) = (t90 & t86);
    t91 = *((unsigned int *)t60);
    *((unsigned int *)t60) = (t91 & t87);
    goto LAB143;

LAB144:    *((unsigned int *)t92) = 1;
    goto LAB147;

LAB146:    t99 = (t92 + 4);
    *((unsigned int *)t92) = 1;
    *((unsigned int *)t99) = 1;
    goto LAB147;

LAB148:    t104 = (t0 + 4504);
    t105 = (t104 + 56U);
    t106 = *((char **)t105);
    t107 = ((char*)((ng10)));
    memset(t108, 0, 8);
    t109 = (t106 + 4);
    if (*((unsigned int *)t109) != 0)
        goto LAB152;

LAB151:    t110 = (t107 + 4);
    if (*((unsigned int *)t110) != 0)
        goto LAB152;

LAB155:    if (*((unsigned int *)t106) < *((unsigned int *)t107))
        goto LAB153;

LAB154:    memset(t112, 0, 8);
    t113 = (t108 + 4);
    t114 = *((unsigned int *)t113);
    t115 = (~(t114));
    t116 = *((unsigned int *)t108);
    t117 = (t116 & t115);
    t118 = (t117 & 1U);
    if (t118 != 0)
        goto LAB156;

LAB157:    if (*((unsigned int *)t113) != 0)
        goto LAB158;

LAB159:    t121 = *((unsigned int *)t92);
    t122 = *((unsigned int *)t112);
    t123 = (t121 & t122);
    *((unsigned int *)t120) = t123;
    t124 = (t92 + 4);
    t125 = (t112 + 4);
    t126 = (t120 + 4);
    t127 = *((unsigned int *)t124);
    t128 = *((unsigned int *)t125);
    t129 = (t127 | t128);
    *((unsigned int *)t126) = t129;
    t130 = *((unsigned int *)t126);
    t131 = (t130 != 0);
    if (t131 == 1)
        goto LAB160;

LAB161:
LAB162:    goto LAB150;

LAB152:    t111 = (t108 + 4);
    *((unsigned int *)t108) = 1;
    *((unsigned int *)t111) = 1;
    goto LAB154;

LAB153:    *((unsigned int *)t108) = 1;
    goto LAB154;

LAB156:    *((unsigned int *)t112) = 1;
    goto LAB159;

LAB158:    t119 = (t112 + 4);
    *((unsigned int *)t112) = 1;
    *((unsigned int *)t119) = 1;
    goto LAB159;

LAB160:    t132 = *((unsigned int *)t120);
    t133 = *((unsigned int *)t126);
    *((unsigned int *)t120) = (t132 | t133);
    t134 = (t92 + 4);
    t135 = (t112 + 4);
    t136 = *((unsigned int *)t92);
    t137 = (~(t136));
    t138 = *((unsigned int *)t134);
    t139 = (~(t138));
    t140 = *((unsigned int *)t112);
    t141 = (~(t140));
    t142 = *((unsigned int *)t135);
    t143 = (~(t142));
    t144 = (t137 & t139);
    t145 = (t141 & t143);
    t146 = (~(t144));
    t147 = (~(t145));
    t148 = *((unsigned int *)t126);
    *((unsigned int *)t126) = (t148 & t146);
    t149 = *((unsigned int *)t126);
    *((unsigned int *)t126) = (t149 & t147);
    t150 = *((unsigned int *)t120);
    *((unsigned int *)t120) = (t150 & t146);
    t151 = *((unsigned int *)t120);
    *((unsigned int *)t120) = (t151 & t147);
    goto LAB162;

LAB163:    *((unsigned int *)t152) = 1;
    goto LAB166;

LAB165:    t159 = (t152 + 4);
    *((unsigned int *)t152) = 1;
    *((unsigned int *)t159) = 1;
    goto LAB166;

LAB167:    t165 = (t0 + 3384);
    t166 = (t165 + 56U);
    t167 = *((char **)t166);
    t168 = ((char*)((ng11)));
    memset(t169, 0, 8);
    t170 = (t167 + 4);
    t171 = (t168 + 4);
    t172 = *((unsigned int *)t167);
    t173 = *((unsigned int *)t168);
    t174 = (t172 ^ t173);
    t175 = *((unsigned int *)t170);
    t176 = *((unsigned int *)t171);
    t177 = (t175 ^ t176);
    t178 = (t174 | t177);
    t179 = *((unsigned int *)t170);
    t180 = *((unsigned int *)t171);
    t181 = (t179 | t180);
    t182 = (~(t181));
    t183 = (t178 & t182);
    if (t183 != 0)
        goto LAB173;

LAB170:    if (t181 != 0)
        goto LAB172;

LAB171:    *((unsigned int *)t169) = 1;

LAB173:    memset(t185, 0, 8);
    t186 = (t169 + 4);
    t187 = *((unsigned int *)t186);
    t188 = (~(t187));
    t189 = *((unsigned int *)t169);
    t190 = (t189 & t188);
    t191 = (t190 & 1U);
    if (t191 != 0)
        goto LAB174;

LAB175:    if (*((unsigned int *)t186) != 0)
        goto LAB176;

LAB177:    t194 = *((unsigned int *)t152);
    t195 = *((unsigned int *)t185);
    t196 = (t194 | t195);
    *((unsigned int *)t193) = t196;
    t197 = (t152 + 4);
    t198 = (t185 + 4);
    t199 = (t193 + 4);
    t200 = *((unsigned int *)t197);
    t201 = *((unsigned int *)t198);
    t202 = (t200 | t201);
    *((unsigned int *)t199) = t202;
    t203 = *((unsigned int *)t199);
    t204 = (t203 != 0);
    if (t204 == 1)
        goto LAB178;

LAB179:
LAB180:    goto LAB169;

LAB172:    t184 = (t169 + 4);
    *((unsigned int *)t169) = 1;
    *((unsigned int *)t184) = 1;
    goto LAB173;

LAB174:    *((unsigned int *)t185) = 1;
    goto LAB177;

LAB176:    t192 = (t185 + 4);
    *((unsigned int *)t185) = 1;
    *((unsigned int *)t192) = 1;
    goto LAB177;

LAB178:    t205 = *((unsigned int *)t193);
    t206 = *((unsigned int *)t199);
    *((unsigned int *)t193) = (t205 | t206);
    t207 = (t152 + 4);
    t208 = (t185 + 4);
    t209 = *((unsigned int *)t207);
    t210 = (~(t209));
    t211 = *((unsigned int *)t152);
    t212 = (t211 & t210);
    t213 = *((unsigned int *)t208);
    t214 = (~(t213));
    t215 = *((unsigned int *)t185);
    t216 = (t215 & t214);
    t217 = (~(t212));
    t218 = (~(t216));
    t219 = *((unsigned int *)t199);
    *((unsigned int *)t199) = (t219 & t217);
    t220 = *((unsigned int *)t199);
    *((unsigned int *)t199) = (t220 & t218);
    goto LAB180;

LAB181:    xsi_set_current_line(167, ng0);

LAB184:    xsi_set_current_line(168, ng0);
    t227 = (t0 + 2344U);
    t228 = *((char **)t227);
    t227 = (t0 + 4984);
    t231 = (t0 + 4984);
    t232 = (t231 + 72U);
    t233 = *((char **)t232);
    t234 = (t0 + 4984);
    t235 = (t234 + 64U);
    t236 = *((char **)t235);
    t237 = (t0 + 4344);
    t238 = (t237 + 56U);
    t239 = *((char **)t238);
    t240 = (t0 + 4504);
    t241 = (t240 + 56U);
    t242 = *((char **)t241);
    xsi_vlog_generic_convert_array_indices(t229, t230, t233, t236, 2, 2, t239, 4, 2, t242, 4, 2);
    t243 = (t229 + 4);
    t244 = *((unsigned int *)t243);
    t245 = (!(t244));
    t246 = (t230 + 4);
    t247 = *((unsigned int *)t246);
    t248 = (!(t247));
    t249 = (t245 && t248);
    if (t249 == 1)
        goto LAB185;

LAB186:    goto LAB183;

LAB185:    t250 = *((unsigned int *)t229);
    t251 = *((unsigned int *)t230);
    t252 = (t250 - t251);
    t253 = (t252 + 1);
    xsi_vlogvar_wait_assign_value(t227, t228, 0, *((unsigned int *)t230), t253, 0LL);
    goto LAB186;

LAB189:    t31 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t31) = 1;
    goto LAB190;

LAB191:    xsi_set_current_line(170, ng0);

LAB194:    xsi_set_current_line(171, ng0);
    t39 = ((char*)((ng1)));
    t40 = (t0 + 4504);
    xsi_vlogvar_wait_assign_value(t40, t39, 0, 0, 4, 0LL);
    xsi_set_current_line(172, ng0);
    t2 = (t0 + 4344);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = (t0 + 3384);
    t12 = (t11 + 56U);
    t14 = *((char **)t12);
    t15 = ((char*)((ng4)));
    memset(t16, 0, 8);
    xsi_vlog_unsigned_minus(t16, 32, t14, 8, t15, 32);
    memset(t32, 0, 8);
    t17 = (t5 + 4);
    t18 = (t16 + 4);
    t6 = *((unsigned int *)t5);
    t7 = *((unsigned int *)t16);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t17);
    t10 = *((unsigned int *)t18);
    t19 = (t9 ^ t10);
    t20 = (t8 | t19);
    t21 = *((unsigned int *)t17);
    t22 = *((unsigned int *)t18);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB198;

LAB195:    if (t23 != 0)
        goto LAB197;

LAB196:    *((unsigned int *)t32) = 1;

LAB198:    t33 = (t32 + 4);
    t26 = *((unsigned int *)t33);
    t27 = (~(t26));
    t28 = *((unsigned int *)t32);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB199;

LAB200:    xsi_set_current_line(175, ng0);

LAB203:    xsi_set_current_line(176, ng0);
    t2 = (t0 + 4344);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = ((char*)((ng4)));
    memset(t16, 0, 8);
    xsi_vlog_unsigned_add(t16, 32, t5, 4, t11, 32);
    t12 = (t0 + 4344);
    xsi_vlogvar_wait_assign_value(t12, t16, 0, 0, 4, 0LL);

LAB201:    goto LAB193;

LAB197:    t31 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t31) = 1;
    goto LAB198;

LAB199:    xsi_set_current_line(172, ng0);

LAB202:    xsi_set_current_line(173, ng0);
    t39 = ((char*)((ng1)));
    t40 = (t0 + 4344);
    xsi_vlogvar_wait_assign_value(t40, t39, 0, 0, 4, 0LL);
    xsi_set_current_line(174, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 5304);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB201;

}

static void Always_187_4(char *t0)
{
    char t14[8];
    char t18[8];
    char t32[8];
    char t33[8];
    char t34[8];
    char t42[8];
    char t46[8];
    char t48[8];
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
    char *t15;
    char *t16;
    char *t17;
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
    char *t29;
    char *t30;
    char *t31;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t43;
    char *t44;
    char *t45;
    char *t47;
    char *t49;
    char *t50;
    unsigned int t51;
    char *t52;
    unsigned int t53;
    int t54;
    int t55;
    char *t56;
    unsigned int t57;
    int t58;
    int t59;
    unsigned int t60;
    int t61;
    unsigned int t62;
    unsigned int t63;
    int t64;
    int t65;

LAB0:    t1 = (t0 + 7536U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(187, ng0);
    t2 = (t0 + 8152);
    *((int *)t2) = 1;
    t3 = (t0 + 7568);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(187, ng0);

LAB5:    xsi_set_current_line(188, ng0);
    t4 = (t0 + 2024U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(190, ng0);

LAB10:    xsi_set_current_line(191, ng0);
    t2 = (t0 + 4024);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);

LAB11:    t5 = ((char*)((ng3)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 3, t5, 3);
    if (t13 == 1)
        goto LAB12;

LAB13:    t2 = ((char*)((ng8)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t13 == 1)
        goto LAB14;

LAB15:    t2 = ((char*)((ng9)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t13 == 1)
        goto LAB16;

LAB17:
LAB18:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(188, ng0);

LAB9:    xsi_set_current_line(189, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 3864);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 1, 0LL);
    goto LAB8;

LAB12:    xsi_set_current_line(192, ng0);

LAB19:    xsi_set_current_line(193, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 3864);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 1, 0LL);
    goto LAB18;

LAB14:    xsi_set_current_line(195, ng0);

LAB20:    xsi_set_current_line(196, ng0);
    xsi_set_current_line(196, ng0);
    t3 = ((char*)((ng1)));
    t5 = (t0 + 5464);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 32);

LAB21:    t2 = (t0 + 5464);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = ((char*)((ng2)));
    memset(t14, 0, 8);
    xsi_vlog_signed_less(t14, 32, t5, 32, t11, 32);
    t12 = (t14 + 4);
    t6 = *((unsigned int *)t12);
    t7 = (~(t6));
    t8 = *((unsigned int *)t14);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB22;

LAB23:    goto LAB18;

LAB16:    xsi_set_current_line(203, ng0);

LAB33:    xsi_set_current_line(204, ng0);
    t3 = ((char*)((ng4)));
    t5 = (t0 + 3864);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 1, 0LL);
    goto LAB18;

LAB22:    xsi_set_current_line(196, ng0);

LAB24:    xsi_set_current_line(197, ng0);
    xsi_set_current_line(197, ng0);
    t15 = ((char*)((ng1)));
    t16 = (t0 + 5624);
    xsi_vlogvar_assign_value(t16, t15, 0, 0, 32);

LAB25:    t2 = (t0 + 5624);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = ((char*)((ng2)));
    memset(t14, 0, 8);
    xsi_vlog_signed_less(t14, 32, t5, 32, t11, 32);
    t12 = (t14 + 4);
    t6 = *((unsigned int *)t12);
    t7 = (~(t6));
    t8 = *((unsigned int *)t14);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB26;

LAB27:    xsi_set_current_line(196, ng0);
    t2 = (t0 + 5464);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = ((char*)((ng4)));
    memset(t14, 0, 8);
    xsi_vlog_signed_add(t14, 32, t5, 32, t11, 32);
    t12 = (t0 + 5464);
    xsi_vlogvar_assign_value(t12, t14, 0, 0, 32);
    goto LAB21;

LAB26:    xsi_set_current_line(197, ng0);

LAB28:    xsi_set_current_line(198, ng0);
    t15 = (t0 + 4824);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    t19 = (t0 + 4824);
    t20 = (t19 + 72U);
    t21 = *((char **)t20);
    t22 = (t0 + 4824);
    t23 = (t22 + 64U);
    t24 = *((char **)t23);
    t25 = (t0 + 5464);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    t28 = (t0 + 5624);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    xsi_vlog_generic_get_array_select_value(t18, 8, t17, t21, t24, 2, 2, t27, 32, 1, t30, 32, 1);
    t31 = (t0 + 3544);
    t35 = (t0 + 3544);
    t36 = (t35 + 72U);
    t37 = *((char **)t36);
    t38 = (t0 + 5464);
    t39 = (t38 + 56U);
    t40 = *((char **)t39);
    t41 = ((char*)((ng2)));
    memset(t42, 0, 8);
    xsi_vlog_signed_multiply(t42, 32, t40, 32, t41, 32);
    t43 = (t0 + 5624);
    t44 = (t43 + 56U);
    t45 = *((char **)t44);
    memset(t46, 0, 8);
    xsi_vlog_signed_add(t46, 32, t42, 32, t45, 32);
    t47 = ((char*)((ng12)));
    memset(t48, 0, 8);
    xsi_vlog_signed_multiply(t48, 32, t46, 32, t47, 32);
    t49 = ((char*)((ng12)));
    xsi_vlog_convert_indexed_partindices(t32, t33, t34, ((int*)(t37)), 2, t48, 32, 1, t49, 32, 1, 1);
    t50 = (t32 + 4);
    t51 = *((unsigned int *)t50);
    t13 = (!(t51));
    t52 = (t33 + 4);
    t53 = *((unsigned int *)t52);
    t54 = (!(t53));
    t55 = (t13 && t54);
    t56 = (t34 + 4);
    t57 = *((unsigned int *)t56);
    t58 = (!(t57));
    t59 = (t55 && t58);
    if (t59 == 1)
        goto LAB29;

LAB30:    xsi_set_current_line(199, ng0);
    t2 = (t0 + 4984);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = (t0 + 4984);
    t12 = (t11 + 72U);
    t15 = *((char **)t12);
    t16 = (t0 + 4984);
    t17 = (t16 + 64U);
    t19 = *((char **)t17);
    t20 = (t0 + 5464);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    t23 = (t0 + 5624);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    xsi_vlog_generic_get_array_select_value(t14, 8, t5, t15, t19, 2, 2, t22, 32, 1, t25, 32, 1);
    t26 = (t0 + 3704);
    t27 = (t0 + 3704);
    t28 = (t27 + 72U);
    t29 = *((char **)t28);
    t30 = (t0 + 5464);
    t31 = (t30 + 56U);
    t35 = *((char **)t31);
    t36 = ((char*)((ng2)));
    memset(t34, 0, 8);
    xsi_vlog_signed_multiply(t34, 32, t35, 32, t36, 32);
    t37 = (t0 + 5624);
    t38 = (t37 + 56U);
    t39 = *((char **)t38);
    memset(t42, 0, 8);
    xsi_vlog_signed_add(t42, 32, t34, 32, t39, 32);
    t40 = ((char*)((ng12)));
    memset(t46, 0, 8);
    xsi_vlog_signed_multiply(t46, 32, t42, 32, t40, 32);
    t41 = ((char*)((ng12)));
    xsi_vlog_convert_indexed_partindices(t18, t32, t33, ((int*)(t29)), 2, t46, 32, 1, t41, 32, 1, 1);
    t43 = (t18 + 4);
    t6 = *((unsigned int *)t43);
    t13 = (!(t6));
    t44 = (t32 + 4);
    t7 = *((unsigned int *)t44);
    t54 = (!(t7));
    t55 = (t13 && t54);
    t45 = (t33 + 4);
    t8 = *((unsigned int *)t45);
    t58 = (!(t8));
    t59 = (t55 && t58);
    if (t59 == 1)
        goto LAB31;

LAB32:    xsi_set_current_line(197, ng0);
    t2 = (t0 + 5624);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = ((char*)((ng4)));
    memset(t14, 0, 8);
    xsi_vlog_signed_add(t14, 32, t5, 32, t11, 32);
    t12 = (t0 + 5624);
    xsi_vlogvar_assign_value(t12, t14, 0, 0, 32);
    goto LAB25;

LAB29:    t60 = *((unsigned int *)t34);
    t61 = (t60 + 0);
    t62 = *((unsigned int *)t32);
    t63 = *((unsigned int *)t33);
    t64 = (t62 - t63);
    t65 = (t64 + 1);
    xsi_vlogvar_wait_assign_value(t31, t18, t61, *((unsigned int *)t33), t65, 0LL);
    goto LAB30;

LAB31:    t9 = *((unsigned int *)t33);
    t61 = (t9 + 0);
    t10 = *((unsigned int *)t18);
    t51 = *((unsigned int *)t32);
    t64 = (t10 - t51);
    t65 = (t64 + 1);
    xsi_vlogvar_wait_assign_value(t26, t14, t61, *((unsigned int *)t32), t65, 0LL);
    goto LAB32;

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

LAB0:    t1 = (t0 + 7784U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = ((char*)((ng3)));
    t3 = (t0 + 8232);
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


extern void work_m_00000000000034445576_3945703665_init()
{
	static char *pe[] = {(void *)Initial_44_0,(void *)Always_72_1,(void *)Always_81_2,(void *)Always_114_3,(void *)Always_187_4,(void *)implSig1_execute};
	xsi_register_didat("work_m_00000000000034445576_3945703665", "isim/tf_isim_beh.exe.sim/work/m_00000000000034445576_3945703665.didat");
	xsi_register_executes(pe);
}
